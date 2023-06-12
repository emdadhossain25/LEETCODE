#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int arraySign(vector<int> &nums)
{

  int sum = 1;
  for (int num : nums)
  {
    if (num > 0)
    {
      sum *= 1;
    }
    else if (num < 0)
    {
      sum *= -1;
    }
    else
    {
      sum *= 0;
    }
  }

  return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // vector<int> vi = {-1, -2, -3, -4, 3, 2, 1}; // answer will 1
  vector<int> vi = {1, 5, 0, 2, -3}; // answer will 0
  // vector<int> vi = {-1, 1, -1, 1, -1}; // answer will -1
  // vector<int> vi = {9, 72, 34, 29, -49, -22, -77, -17, -66, -75, -44, -30, -24}; // answer will -1
  // vector<int> vi = {9, 72, 34, 29, -49, -22, -77, -17, -66, -75, -44, -30, -24}; // answer will -1

  cout << arraySign(vi) << endl;
  return 0;
}