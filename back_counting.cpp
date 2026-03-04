/*#include <iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    if(i>=1){
        cout<<i<<endl;
        i=i-1;
    } else{
        exit;
    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i; // Take input from the user

    while (i>=1) { // Loop until i becomes less than 1
        cout << i << endl;
        i = i + 1; // Decrement i
    }

    return 0; // Exit the program
}
