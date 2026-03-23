#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> vec={1,2,3,4,5}; // Initialize a vector with some values

    // cout<<"The element in the vector is: "<<vec[0]<<endl;
    // cout<<"The element in the vector is: "<<vec[1]<<endl;
    // cout<<"The element in the vector is: "<<vec[2]<<endl;

    // cout<<"The element in the vector is: "<<vec[3]<<endl;
    // cout<<"The element in the vector is: "<<vec[4]<<endl;



// iterator approach to print the elements of the vector
    vector<int>vec(5,2);
    for(int i : vec){
        cout<<i<<" ";
    }

    
    // Access the first element of the vector
    
     return 0;
}
