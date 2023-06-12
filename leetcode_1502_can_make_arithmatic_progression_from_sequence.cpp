#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

bool canMakeArithmeticProgression(vector<int> &arr)
{
  sort(arr.begin(), arr.end());
  int difference = arr[1] - arr[0];
  int i = 1;
  int result = false;
  for (; i < arr.size(); i++)
  {

    if (difference == (arr[i] - arr[i - 1]))
    {
      result = true;
    }
    else
    {
      result = false;
      break;
    }
  }

  return result;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // vector<int> arr = {3, 5, 1}; // result is true or 1
  // vector<int> arr = {1, 2, 4}; // result is false or 0
  vector<int> arr = {1, 100};  // result is true or 1
  cout << canMakeArithmeticProgression(arr) << endl;
  return 0;
}