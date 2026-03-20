#include<iostream>
using namespace std;    
int main(){
    int size=5;
    int marks[size];
  //  cout<<sizeof(marks) / sizeof(int) <<endl; // prints the number of elements in the array
  for(int i=0;i<size;i++){
    cout<<"enter the marks of student "<<i+1<<" : ";
    cin>>marks[i];
  }



  for(int i=0; i<size;i++){
    cout<<marks[i]<<" ";
  }
  //cout<<"hi";
    return 0;
}