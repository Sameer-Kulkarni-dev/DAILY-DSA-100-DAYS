#include <iostream>
#include <chrono>  // For std::chrono::seconds
#include <thread>  // For std::this_thread::sleep_for

using namespace std;

int main() {
    int i;
    cin >> i; // Take input from the user

    while (i >= 1) { // Loop until i becomes less than 1
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1)); // Introduce a 1-second delay
        i = i - 1; // Decrement i
    }

    return 0; // Exit the program
}
