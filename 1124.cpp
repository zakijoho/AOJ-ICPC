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

  int n,q;
  while(true){
    cin >> n >>q;
    if(n==0) break;
    int day[110]={0};
    for(int i=0;i<n;i++){
      int m;cin >> m;
      for(int j=0;j<m;j++){
        int d;cin >> d;
        day[d]++;
        }
      }
    int max=0,ans=0;
    for(int i=0;i<105;i++){
      if(day[i]>=q){
        if(max<day[i]){
          max=day[i];
          ans=i;
        }
      }
    }
    cout << ans << endl;
  }
}
