#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)

{
  int n = nums1.size();
  vector<int> ans(n, -1);

  // need stack to find the next greater element in num2 first ...
  // num2 = [1,3,4,2]
  // 1 -> 3
  // 3 -> 4
  // 4 -> -1
  // 2-> -1
  // need hashmap for the above mapping

  stack<int> s;
  unordered_map<int, int> m;

  for (int x : nums2)
  {
    // check the current number and the top of the stack
    while (s.size() && s.top() < x)
    {
      // meaning x the next greater element;
      // s.top -> x
      // e.g. s.top() =1  and x=3
      m[s.top()] = x;
      // x could be the next greater element for others
      s.pop();
    }

    // include x
    s.push(x);
  }

  for (int i = 0; i < n; i++)
  {
    if (m.count(nums1[i]))
    {
      ans[i] = m[nums1[i]];
    }
    // else it is the -1 which s the initial value
  }
  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> nums1 = {4, 1, 2};
  vector<int> nums2 = {1, 3, 4, 2};
  vector<int> result = nextGreaterElement(nums1, nums2);
  for (int res : result)
  {
    cout << res << endl;
  }
  return 0;
}
