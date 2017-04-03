#include <bits/stdc++.h>

using namespace std;

char field[51][51];
int black[51][51],white[51][51];//0:non-rinsetu 1::rinsetu
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int w,h;

void recB(int x,int y){
  if(field[x][y]=='B' || black[x][y]==1){
    for(int i=0;i<4;i++){
      int nx=x+dx[i],ny=y+dy[i];
      if(0<=nx && nx<h && 0<=ny && ny<w){
        if(field[nx][ny]!='W' && black[nx][ny]==0){
          black[nx][ny]=1;
          recB(nx,ny);
        }
      }
    }
  }
}

void recW(int x,int y){
  if(field[x][y]=='B' || white[x][y]==1){
    for(int i=0;i<4;i++){
      int nx=x+dx[i],ny=y+dy[i];
      if(0<=nx && nx<h && 0<=ny && ny<w){
        if(field[nx][ny]!='B' && white[nx][ny]==0){
          white[nx][ny]=1;
          recW(nx,ny);
        }
      }
    }
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(cin>>w>>h,w|h){
    for(int i=0;i<h;i++){
      string s;cin >>s;
      for(int j=0;j<w;j++){
        field[i][j]=s[j];
      }
    }
    for(int i=0;i<h;i++) for(int j=0;j<w;j++){
      black[i][j]=0,white[i][j]=0;
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(field[i][j]=='W') recW(i,j);
        if(field[i][j]=='B') recB(i,j);
      }
    }
    int resB=0,resW=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(field[i][j]!='B' && black[i][j]==1 && white[i][j]==0)resB++;
        if(field[i][j]!='W' && black[i][j]==0 && white[i][j]==1)resW++;
      }
    }
    cout << resB << " "<< resW<<endl;
  }
}
