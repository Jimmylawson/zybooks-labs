#include<iostream>
#include<iomanip>
using namespace std;


class SelfPayKiosk{
    private:
        double const SALES_TAX = 0.07;
        int customerServed;
        double TotalSales;
        double currentAmount;
        bool CheckedOut;

    public:
        SelfPayKiosk(){
            customerServed = 0;
            TotalSales = 0.0;
            currentAmount = 0.0;
            CheckedOut = true;
                }
        void SetCustomers(int customerServed) { this->customerServed = customerServed; }
        int getCustomers() { return customerServed; }

        void SetTotalSales(double sales) { TotalSales = sales; }
        double getTotalSales() { return TotalSales; }

        void SetCurrentAmount(double currentAmount) { this->currentAmount = currentAmount; }
        int getCurrentAmount() { return currentAmount; }

        void ScanItem(double price);
        void CheckOut();
        void MakePayment(double payment);
        void ResetKiosk();
        void CancelTransaction();
        void SimulateSales(int numSales, double intialPrice,double incrPrice);
};

void SelfPayKiosk::ScanItem(double price){
    if(price >0){
            currentAmount += price;
    }
}

void SelfPayKiosk::CheckOut(){
    if(CheckedOut){
   double amountDue =  currentAmount * SALES_TAX;
   currentAmount += amountDue;
    }
}

void SelfPayKiosk::MakePayment(double payment){
   if(payment >=currentAmount){
            TotalSales += currentAmount;
            customerServed++;
            currentAmount = 0.0;
            CheckedOut = false;
   }
   else if(payment > 0 && payment < currentAmount)
   {
            TotalSales += payment;
            currentAmount -= payment;
   }
}

void SelfPayKiosk:: ResetKiosk(){
    currentAmount = 0.0;
    customerServed = 0;
    TotalSales = 0.0;
}

void SelfPayKiosk::CancelTransaction() { 
    if(!CheckedOut)
        currentAmount = 0.0;
     }

void SelfPayKiosk::SimulateSales(int numSales, double initialPrice,double incrPrice)
{
    for (int i = 0; i < numSales;i++){
            ScanItem(initialPrice);
                CheckOut();
                MakePayment(getCurrentAmount()+1.0);
                initialPrice += incrPrice;
            }
           
}

int main(){
    //this allocate a new memory for the class SelfPaykiosk
            SelfPayKiosk *kiosk = new SelfPayKiosk();

            // Test basic operations;
            kiosk->ScanItem(20.49);
            kiosk->CheckOut();
            kiosk->MakePayment(25.20);
            cout << fixed << setprecision(2);
            cout << "Number of customer: " << kiosk->getCustomers() << endl;
            cout << "Amount due: " << kiosk->getCurrentAmount() << endl;
            cout << "Total Sales: " << kiosk->getTotalSales() << endl;

            kiosk->ResetKiosk();
            kiosk->SimulateSales(100, 5, 2.5);
             cout << "Number of customer: " << kiosk->getCustomers() << endl;
            cout << "Amount due: " << kiosk->getCurrentAmount() << endl;
            cout << "Total Sales: " << kiosk->getTotalSales() << endl;

            return 0;
}