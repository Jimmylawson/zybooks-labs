#include<iostream>
#include<string>

using namespace std;

int main(){
    // Reverse text;
    string userChoice;

    do{
        cout << "Enter something: ";
        getline(cin,userChoice);
        if(userChoice != "Done" && userChoice !="done" && userChoice != "d"){
            for (int i = userChoice.length() - 1; i >=0 ;i--){
                cout << userChoice[i] << " ";
            }
            cout << endl;
        }

    } while (userChoice != "Done" && userChoice != "done" &&userChoice != "d");

    // cout << "Enter something: ";
    // getline(cin, userChoice);

    // while(userChoice != "Done" && userChoice != "done" && userChoice != "d"){
    //     for (int i = userChoice.length() - 1; i >= 0;i--){
    //         cout << userChoice[i];
    //     }
    //     cout << endl;
    //     cout << "Enter something: ";
    //     getline(cin, userChoice);
    // }
}