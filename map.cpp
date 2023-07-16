#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  map<string,int> m;
  m["a"]=1;
  m["b"]=2;
  cout<<m["check"]<<'\n'; // returns 0

  if(m.count("a")){
    //key exists
  }

  for(auto x:m){
    cout<< x.first <<" "<<x.second<<"\n";
          //  prints
            // a 1
            // b 2
            // check 0
  }

  return 0;
}