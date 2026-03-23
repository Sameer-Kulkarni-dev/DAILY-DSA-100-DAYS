#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>vec={1,2,3};
  //vector<int>vec;


   vec.push_back(100); // Add an element to the end of the vector
   vec.push_back(104); 
   vec.push_back(180); 
  // vec.pop_back(); // Remove the last element from the vector


    cout<<" the size of vector=  "<<vec.size()<<endl; // prints the size of the vector
    cout<<" the capacity of vector=  "<<vec.capacity()<<endl; // prints the capacity of the vector

    for(int i : vec){
        cout<<i<<" ";
        cout<<endl;
    }
    cout<<vec.front()<<endl; //  front function Access the first element of the vector
    cout<<vec.back()<<endl; //  back function Access the last element of the vector
    //cout<<vec.at()<<endl; // at function to access the element at a specific index (throws an exception if the index is out of range)
}