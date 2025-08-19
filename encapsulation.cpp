#include<iostream>
using namespace std;

class BankAccount {
    //hiding-> senstive data
    private:
        double balance=0;

    public:
        string customer_name;
        string address;
    public:
        void deposit(double amount){
            if(amount > 0) balance += amount;
        }
        
        double getBalance(){
            return balance;
        }

};

int main(){
    BankAccount b;
    b.customer_name = "Satya Prakash Sahu";
    b.address = "Baripada, Odisha";
   
    b.deposit(2000);
    cout<<"Total Balance is: "<<b.getBalance()<<endl;
}