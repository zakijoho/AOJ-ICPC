#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin>>n,n){
      char a[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      int k[n+1];
      for(int i=0;i<n;i++)cin>>k[i];
      string s;cin>>s;
      int len=s.length();
      for(int i=0;i<len;i++){
          int idx;
          if(s[i]>='a')  idx=(s[i]-'a');
          else idx=s[i]-'A'+26;
          idx=((idx+52-k[i%n])%52);
          cout<<a[idx];
      }
      cout<<endl;
  }
}
