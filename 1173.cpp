#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  while(true){
    getline(cin,s);
    //cout << s << endl;
    if(s==".") break;
    int len=s.length();
    std::vector<char> v;
    for(int i=0;i<len;i++){
      if(s[i]=='(' || s[i]==')' || s[i]=='[' || s[i]==']'){
        v.push_back(s[i]);
      }
    }
    bool update=true;
    while(update){
      update=false;
      int le=v.size();
      for(int i=0;i<le-1;i++){
        if((v[i]=='(' && v[i+1]==')') || (v[i]=='[' && v[i+1]==']')){
          v.erase(v.begin()+i,v.begin()+i+1);
          update=true;
          i=le;
        }
      }
      for(int i=0;i<v.size();i++) cout << v[i];
      cout << endl;
    }
    if(v.empty()) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
