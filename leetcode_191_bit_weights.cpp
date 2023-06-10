#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int hammingWeight(uint32_t n)
{

  // approach 1. we can use built in funciton
  // return __builtin_popcount(n);

  // approach 2. we can check each bit by
  // increase count by 1 if the bit is set

  int count = 0;
  while (n)
  {
    if (n & 1 > 0) count++;

    // shift 1 bit to the right 
    // it is same as n/=2;(n=n/2)
    n >>= 1;
  }
  return count;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  cout << hammingWeight(n) << endl;
  return 0;
}