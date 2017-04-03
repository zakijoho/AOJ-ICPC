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

  int n,m,a;
  while(true){
    cin >> n  >> m >>a;
    if(n==0) break;
    int line[1001][1001]={0};
    for(int i=0;i<m;i++){
      int h,p,q;
      cin >> h >> p >>q;
      line[p][h]=q;
      line[q][h]=p;
    }
    for(int hei=1000;0<hei;hei--){
      if(line[a][hei]!=0) a=line[a][hei];
    }
    cout << a << endl;
  }
}
