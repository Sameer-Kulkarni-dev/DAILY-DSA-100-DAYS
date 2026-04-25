#include<iostream>
using namespace std;

int sumofn(int n){
    if(n==1){
        return 1;
}
    return n+sumofn(n-1);
}

int main(){
    cout<<sumofn(2);  // 2+1=3
    return 0;
}


// sum of n numbers 