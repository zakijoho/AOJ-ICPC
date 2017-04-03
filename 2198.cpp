#include <bits/stdc++.h>

using namespace std;

typedef pair<double,string> pds;

bool hikaku(pds lhs,pds rhs){
  if(lhs.first>rhs.first) return true;
  else return lhs.second<rhs.second;
}
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin>>n,n){
    string l;
    int p,a,b,c,d,e,f,s,m;
    vector<pds> v;
    for(int i=0;i<n;i++){
      cin >>l>>p>>a>>b>>c>>d>>e>>f>>s>>m;
      double eff=(f*s*m-p)/(a+b+c+m*(d+e));
      v.push_back(make_pair(eff,l));
      cout<<eff<<" "<<l<<endl;
    }
    sort(v.begin(),v.end(),hikaku);
    for(int i=0;i<n;i++){
      cout << v[i].second << " "<<v[i].first<< endl;
    }
    cout <<"#" << endl;
  }
}
