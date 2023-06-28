#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

string mergeAlternately(string word1, string word2)
{
  string result="";
  for(int i=0,j=0;i<word1.size()||j<word2.size();i++,j++){
    
    if(i<word1.size()){
    result+=word1.at(i);
    }
    if(j<word2.size()){
    result+=word2.at(j);
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
  string word1 = "abc", word2 = "pqr";
  // string word1="ab", word2 = "pqrs";
  // string word1="abcd", word2 = "pq";
  cout << mergeAlternately(word1, word2) << endl;

  return 0;
}