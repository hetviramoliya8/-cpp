#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    
    cout << "factorial of " << num << " is ";
    while (i<=num)
    {
        if(num%i==0){
            cout << i;
        }
        i++;
    }
    
}