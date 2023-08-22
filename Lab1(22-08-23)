// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class BankAccount{
    string accname;
    int accNum;
    float accBalance;
    public:
    void AddAccount(string name,int num,float balance){
        accname=name;
        accNum=num;
        accBalance=balance;
    }
    void Checkbalance(){
        cout<<"Account Holder: "<<accname<<endl;
        cout<<"Account Number: "<<accNum<<endl;
        cout<<"Current Balance: ₹"<<accBalance<<endl;
    }
    void Withdraw(float amount){
        if(accBalance - amount <100){
            cout<<"Insufficient balance or invalid withdrawal amount."<<endl;
        }
        else{
            accBalance = accBalance-amount;
            cout<<"Withdrawn ₹"<<amount<<" from the account."<<endl;
        }
    }
    void Deposit(float amount){
        accBalance +=amount;
        cout<<"Deposited ₹"<<amount<<" into the account."<<endl;
    }
};
int main() {
    BankAccount C;
    string name;
    int num;
    float balance,wit,dep;
    
    cin>>name;
    cin>>num;
    cin>>balance;
    
    C.AddAccount(name,num,balance);
    C.Checkbalance();
    
    cin>>dep;
    C.Deposit(dep);
    cin>>wit;
    C.Withdraw(wit);
    cin>>wit;
    C.Withdraw(wit);
    
    C.Checkbalance();
    return 0;
}
