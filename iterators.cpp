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
  vector<int> v ={1,3,5,2,0};
  sort(v.begin(),v.end());
  cout<<v.at(4)<<endl;
  reverse(v.begin(),v.end());
  cout<<v.at(4)<<endl;
  random_shuffle(v.begin(),v.end());
  cout<<v.at(4)<<endl;
  int a[] ={9,8,2,7};
  int n=sizeof(a)/sizeof(a[0]);
  sort(a,a+n);
  cout<<a[3]<<'\n';
  reverse(a,a+n);
  cout<<a[3]<<'\n';
  random_shuffle(a,a+n);
  cout<<a[3]<<'\n';
  return 0;
}