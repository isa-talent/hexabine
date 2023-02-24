#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "-----PROGRAM TO COMPARE TWO(2) INTERGERS-----\n";
    cout << "Please enter fisrt number" << endl;
    cin >> num1;
    cout << "Please enter second number" << endl;
    cin >> num2;
    if (num1 > num2){
        cout << "The first number: "<< num1 << " is greater than the second number:" <<num2<< endl;
    }else if (num1 == num2){
        cout << "Both numbers: "<<num1<< " and "<<num2<<" are the same" << endl;
    }else{
        cout << "The second number: "<<num2<< " is greater than the first number: "<<num1<< endl;
    }
    return 0;
}
