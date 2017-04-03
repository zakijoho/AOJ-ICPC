#include <bits/stdc++.h>

using namespace std;

string mtoc(string s){
  int len=s.length();
  string tmp="";
  tmp+=s[0];
  int i=1;
  for(;i<len-3;i++){
    string sub=s.substr(i,3);
    if(sub=="mew"){
      i +=2;
      tmp+='c';
    }
    else tmp+=s[i];
  }
  for(;i<len;i++) tmp+=s[i];
  return tmp;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;cin>>s;
  s=mtoc(s);
  if(s=="mew"){
    cout << "Cat"<<endl;
    return 0;
  }
  while(s.length()>5){
    int len=s.length();
    string tmp="";
    tmp+=s[0];
    int i=1;
    for(;i<len-3;i++){
      string sub=s.substr(i,3);
      if(sub=="mew"){
        i +=2;
        tmp+='c';
      }
      else tmp+=s[i];
    }
    for(;i<len;i++) tmp+=s[i];

  }
}
