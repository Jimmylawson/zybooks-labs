#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

int mainMenu(){
    int userChoice;
    
    do{
        cout << "Welcome to Doc Brown's" << endl;
        cout << "1.Buy an ice crea," << endl;
        cout << "2.Buy a soda" << endl;
        cout << "3.Buy a pretzel" << endl;
        cout << "4.But some cotton candy" << endl;
        cout << "5.Pay and leave the store"
        cout << "Please enter your selection ";
        cin >> userChoice;
    } while (userChoice <1 ||userChoice >5);
    return userChoice;
}

int main(){
    int userChoice;
    vector<string> product;
    vector<float> prices;
    float totalPrice = 0;
    int size;
    
    do
    {
        selection = mainMenu();
        
        switch (selection)
        {
        case 1:
            product.push_back("Ice Cream");
            prices.push_back(1.49);
            break;
        case 2:
            product.push_back("Soda");
            price.push_back(0.99);
            break;
        case 3:
            product.push_back("Pretzel");
            price.push_back(1.99);
            break;
        case 4:
            product.push_back("Cotton Candy");
            price.push_back("1.79");
            break;
        default:
            cout << "You purchased..." << endl;
            size = product.size();
            for (int i = 0; i < size;i++){
                cout << setw(16)<< left << product.at(i) << "$" << prices.at(i) << endl;
                totalPrice += prices.at(i);
            }
            for (int i = 0; i < 21;i++)
                cout << "-";
            cout << endl;
            cout << setw(16) << "Grand Total" << "$" << totalPrice << endl;
        }

    } while (userChoice != 5);
}