#include<iostream>
#include<string>

using namespace std;

// log in Name;

int main(){
    string firstName, lastName,login;
    int year;
    cin >> firstName >> lastName >> year;

    if(lastName.length() <=5){
        login = lastName;
    }else
        login = lastName.substr(0, 5);

    login += firstName.at(0);
    login += std::to_string(year % 100);

    cout << "Your login name is: " << login << endl;
}