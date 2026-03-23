// kadanes algorthm to find the maximum sum of a contiguous subarray in an array of integers
// logic behind the algorithm is to keep track of the maximum sum of a subarray ending at each index '
// and update the global maximum sum accordingly  
// intmin is used to handle cases where all elements in the array are negative,
// ensuring that the algorithm correctly identifies the maximum sum even in such scenarios.


#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    int maxSum=INT_MIN;
    int cs=0;

    for(int i=0 ; i<n ; i++){
        cs +=arr[i];
        maxSum=max(cs , maxSum);

        if(cs<0){
            cs=0;
        }
        cout<<" max sum is sub array is  "<<maxSum<<endl;
    }
    return 0;
    
}
