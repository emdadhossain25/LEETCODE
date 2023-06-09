#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

double average(vector<int>& inputArray)
{
 int n = inputArray.size();
 sort(inputArray.begin(),inputArray.end());
 int sum = accumulate(inputArray.begin(),inputArray.end(),0);
 sum-=inputArray[0];
 sum-=inputArray[n-1];
 double result = (double) sum/(n-2);
 return result;

}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // input
  int numberOfInputs;
  vector<int> inputArray;
  int i = 0;

  cin >> numberOfInputs;

  // insert in vectors
  while (i < numberOfInputs)
  {
    int element;
    cin >> element;
    inputArray.push_back(element);
    ++i;
  }

  cout << average(inputArray) << endl;
  return 0;
}