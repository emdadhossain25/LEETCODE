#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int move(int n)
{
  int sum = 0;
  while (n)
  {
    int d = n % 10;
    // sum of digits squares
    sum += d * d;
    n /= 10;
  }
  return sum;
}

bool isHappy(int n)
{

  int slow = n, fast = move(n);
  // slow pointer moves one step
  // fast pointer moves two step
  while (fast != 1 && slow != fast)
  {
    slow = move(slow);
    fast = move(move(fast));
  }
  return fast == 1;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin>>n;
  cout << isHappy(n) << endl;
  return 0;
}