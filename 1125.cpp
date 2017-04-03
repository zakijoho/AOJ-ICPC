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
  while(true){
    cin >> n;
    if(n==0)break;
    int mp[101][101]={0};
    int w,h;
    cin >> w >> h;
    for(int i=0;i<n;i++){
      int x,y;
      cin >> x >> y;
      mp[x][y]=1;
    }
    int s,t;
    cin >> s >> t;
    int res=0;
    for(int i=1;i<=w-s+1;i++){
      for(int j=1;j<=h-t+1;j++){
        int temp=0;
        for(int k=0;k<s;k++){
          for(int l=0;l<t;l++){
            temp += mp[i+k][j+l];
          }
        }
        res=max(res,temp);
      }
    }
    cout << res << endl;
  }
}
