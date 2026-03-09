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
// time complexity of this code is O(n) because in the worst case, we will make n recursive calls until we reach the base case. Each call involves a constant amount of work (multiplication and function call overhead), so the overall time complexity is linear with respect to n.
// recursion tree for factorial(5):
// factorial(5) 
// ├── 5 * factorial(4)
// │   ├── 4 * factorial(3)
// │   │   ├── 3 * factorial(2)
// │   │   │   ├── 2 * factorial(1)
// │   │   │   │   ├── 1 * factorial(0)
// │   │   │   │   │   ├── 1 (base case)
// │   │   │   │   ├── 1 (base case)

// space complexity of this code is O(n) 
//because each recursive call adds a new frame to the call stack,
// and in the worst case, we will have n frames on the stack until we reach the base case. Once we reach the base case, 
//the stack will start unwinding, but at its peak, it will require O(n) space to hold all the frames.
