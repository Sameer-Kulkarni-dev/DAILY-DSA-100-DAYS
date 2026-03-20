#include<bits/stdc++.h>
using namespace std;    
int main(){
    int size=5;

    int nums[]={10,20,30,40,50};

    int smallest = INT_MAX; 
    int largest = INT_MIN;

    for(int i=0;i<size;i++){ 
        smallest=min(nums[i] , smallest);  // Update smallest if the current number is smaller
        largest=max(nums[i] , largest);    // Update largest if the current number is larger
    }
           
    cout<<" the smallest number is : "<<smallest<<endl; 
    cout<<" the largest number is : "<<largest<<endl;
    return 0;
       
    }

    




  
