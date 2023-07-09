#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int arr[]= {1,3,8,2,9,2,5,6};
  
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    for(int j =1;j<n;j++){
      if(arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
      }
    }
  }
  for(auto x: arr){
    cout<<x<<'\n';
  }
 
  return 0;
}