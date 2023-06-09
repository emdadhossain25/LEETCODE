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
  // size of vector
 int n = inputArray.size();
 // sort 
 sort(inputArray.begin(),inputArray.end());
 
 // sum of elements
 int sum = accumulate(inputArray.begin(),inputArray.end(),0);

 // substract first element
 sum-=inputArray[0];

 // substract last element
 sum-=inputArray[n-1];

 // average of remaining sum
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