#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // set are of two types unordered_set(o(1)) structure set(o(logn))
  // structure set is based on balanced binary tree
  // unordered_set uses hashing
  // does not insert duplicate elements
  set<int> s = {1, 2, 3, 4, 5};

  s.erase(s.find(5));
  cout << s.count(5) << '\n';

  // c++ stl also has mutliset
  // enables us to have duplicate;
  // erase removes all element
  // can use s.erase(s.find(5)) to remove only one;

  multiset<int> ms;
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);
  cout << ms.count(5) << "\n";

  ms.erase(ms.find(5));
  
  cout << ms.count(5) << "\n";
  return 0;
}