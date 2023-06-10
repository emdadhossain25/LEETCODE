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

  int count = 0;
 while(n){
  if(n&1>0){
    count++;
  }
  n>>=1;
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