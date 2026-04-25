/*print numbers  */


#include<iostream>
using namespace std;
 
void printnum(int n){  // recursion

    if(n==1){           // base case to stop 
        cout<<"1\n";
        return ;
    }                                                               
    cout<<n<<" ";
    printnum(n-1);
}

int main(){
printnum(10);
return 0;
}
