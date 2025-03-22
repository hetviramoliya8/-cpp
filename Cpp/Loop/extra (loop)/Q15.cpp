#include <iostream>
using namespace std;

int main(){

    int fact = 1; 
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for(int i=num; i>=1; i--){
        fact = fact * i;

    }
    cout << "factorial of " << num << " is " << fact;
}