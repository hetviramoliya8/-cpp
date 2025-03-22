#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout << "Find  maximum from three numbers" << endl;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter first number :";
    cin >> b;
    cout << "Enter first number :";
    cin >> c;

    if(a>b){
        if(a>c){
            cout << "a is max" << endl;           
        }else{
            cout << "c is max" << endl;
        }
    }else{
        if(b>c){
        cout << "b is max" << endl;
        }else{
            cout << "c is max" << endl;
        }
    }
}