#include <iostream>
using namespace std;

int main(){

    char st;
    cout << "enter a charatar to cheak is this vowel or constant : ";
    cin >> st;

    if (st=='a' || st=='e' || st=='i' || st=='o' || st=='u' || st=='A')
    {
        cout << "this is vowel !";
    }else{
        cout << "this is constant !";
    }
    
}