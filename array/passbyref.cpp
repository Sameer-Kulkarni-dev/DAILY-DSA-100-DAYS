#include<iostream>
using namespace std;
void changeArr(int arr[] , int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[]={1,2,3};

    changeArr(arr , 3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// array is the non premitive data type in c++ and it is used to store multiple values of the same type in a single variable.


//  pass by refernece in array is possible because when we pass an array

// to a function, we are actually passing a pointer to the first element of the array.

// This means that any changes made to the array within the function will affect the original array outside the function.

// In the example above, the changeArr function modifies the elements of the array by doubling their values,

// and these changes are reflected in the main function when we print the array after calling changeArr.
