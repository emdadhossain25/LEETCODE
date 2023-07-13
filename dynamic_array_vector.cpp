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
  vector<int> v;  // this declares a dynamic array
  v.push_back(4); // [4] adds one index and pushes value in that
  v.push_back(2); // [4,2]

  cout << v.back() << '\n'; // looks at the last index and returns element [2]
  v.pop_back();             // removes last element with index
  cout << v.back() << '\n'; // [4]

  vector<int> v2 = {1, 2, 3, 4, 5}; // create a vector of 5 elements
  vector<int> v3(10);               // creates a vector of size 10 with initial value of 0;
  vector<int> v4(10, 5);            // creates a vector of size 10 with initial value of 5;
  cout << v4.back() << '\n';        // [5]
                                    // push_back is of O(1);
  return 0;
}