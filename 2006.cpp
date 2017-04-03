/*
1: . , ! ? (スペース)
2: a b c
3: d e f
4: g h i
5: j k l
6: m n o
7: p q r s
8: t u v
9: w x y z
*/

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

  char moji[10][5];
  moji[1]={".",",","!","?"," "}
  int n;
  cin >> n;
  string s;
  for(int i=0;i<n;i++){
    cin >> s;
    int memo[10]={0};
    int len=s.length();
    for(int j=0;j<len;j++){
      if(s[j]=='0'){

      }
    }
  }

}
