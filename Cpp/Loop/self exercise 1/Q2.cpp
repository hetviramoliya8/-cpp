#include <iostream>
using namespace std;

int main(){

    int fact = 1; 
    int N;

    cout << "Enter a number: ";
    cin >> N;

    for(int i=N; i>=1; i--){
        fact = fact * i;

    }
    cout << "factorial of " << N << " is " << fact;
}