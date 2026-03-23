#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    int maxsum=INT_MIN;

    for (int st=0 ; st<n ; st++){
        int curr_Sum=0;
        for (int end=st ; end<n ; end++){
            curr_Sum += arr[end];
            maxsum=max(curr_Sum , maxsum);
            
            }
            cout<<" ";
        }
        cout<<"max sub array sum  "<<maxsum<<endl;
    
    return 0;
}

// o(n^2)