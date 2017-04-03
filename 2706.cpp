#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd ( ll a, ll b ){
  ll c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll p,q;
  cin >>p>>q;
  ll g=gcd(p,q);
  ll res=q/g;
  if(res==1) res=10;
  cout << res <<endl;
}
