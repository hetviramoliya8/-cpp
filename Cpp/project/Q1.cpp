#include <iostream>
using namespace std;
#include <string.h>

class BankAccount{
    public :
    int accountNumber;
    char accountHolderName[20];
    float Balance;

    public :
    BankAccount(){
        cout << " ";
    }

    BankAccount(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void deposit(int amount){
        this->Balance += amount;
        cout << "Amount Credited..!" << endl;
    }

    void withdraw(int amount){
        this->Balance -= amount;
        cout << "Amount Dedited..!" << endl;
    }

    void getBalance(){
        cout << "Account balance is : " << this->Balance << endl;
    }

    void displayAccountInfo(){
        cout << "Account Holder Name is : " << this->accountHolderName << endl;
        cout << "Account Number is : " << this->accountNumber << endl;
        cout << "Account Balance is : " << this->Balance << endl;
    }
};

class SavingAccount : public BankAccount{
    private :
    float interestRate = 3.5;

    public :
    SavingAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void calculateInterest(){
        cout << "Interest Rate : " << (this->Balance / 100) * interestRate << endl;
    }
};

class FixDepositAccount : public BankAccount{
    private :
    int term;       

    public :
    FixDepositAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void calculateterm(){
        float interest = Balance * (interest / 100.0) * (term / 13.5);
        cout << "Term : " << interest << endl;
    }
};

int main(){

    BankAccount obj(223 , "Hetvi" , 5.4);
    obj.deposit(400);
    obj.withdraw(100);
    obj.getBalance(); 
    obj.displayAccountInfo();

    SavingAccount obj2;
    obj2.setData(421,"Hetvi",2000);
    obj2.calculateInterest();

    FixDepositAccount obj3;
    obj3.setData(674,"Hetvi",5);
    obj3.calculateterm();

    return 0;
}