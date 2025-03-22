#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=5; i++){

        for(int k=1; k<=5-i; k++){
            cout << "_";
        }

        for(int j=5-i+1; j<=5; j++){
            cout << j;
        }

        cout << endl;

}

}