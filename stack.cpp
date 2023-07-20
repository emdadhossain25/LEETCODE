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
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(5);
  cout<<s.top()<<'\n';
  s.pop();
  cout<<s.top()<<'\n';
  return 0;
}