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

  // geometric progression
  // 3,6,12,24 multiplied by 2 here value of k is 2;
  // (bk-a)/(k-1) = (24*2)-3/(2-1) = 45

  // 1+2+3+4+5+6 polynomial progression
  // n(n+1)/2 = 6(6+1)/2 = 21

  // 1e2 + 2e2 + 3e2= arithmetic progression =  n(n+1)(2n+1)/6 = 14

  // same distance progression 3+7+11+15  =  n(a+b)/2 (n is number of elements)


  return 0;
}