#include<bits/stdc++.h>
using namespace std;
// reverse a num ex=1234 output=4321
int reversenum(int num){
    int rev=0;
    while(num>0){
        int rem=num%10; // this will give us the last digit of the num
        rev=rev*10+rem; // this will add the last digit to the rev and shift the previous digits to the left
        num=num/10; // this will remove the last digit from the num and we will continue till num becomes 0
    }
    return rev;
}
int main(){
    int n;
    cout<<"enter the num : ";
    cin>>n;
    cout<<reversenum(n);
}