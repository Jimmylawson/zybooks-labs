#include<iostream>
#include<string>
using namespace std;




int main(){
    string login;
    string first;
    string last;
    int number;

    cout << "\nEnter your login name: ";
    cin >> first >> last >> number;
    if(last.length()<=5){
        login = last;
    }else
        login = last.substr(0, 5);
        login += first.at(0);
        login += std::to_string(number % 100);
    
    cout << "Your login name: " << login << endl;
}