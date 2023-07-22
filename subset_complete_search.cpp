#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> subset;
void search(int k){
  if(k==n){
    // process subset
  }else{
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back(); //  removes the last larger element
  }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin>>n;
  
  return 0;
}