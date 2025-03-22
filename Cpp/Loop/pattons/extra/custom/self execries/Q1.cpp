#include <iostream>
using namespace std;

int main() {

    for (int i=1; i<= 5; ++i) {

        for (int l=1; l<=5-i+1; l++) {
            cout << l;
        }

        for (int k=1; k<=2*(i - 1); k++) {
            cout << "_";
        }

        for (int j=5-i+1; j>=1; j--) {
            cout << j;
        }

        cout << endl;
    }

}
