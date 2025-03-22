#include <iostream>
using namespace std;

main(){

   int num;
   cout << "enter a number to print its table :";
   cin >> num;

   int a=1;
   do{
    cout << num*a << endl; 
    a++;
   }
   while (a<=10);
   
}