#include<iostream>
#include<iomanip>
using namespace std;

// BankAccount class;

class BankAccount{
    private:
        string name;
        double savings;
        double checking;
    public:
        BankAccount(string name, double savings, double checkings);
        void SetName(string name) { this->name = name; }
        string GetName() { return name; }
        void SetChecking(double atm) { checking = atm; }
        double GetChecking() { return checking; }
        void SetSavings(double atm) { savings = atm; }
        double GetSavings() { return savings; }
        //Declare outside class
        void DepositChecking(double atm);
        void DepositSavings(double atm);
        void WithdrawChecking(double atm);
        void WithdrawSavings(double atm);
        void TransferToSavings(double atm);
};

BankAccount::BankAccount(string name,double savings,double checking){
        this->name = name;
        this->savings = savings;
        this->checking = checking;
}

void BankAccount::DepositChecking(double atm){
    if(atm>0)
        checking += atm;
}
void BankAccount::DepositSavings(double atm){
     if(atm>0)
        savings += atm;
}
void BankAccount::WithdrawChecking(double atm){
     if(atm>0)
        checking -= atm;
}
void BankAccount::WithdrawSavings(double atm){
     if(atm>0)
        savings -= atm;
}

void BankAccount:: TransferToSavings(double atm){
     if(atm>0)
        checking -= atm;
        savings += atm;
}
int main()
{
        BankAccount account("Jimmy", 500.00, 100.00);
        account.SetChecking(500);
        account.SetSavings(500);
        account.WithdrawChecking(100);
        account.WithdrawSavings(100);
        account.TransferToSavings(300);


        cout << account.GetName() << endl;
        cout << fixed << setprecision(2);
        cout << account.GetChecking() << endl;
        cout << account.GetSavings() << endl;
}
