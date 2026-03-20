#include<iostream>
using namespace std;
int main(){
    int size=5;
    int nums[size];
    int smallest = INT_MAX; // Initialize smallest to the maximum possible integer value

    for(int i=0;i<size;i++){
        cout<< " enter the number "<<i+1<<endl;// Prompt the user to enter a number
        cin>>nums[i];// Read the number into the array

    }
    
    if(nums[0]<INT_MAX){ // Check if the first number is less than the maximum integer value
        smallest=nums[0]; // If it is, set smallest to the first number
         cout<<" the smallest number is : "<<smallest<<endl;
    }
   
}