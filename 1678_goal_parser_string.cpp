#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

string interpret(string command)
{
  string result = "";
  int i = 0;
  while (i < command.size())
  {

    if (command.at(i) == 'G')
    {
      result += "G";
      i++;
    }
    else
    {
      if (command.at(i++) == '(')
      {
        if (command.at(i) == ')')
        {
          result += "o";
          i++;
        }
        else
        {
          result += "al";
          i += 3;
        }
      }
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
  // string command = "G()()()()(al)";
  // string command = "(al)G(al)()()G";
  string command ="G()(al)";
  cout << interpret(command) << endl;
  return 0;
}