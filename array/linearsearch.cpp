#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[] , int size , int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found in the array

}

int main(){
int arr[]={2,5,6,8,4,58};
int size=6;
int target=544;
cout<<LinearSearch(arr , size , target)<<endl;
return 0;

}