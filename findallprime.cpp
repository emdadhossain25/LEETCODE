#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a,div;
    cin>>a;
    while(a>2){
        div=2;
        while(div<a){
            if(a%div==0){
                --a;
            }else{
                ++div;
            }
        }
        cout<<a<<endl;
        --a;
    }

    return 0;
}