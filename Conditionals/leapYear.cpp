#include<iostream>

using namespace std;

int main(){
    int userInput;
    bool isLeapYear;

    cin >> userInput;
    if (userInput % 4 == 0)
    {
        isLeapYear = true;
        if(userInput % 100 == 0){
            if(userInput % 400 == 0){
                isLeapYear = true;
            }else if(userInput % 400 !=0)
                isLeapYear = false;
        }
    }

    if(isLeapYear){
        cout << "is a Leap Year" << endl;
    }else{
        cout << "is not a Leap Year" << endl;
    }
}