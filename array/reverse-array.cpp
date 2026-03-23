// two pointer approach to reverse an array

#include<iostream>
using namespace std;

void ReverseArr(int arr[] , int size){ // Function to reverse the array
    int start=0; // Initialize start pointer to the beginning of the array
    int end=size-1; // Initialize end pointer to the end of the array
     
    while(start<end){ // Loop until the start pointer is less than the end pointer

        swap(arr[start] , arr[end]); // Swap the elements at the start and end pointers

        start++; // Move the start pointer towards the right

        end--; // Move the end pointer towards the left
        
    }
}
 int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    ReverseArr(arr , size);
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }

 // In this code, we define a function ReverseArr that takes an array
 // and its size as parameters. We use two pointers, start and end, 
 //to keep track of the positions in the array. 
 //We swap the elements at these positions and then move the pointers towards each other
 // until they meet or cross. This effectively reverses the array in place without using any additional space. 
 //Finally, we print the reversed array in the main function.