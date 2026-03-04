#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value of n";
    cin>>n;
    i=2;
    if(n%i=0){
        cout<<"not prime";
        i=i+1;

    } else{
        cout<<"prime num";
    }
    return 0;
}