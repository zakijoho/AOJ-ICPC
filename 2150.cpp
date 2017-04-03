#include <bits/stdc++.h>

using namespace std;

const int MAX=1299709;
int prime[MAX+1]={0};//0::prime 1::NOTprime;

void hurui(){
  prime[1]=1;
  for(int i=1;i*i<=MAX;i++){
    for(int j=2;j<=MAX/i;j++){
      if(prime[i]==0)prime[i*j]=1;
    }
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  hurui();

  std::vector<int> v;
  for(int i=1;i<=MAX;i++) if(prime[i]==0)v.push_back(i);
  int n,p;
  while(true){
    cin >> n >> p;
    if(n==-1) break;
    set<int> st;
    int idx=0;
    while(v[idx]<=n)idx++;
    for(int i=idx;i<idx+p;i++){
      for(int j=i;j<idx+p;j++){
        st.insert(v[i]+v[j]);
        //cout << v[i]<< " " << v[j]<<" "<<v[i]+v[j] << endl;
      }
    }
    auto itr=st.begin();
    for(int i=0;i<p;i++) itr++;
    itr--;
    cout << *itr << endl;
  }
}
