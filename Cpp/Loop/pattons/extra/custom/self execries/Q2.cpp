#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) { 
            if (i == 0 || i == 3 || i == 6) 
                cout << "*";
            else if (j == 0 && i < 3) 
                cout << "*";
            else if (j == 6 && i > 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl; 
    }
}
