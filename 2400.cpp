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

  int m,t,p,r;
  while(true){
    cin >>m >> t >> p >> r;//チーム数　問題数　レコード数
    if(t==0) break;
    int seikai[t+1]={0},penalty[t+1]={0},gotou[t+1][p+1]={0};
    for(int i=0;i<r;i++){
      int j,tID,pID,time;
      cin >> time>> tID >> pID >> j;
      if(j==0){
        seikai[tID]++;
        penalty[tID] += gotou[tID][pID]*20+time;
      }
      else{
        gotou[tID][pID]++;
      }
    }
    bool checked[t+1]={false};
    int preseikai=-1,prepena=-1;
    for(int i=t;i>=1;i--){
      int team,seikaimax=-1,pena=INF;
      for(int j=t;j>=1;j--){
        if(!checked[j]){
          if(seikaimax<seikai[j]){
            seikaimax=seikai[j];
            team=j;
            pena=penalty[j];
          }
          else if(seikaimax==seikai[j]){
            if(pena>penalty[j]){
              team=j;
              pena=penalty[j];
            }
          }
        }
      }
      checked[team]=true;
      if(prepena==1) cout << team ;
      else if(prepena==pena && preseikai==seikaimax) cout << "=" << team;
      else cout << "," << team;
      preseikai=seikaimax,prepena=pena;
    }
    cout << endl;
  }
}
