#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
const int INF = numeric_limits<int>::max() / 2;

int sx,sy,n,t;
int field[200][200];//0:can't 1:can
int d[200][200];
int dx[6]={1,0,1,-1,0,-1},dy[6]={1,1,0,-1,-1,0};

void solve(){
  queue<pii> que;
  for(int i=0;i<200;i++) for(int j=0;j<200;j++) d[i][j]=INF;
  que.push(pii(sx+100,sy+100));
  d[sx+100][sy+100]=0;

  while(que.size()){
    pii p=que.front();que.pop();
    for(int i=0;i<6;i++){
      int nx=p.first+dx[i],ny=p.second+dy[i];

      if(0<=nx&&nx<200&&0<=ny&&ny<200&&field[nx][ny]&&d[nx][ny]==INF){
        que.push(pii(nx,ny));
        d[nx][ny]=d[p.first][p.second]+1;
      }
    }
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(cin>>n>>t,n|t){
    for(int i=0;i<200;i++) for(int j=0;j<200;j++) field[i][j]=1;
    for(int i=0;i<n;i++){
      int x,y;cin >> x>> y;
      field[x+100][y+100]=0;
    }
    cin >> sx>>sy;
    solve();
    int res=0;
    for(int i=0;i<200;i++) for(int j=0;j<200;j++) if(d[i][j]<=t) res++;
    cout <<res << endl;
  }
}
