#include<bits/stdc++.h>
using namespace std;
int sum(int n){ // This function calculates the sum of the first n natural numbers using recursion.
    if(n==1){   // Base case: when n is 1, the sum of the first 1 natural number is simply 1. This serves as the stopping point for the recursion.
        return 1; // Base case: the sum of the first 1 natural number is 1
    }
    return n + sum(n-1); // Recursive case: the sum of the first n natural numbers can be expressed as n plus the sum of the first (n-1) natural numbers. 
                            // logic behind this is that we can break down the sum of n natural numbers into n added to the sum of (n-1) natural numbers, and this process continues until we reach the base case where n is 1.
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n);
    return 0; // The recursive calls will keep reducing the value of n until it reaches 1, at which point it will return 1. Then, as the recursive calls unwind, it will add the values together to compute the final sum result.
}
// time complexity of this code is O(n) because in the worst case, we will make n recursive calls until we reach the base case. Each call involves a constant amount of work (addition and function call overhead), so the overall time complexity is linear with respect to n.
// space complexity of this code is O(n) because each recursive call adds a new frame to the call stack, and in the worst case, we will have n frames on the stack until we reach the base case. Once we reach the base case, the stack will start unwinding, but at its peak, it will require O(n) space to hold all the frames.

// how the addition works in the recursion tree for sum(5):
// sum(5)
// ├── 5 + sum(4)
// │   ├── 4 + sum(3)
// │   │   ├── 3 + sum(2)
// │   │   │   ├── 2 + sum(1)
// │   │   │   │   ├── 1 (base case)
// how sum is calculated behind the scene if im a absolute beginner:
// sum(5) will call sum(4), which will call sum(3), which will call sum(2), which will call sum(1). When sum(1) is called, it will return 1 because of the base case. Then, as the recursive calls unwind, we will have:
// sum(2) will return 2 + 1 = 3 
// sum(3) will return 3 + 3 = 6
// sum(4) will return 4 + 6 = 10
// sum(5) will return 5 + 10 = 15
// So, the final output will be "Sum of first 5 natural numbers is 15".