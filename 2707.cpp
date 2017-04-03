#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll bekijo(ll a,ll n){
    ll res=1;
    for(ll l=0;l<n;l++) res*=a;
    return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n,k;cin>>n>>k;
  if(n>k) cout<<bekijo(k,n-1)-1<<endl;
  else cout<<n-1<<endl;
}
