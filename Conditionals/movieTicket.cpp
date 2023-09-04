#include<iostream>
#include<string>

using namespace std;

int main(){
    string userInput;
    int personAge,movieTicket;

    cout << "\nEnter your number: ";
    cin >> userInput >> personAge;
    if (personAge < 4){
        movieTicket = 0;
        cout << "free" <<endl;
    }
    else if (userInput == "day" && personAge >= 4)
    {
        movieTicket = 8;
         cout << "$" << movieTicket << endl;
    }
    else if (userInput == "night" && personAge >= 4 && personAge <= 16)
    {
        movieTicket = 12;
         cout << "$" << movieTicket << endl;
    }
    else if (userInput == "night" && personAge >= 17 && personAge <= 54)
    {
        movieTicket = 15;
         cout << "$" << movieTicket << endl;
    }
    else if (userInput == "night" && personAge >= 55)
    {
        movieTicket = 13;
         cout << "$" << movieTicket << endl;
    }

   
}