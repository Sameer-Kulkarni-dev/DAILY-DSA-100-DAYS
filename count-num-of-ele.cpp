#include<bits/stdc++.h>
using namespace std;
// so basically i have a num ex=7789 print the count of each num in the given num
int countnum(int num){
    int count=0;
    while(num>0){
        int rem=num%10;
        count++;
        num=num/10; // this will remove the last digit from the num and we will continue till num becomes 0
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the num : ";
    cin>>n;
    cout<<countnum(n);
}

// time complexity is O(log n) because we are dividing the num by 10 in each iteration and the number of digits in a number is log10(n) which is equivalent to log n.
//  another way by log operation 


int countnumbylogmethod(int num){
    int cnt=(int)(log10(num)+1); // this will give us the number of digits in the num
    return cnt;
}
int main(){
    int n;
    cout<<"enter the num : ";
    cin>>n;
    cout<<countnumbylogmethod(n);
}