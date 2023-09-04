#include<iostream>
#include<string>

using namespace std;

int main(){
    string userInput;
    cout << "\nEnter your shape: ";
    cin >> userInput;

    if(userInput == "square"){
        cout << "***" << endl;
        cout << "* *" << endl;
        cout << "***" << endl;
    }else if(userInput == "triangle"){
        cout << " * " << endl;
        cout << "*  *" << endl;
        cout << "****" << endl;
    }else{
        cout << "Invalid shape!" << endl;
    }
}