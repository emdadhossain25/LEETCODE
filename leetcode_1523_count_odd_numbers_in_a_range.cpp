#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int countOdds(int low, int high){
  // brute force
  int ans=0;
  for (int i = low; i <= high; i++)
  {
    // check if the number is odd
    if (i & 1)
    {
      // if so add 1 to answer (counter of odds);
      ans+=1;
    }
  }

  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int low, high;
  cin >> low >> high;
  cout << countOdds(low, high) << endl;
  return 0;
}
