#include <iostream>
using namespace std;

int main(){

    int choice;

    do{

        cout << "Press for 1 for addition (+)" << endl;
        cout << "Press for 2 for subtraction (-)" << endl;
        cout << "Press for 3 for multiplication (*)" << endl;
        cout << "Press for 4 for division (/)" << endl;
        cout << "Press for 5 for modulo (%)" << endl;
        cout << "Press for 0 for exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 0){
            cout << "Exiting the program " ;
        }

        int num1;
        cout << "Enter first number: ";
        cin >> num1;

        int num2;
        cout << "Enter second number: ";
        cin >> num2;

        switch(choice){
            case 1:
            cout << " addition of  " << num1 << " is " << num2 <<(num1, num2) << endl; 
        break;

            case 2:
            cout << " subtraction of " << num1 << " is " << num2 << (num1, num2) << endl;
        break;
            
            case 3:
            cout << " multiplication of " << num1 << " is " << num2 << (num1 , num2) << endl;
        break;

            case 4:
            cout << " division of " << num1 << " is " << num2 << (num1 , num2) << endl;
        break;

            case 5:
            cout << " modulo " << num1 << " is " << num2 << (num1 , num2) << endl;
        break; 
        }
            



    } while (true);
   
}

int adition (int a , int b){
    return (a+b);
};

int subtraction (int a , int b){
    return (a-b);
};
int multiplication (int a, int b){
    return (a*b);
};
int division (int a, int b){
    if (b==0)
    {
       cout << "Error :Division by zero !";
       return 0;
    }
    return a/b;

}

int modulo (int a, int b){
    if (b==0)
    {
       cout << "Error :Division by zero !";
       return 0;
    }
    return a%b;
}