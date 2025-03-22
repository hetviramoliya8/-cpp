#include <iostream>
using namespace std;

main(){

    int food;
    cout <<  "Press 1 for Dhosa" << endl;   
    cout <<  "Press 2 for Pizza" << endl;   
    cout <<  "Press 3 for Burgar" << endl;   
    cout << "Enter a number :";
    cin >> food;

    switch(food){
        case 1 : 
        cout << "You order a Dosha";
        break;
        case 2 : 
        cout << "You order a Pizza";
        break;
        case 3 : 
        cout << "You order a Burgar";
        break;
        default : 
        cout << "The value is wrong";
        break;
    }

}