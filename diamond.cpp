#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the val of n"<<endl;
cin>>n;
n=n/2;
for(int row=0;row<n;row=row+1) // outerloop
{
    // space
    for(int col=0;col<n-row-1;col=col+1){
        cout<<" ";
    }
    //stars printing
    for(int col=0;col<row+1;col=col+1){
        cout<<"* ";
    }
    cout<<endl;
}
for(int row=0;row<n;row=row+1) // outerloop
{
    // space
    for(int col=0;col<row;col=col+1){
        cout<<" ";
    }
    //stars printing
    for(int col=0;col<n-row;col=col+1){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}