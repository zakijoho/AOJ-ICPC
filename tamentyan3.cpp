#include <bits/stdc++.h>
//清一判定最終完成版・七対子は自力で見つけよう
using namespace std;
bool mentsu(int a,int b,int c){
  bool res=false;
  std::vector<int> v;
  v.push_back(a);v.push_back(b);v.push_back(c);
  sort(v.begin(),v.end());
  if(a==b&&b==c) res=true;
  if(v[2]==v[1]+1 && v[1]==v[0]+1) res=true;
  return res;
}

template < class BidirectionalIterator >
bool next_combination ( BidirectionalIterator first1 ,
  BidirectionalIterator last1 ,
  BidirectionalIterator first2 ,
  BidirectionalIterator last2 )
{
  if (( first1 == last1 ) || ( first2 == last2 )) {
    return false ;
  }
  BidirectionalIterator m1 = last1 ;
  BidirectionalIterator m2 = last2 ; --m2;
  while (--m1 != first1 && !(* m1 < *m2 )){
  }
  bool result = (m1 == first1 ) && !(* first1 < *m2 );
  if (! result ) {
    // ①
    while ( first2 != m2 && !(* m1 < * first2 )) {
      ++ first2 ;
    }
    first1 = m1;
    std :: iter_swap (first1 , first2 );
    ++ first1 ;
    ++ first2 ;
  }
  if (( first1 != last1 ) && ( first2 != last2 )) {
    // ②
    m1 = last1 ; m2 = first2 ;
    while (( m1 != first1 ) && (m2 != last2 )) {
      std :: iter_swap (--m1 , m2 );
      ++ m2;
    }
    // ③
    std :: reverse (first1 , m1 );
    std :: reverse (first1 , last1 );
    std :: reverse (m2 , last2 );
    std :: reverse (first2 , last2 );
  }
  return ! result ;
}

template < class BidirectionalIterator >
bool next_combination ( BidirectionalIterator first ,
  BidirectionalIterator middle ,
  BidirectionalIterator last )
{
  return next_combination (first , middle , middle , last );
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;cin>>s;
  cout<<"calculating..."<<endl;
  std::vector<int> res;//当たり牌
  for(int i=1;i<=9;i++){
    std::vector<int> hand;
    for(int j=0;j<13;j++) hand.push_back(s[j]-'0');
    hand.push_back(i);
    sort(hand.begin(),hand.end());
    bool ans=false,ans1=false,ans2=false,ans3=false,ans4=false,atama=false;
    do{
      std::vector<int> v;
      ans1=mentsu(hand[0],hand[1],hand[2]);
      for(int i=3;i<14;i++) v.push_back(hand[i]);
      do{
        std::vector<int> v2;
        ans2=mentsu(v[0],v[1],v[2]);
        for(int j=3;j<11;j++) v2.push_back(v[j]);
        do{
          std::vector<int> v3;
          ans3=mentsu(v2[0],v2[1],v2[2]);
          for(int k=3;k<8;k++) v3.push_back(v2[k]);
          do{
            ans4=mentsu(v3[0],v3[1],v3[2]);
            atama=(v3[3]==v3[4]);
            ans=ans1&&ans2&&ans3&&ans4&&atama;
            if(ans){
              int hai[10]={0};
              hai[hand[0]]++;hai[hand[1]]++;hai[hand[2]]++;
              hai[v[0]]++;hai[v[1]]++;hai[v[2]]++;
              hai[v2[0]]++;hai[v2[1]]++;hai[v2[2]]++;
              hai[v3[0]]++;hai[v3[1]]++;hai[v3[2]]++;hai[v3[3]]++;hai[v3[4]]++;
              for(int i=1;i<=9;i++) if(hai[i]>4) ans=false;
            }
            /*if(!ans){
            int hais[10]={0};
            hais[hand[0]]++;hais[hand[1]]++;hais[hand[2]]++;
            hais[v[0]]++;hais[v[1]]++;hais[v[2]]++;
            hais[v2[0]]++;hais[v2[1]]++;hais[v2[2]]++;
            hais[v3[0]]++;hais[v3[1]]++;hais[v3[2]]++;hais[v3[3]]++;hais[v3[4]]++;
            bool chitoi=true;
            for(int i=1;i<=9;i++) if(hais[i]>0) if(hais[i]!=2)chitoi=false;
            if(chitoi) ans=true;
          }*///七対子判定
            if(ans) break;
          }while(next_combination(v3.begin(),v3.begin()+3,v3.end()));
          if(ans) break;
        }while(next_combination(v2.begin(),v2.begin()+3,v2.end()));
        if(ans) break;
      }while(next_combination(v.begin(),v.begin()+3,v.end()));
      if(ans) break;
    }while(next_combination(hand.begin(),hand.begin()+3,hand.end()));
    if(ans) res.push_back(i);
  }
  if(res.size()!=0){
    cout<<"当たり牌は"<<" ";
    for(int i=0;i<(int)res.size();i++) cout << res[i]<<" ";
    cout<<"萬です"<<endl;
  }
  else cout<<"和了れません"<<endl;
}
