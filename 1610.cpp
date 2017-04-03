#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;cin>>s;
  for(int i=0;i<s.length();i++){
      if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o') continue;
      else cout<<s[i];
  }
  cout<<endl;
}
