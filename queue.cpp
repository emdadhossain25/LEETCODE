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
  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(5);
  cout<<q.front()<<'\n';
  q.pop();
  cout<<q.front()<<'\n';
  return 0;
}