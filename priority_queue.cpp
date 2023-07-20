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
  priority_queue<int> p; \\uses hash set, sorts in decreasing order O(logn) time;
  p.push(3);
  p.push(5);
  p.push(2);
  cout<<p.top()<<'\n'; \\5
  p.pop();
  cout<<p.top()<<'\n'; \\3
  p.pop();
  p.push(6);
  cout<<p.top()<<'\n';\\6
  p.pop();
  return 0;
}