#include <bits/stdc++.h>

using namespace std;

string naming(string s,int k){
  int len=s.length();
  string res="";
  bool flag=true;//母音？
  for(int i=0;i<len;i++){
    if(flag) res+=s[i];
    if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o')flag=true;
    else flag=false;
  }
  string memo="";
  for(int i=0;i<k;i++) memo+=s[i];
  if((int)res.length()<k)return res;
  else return memo;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int n;cin>>n;
    if(n==0) break;
    int ma=-1;
    string ports[n];
    for(int i=0;i<n;i++){
      cin>>ports[i];
      ma=max((int)ports[i].length(),ma);
    }
    bool flag=false;
    for(int k=1;k<=ma;k++){
      set<string> st;
      bool judge=true;
      for(int i=0;i<n;i++){
        string kouho=naming(ports[i],k);
        if(st.find(kouho)!=st.end()){
          judge=false;
          break;
        }
        st.insert(kouho);
      }
      if(judge){
        cout << k <<endl;
        flag=true;
        break;
      }
    }
    if(!flag) cout <<-1<<endl;
  }
}
