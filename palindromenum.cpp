#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    if(dup==rev){
        cout<<"yes it is palindrome:";
    }   
    else{
        cout<<"no it is not palindrome:";
    }
    return 0;
}

// time complexity is O(log n) because 
//we are dividing the num by 10 in each iteration 
//and the number of digits in a number is log10(n) which is equivalent to log n.