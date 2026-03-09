#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1; // Base case: factorial of 0 is 1
    }
    return n*factorial(n-1); // Recursive case: n! = n * (n-1)! 
                            // logic behind this is that we can break down the factorial of n into n multiplied by the factorial of (n-1), and this process continues until we reach the base case where n is 0.
}// The recursive calls will keep reducing the value of n until it reaches 0, at which point it will return 1. Then, as the recursive calls unwind, it will multiply the values together to compute the final factorial result.
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}