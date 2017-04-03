#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;

char board[8][8];

int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1};

int mami_dfs(int x,int y,int cnt,int idx){
  int nx=x+dx[idx],ny=y+dy[idx];
  if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='x'){
    cnt++;
    return mami_dfs(nx,ny,cnt,idx);
  }
  else if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='o'){
    return cnt;
  }
  else if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='.'){
    return 0;
  }
  return 0;
}

int magi_dfs(int x,int y,int cnt,int idx){
  int nx=x+dx[idx],ny=y+dy[idx];
  if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='o'){
    cnt++;
    return magi_dfs(nx,ny,cnt,idx);
  }
  else if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='x'){
    return cnt;
  }
  else if(0<=nx && nx<=7 && 0<=ny &&ny<=7 && board[nx][ny]=='.'){
    return 0;
  }
  return 0;
}

int mami_count(int x,int y){//(x,y)に置いたときに返る枚数
  int res=0;
  for(int i=0;i<8;i++) res+=mami_dfs(x,y,0,i);
  return res;
}

int magi_count(int x,int y){//(x,y)に置いたときに返る枚数
  int res=0;
  for(int i=0;i<8;i++) res+=magi_dfs(x,y,0,i);
  return res;
}

int mami_solve(){//一個置いた後の状況
  int ma=-1,x,y;
  for(int i=0;i<8;i++)for(int j=0;j<8;j++){
    if(board[i][j]=='.' && mami_count(i,j)>ma){
      ma=mami_count(i,j);
      x=i;y=j;
    }
  }//最大を実現する場所
  if(ma<1) return false;
  board[x][y]=='o';
  for(int i=0;i<8;i++){
    int tmp=mami_dfs(x,y,0,i);
    for(int j=1;j<=tmp;j++){
      board[x+dx[i]*j][y+dy[i]*j]='o';
    }
  }
  return true;
}

bool magi_solve(){//一個置いた後の状況
  int ma=-1,x,y;
  for(int i=7;i>=0;i--)for(int j=7;j>=0;j--){
    if(board[i][j]=='.'&&magi_count(i,j)>ma){
      ma=magi_count(i,j);
      x=i;y=j;
    }
  }//最大を実現する場所
  if(ma<1) return false;
  board[x][y]='x';
  for(int i=0;i<8;i++){
    int tmp=magi_dfs(x,y,0,i);
    for(int j=1;j<=tmp;j++){
      board[x+dx[i]*j][y+dy[i]*j]='x';
    }
  }
  return true;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  for(int i=0;i<8;i++)for(int j=0;j<8;j++) cin>> board[i][j];
  bool mami_flag=true,magi_flag=true;
  while(mami_flag || magi_flag){
    mami_flag=mami_solve();
    magi_flag=magi_solve();
  //  cout<<mami_flag<<" "<<magi_flag<<endl;
  }
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      cout<< board[i][j];
    }
    cout<<endl;
  }
}
