#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

double average(vector<int> &inputArray)
{
  stable_sort(inputArray.begin(), inputArray.end());
  int totalElements = 0, totalAverageElements = 0;
  // iterate over vector
  for (auto &p : inputArray)
  {
    totalElements += p;
  }
  int size = inputArray.size();
  totalAverageElements = totalElements - (inputArray.at(0) + inputArray.at(size - 1));
  double answer = static_cast<double>(totalAverageElements) / (size - 2);
  return answer;
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