#include <iostream>
using namespace std;

main(){

    int a;
    cout << "Enter a age :";
    cin >> a;

    if(a >= 18){
        cout << "Eligible for vote !";
    }else{
        cout << "Not eligible for vote !";
    }
}