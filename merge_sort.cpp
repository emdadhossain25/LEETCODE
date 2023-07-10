#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void merge(int left, int right, int mid, vector<int> &arr, vector<int> &tempArray)
{
  int start1 = left;
  int start2 = mid + 1;
  int n1 = mid - left + 1;
  int n2 = right - mid;
  for (int i = 0; i < n1; i++)
  {
    tempArray[start1 + i] = arr[start1 + i];
  }
  for (int i = 0; i < n2; i++)
  {
    tempArray[start2 + i] = arr[start2 + i];
  }
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2)
  {
    if (tempArray[start1 + i] < tempArray[start2 + j])
    {
      arr[k] = tempArray[start1 + i];
      i++;
    }
    else
    {
      arr[k] = tempArray[start2 + j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    arr[k] = tempArray[start1 + i];
    i++;
    k++;
  }

  while (j < n2)
  {
    arr[k] = tempArray[start2 + j];
    j++;
    k++;
  }
}

void mergeSort(int left, int right, vector<int> &arr)
{
  vector<int> tempArr(arr.size());
  if (left >= right)
    return;
  int mid = (right + left) / 2;
  mergeSort(left, mid + 1, arr);
  mergeSort(mid, right, arr);
  merge(left, right, mid, arr, tempArr);
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin>>n;
  vector<int> nums(n,0) ;
  while(n--){
    int x;
    cin>>x;
    nums.push_back(x);
  }
  // splits arr of a+b into a+k and (k+1)+b
  // uses recursion
  // finds k (a+b)/2 -> which gives logn operation
  // swaps value to sort
  mergeSort(0, nums.size() - 1, nums);
  
  return 0;
}