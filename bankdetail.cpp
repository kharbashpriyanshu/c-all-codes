#include<iostream>
using namespace std;
class bank{
int amount;
int balance;

public:
void deposit() {
balance=10000;

cin>>amount;
balance=balance+amount;
cout<<"balance after deposit amount "<<amount<<" = "<<balance;
}
void withdraw() {
cin>>amount;
if(amount>balance){
cout<<"you not have that balance to withdraw";
}
else{
balance=balance-amount;
cout<<"balance after withdraw amount"<<amount<<" = "<<balance;
}
}
};
int main() {
int balance;
bank b1;
b1.deposit();
b1.withdraw();
}



