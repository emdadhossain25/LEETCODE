#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class FizzBuzzClass
{

public:
    vector<string> fizzBuzz(int n) {

// vector for result
        vector<string> result;
        // iterator from 1 to n 
        for(int i =1; i<=n;i++){
            // check for multiples of 3 and 5 for this iteration
            if(multipleOf(i,3) && multipleOf(i,5)){
                result.emplace_back("FizzBuzz");
            }
            // check for multiples of 3 for this iteration
            else if(multipleOf(i,3)){
                result.emplace_back("Fizz");
            }
            // check for multiples of 5 for this iteration
            else if (multipleOf(i,5)){
                result.emplace_back("Buzz");
            }
            // convert the int to string and append it result string vector
            else{
                result.emplace_back(std::to_string(i));
            }
        }
        return result;
    }
    public:
    bool multipleOf(int n,int k){
        return n%k==0;
    }

    
}; 

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    FizzBuzzClass fizzBuzzClass;
    vector<string>result =fizzBuzzClass.fizzBuzz(15);
    for (int i = 0; i < result.size(); i++)
    {
    cout<<result.at(i)<<endl;
        
    }
    
    return 0;
}





