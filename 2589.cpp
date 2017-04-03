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
    cin >> s;
    if(s=="#") break;
    std::vector<int> v;
    //0::north,,1::west;
    int len=s.length();
    for(int i=0;i<len;i++){
      if(s[i]=='n') v.push_back(0);
      else if(s[i]=='w') v.push_back(1);
    }
    int size=v.size();
    int bunbo=(1 << (size-1)),bunsi=0;
    for(int i=size-1;0<=i;i--){
      if(v[i]==1){
        bunsi=bunsi*2+90;
      }
      else{
        bunsi = bunsi*2;
      }
    }
    while(bunsi%2==0){
      bunsi /=2;
      bunbo /=2;
    }
    cout << bunsi << "/" << bunbo << endl;
  }
}
