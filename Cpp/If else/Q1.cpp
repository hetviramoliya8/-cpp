#include <iostream>
using namespace std;

int main(){
    

    int a = 12;
    int b = 24;
    int c = 2;

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