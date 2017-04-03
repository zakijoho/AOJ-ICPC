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

  int n;
  cin >> n;
  int mae=0,go=0,res=0;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    if(s=="A") mae++;
    else go++;
    if(s=="Uh" && mae>=go) res++;
  }
  if(mae==res) cout << "YES" << endl;
  else cout << "NO" << endl;
}
