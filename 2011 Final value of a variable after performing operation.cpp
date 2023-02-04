#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    vector<string> ops ={"++X","++X","X++"};

    // explaination when the value is ++ we add 1 
    // when the value is -- we substract 1 
    // return the final value


    int result= accumulate(
        begin(ops),
        end(ops),
        0,
        [](int x, const auto& s){
                return x+ (s[1]== '+' ? 1:-1);
            });
cout<<result<<endl;
return result;
}