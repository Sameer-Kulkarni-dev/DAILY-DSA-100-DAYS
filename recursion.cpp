#include<bits/stdc++.h>
using namespace std;

void printNum(int n){
    if(n==1){
    cout<<n<<" ";
     return;
    }
    cout<<n<<" ";
    printNum(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printNum(n);
    return 0;
}