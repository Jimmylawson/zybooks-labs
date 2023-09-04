#include<iostream>
#include<string>
using namespace std;

int main(){
    string userInput,lastIndex;
    cout << "\nEnter something: ";
    cin >> userInput;

    lastIndex = userInput.size() - 1;
    char lastChar;
    if (lastIndex != "." || lastIndex != "?" || lastIndex != "!")
    {
        userInput.append(".");
    }
    else if (lastIndex == ",")
    {
        userInput.at(lastIndex) == ".";
    }
    else if (lastIndex == "." && lastIndex - 1 == "." && lastIndex - 2 == ".")
    {
    }
    else
    {
        userInput.pop_back();
    }

    cout << userInput << endl;
}