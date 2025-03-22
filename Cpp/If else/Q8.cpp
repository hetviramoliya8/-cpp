#include <iostream>
using namespace std;

main(){
    
    int a;
    int b;

    cout << "Enter value for a :";
    cin >> a;

    cout << "Enter value for b :";
    cin >> b;

    (a>b) ? cout << "a is max" : cout << "B is max" << endl;

    (a%2==0) ? cout << "a is even" : cout << "a is odd";

}