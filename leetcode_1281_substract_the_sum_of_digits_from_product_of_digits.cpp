#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int subtractProductAndSum(int n)
{
  int product = 1;
  int sum = 0;
  while (n)
  {
    int digit = n % 10;
    sum += digit;
    product *= digit;
    n /= 10;
  }
  return product-sum;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  cout << subtractProductAndSum(n) << endl;
  return 0;
}