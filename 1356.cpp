#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int d[n];
  for(int i=0;i<n;i++) cin >> d[i];
  set<ll> st;
  for(int i=0;i<n;i++){
    ll tmp=0;
    for(int j=i;j<n;j++){
      tmp=tmp*10+d[j];
      st.insert(tmp);
    }
  }
  bool flag=true;int idx=-1;
  while(flag){
    idx++;
    if(st.find(idx)!=st.end()){
      flag=false;
    }
  }
  cout << idx << endl;
}
