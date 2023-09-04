#include<iostream>
#include<cctype>
#include<string>
//#include<vector>

using namespace std;
int main()
{
//     string userInput;
//     bool isTrue = true;
//     cout << "Enter something: ";
//     cin >> userInput;

//     for (int i = 0; i < userInput.length();i++){
//        if(!isdigit(userInput[i])){
//         cout << "No" << endl;
//            isTrue = false;
//            break;
//        }
//     }

//    if(isTrue == true)
//        cout << "Yes" << endl;

//palindrome

    string userInput;
    char choice,reversed;
    cout << "Enter something: ";
    cin >> userInput;
    bool isTrue;

    for (int i = 0; userInput.length();i++){
        choice = userInput[i];
        for (int j = userInput.length() - 1; j >= 0; j--) {
            reversed = userInput[j];
            if (choice == reversed){
                isTrue = true;
            }
            else{
            cout << "not a palindrome: " << userInput[i];
            break;
            }
        }
    }
        cout << endl;
}