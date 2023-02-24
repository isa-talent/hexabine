#include <iostream>
using namespace std;

/*Question: Write a program that takes 
an integer input from the user and prints out 
all the even numbers from 0 up to the input number (inclusive) using a for loop*/

int main() {
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;
  
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {  
            cout << i << " "<<endl;
        }
    }

    return 0;
}
