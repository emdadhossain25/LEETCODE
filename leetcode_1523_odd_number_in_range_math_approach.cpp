#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i,a,b) for(int i=a;i<=b;++i)
int countOddNumbers(int low,int high){
  // math approach
  //count of odd numbers between [low,high]
  // = that between [1,high]- that between [1,low) 
  //the count of odd numbers between 1 and n would be (n+1)/2


  return (high+1)/2-low/2;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int high,low;
  cin>>low>>high;
  cout<<countOddNumbers(low,high)<<endl;
  return 0;
}