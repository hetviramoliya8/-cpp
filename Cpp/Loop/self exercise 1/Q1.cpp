#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int i = 1;
    
    cout << "factorial of " << N << " is ";
    while (i<=N)
    {
        if(N%i==0){
            cout << i;
        }
        i++;
    }
    


}
