#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
    // Enter data from file into Vector;
    // Determine:
    // 1.Min value;
    // 2.Max value;
    // 3.is Vector a Palindrome
    // 4.

    int userInput, highest, lowest, mid;
    int index = 0;
    bool isPalindrome = true;
    string filename;
    ifstream inFile;
    vector<int> numbers;
    bool isEven;

    do{
        cout << "\nEnter the filename: ";
        getline(cin, filename);
        inFile.open(filename);
    } while (!inFile);

    // Read the file,,store in a vector;
    //If isno a file
    //what is the meaning of th eof
    while(!inFile.eof()){
        inFile >> userInput;
        numbers.push_back(userInput);
    }
    int sz = numbers.size();
    lowest = numbers.at(index);
    highest = numbers.at(index);
    for (int i = 1; i < sz;i++){
        //Check for highest...
        if(numbers.at(i) >highest){
            highest = numbers.at(i);
        }
        // Check for lowest;
        if(numbers.at(i)< lowest){
            lowest = numbers.at(i);
        }
    }
    if(sz % 2 == 0)
        isEven = true;
    else
        isEven = false;

    // mid - is size/2;
    mid = sz / 2;
    // If sz = 6 ... mid 3. if sz = 7 mid = 3;

    for (int j = sz - 1; j > mid; j--,index++){
        if(numbers.at(index) != numbers.at(j)){
            isPalindrome = false;
        }
    }
    cout << "The high value is " << highest << endl;
    cout << "The low value is: " << lowest << endl;
    if(isPalindrome)
        cout << "The list is palindrome!" << endl;
    else
    cout << "The list is NOT palindrome!" << endl;
}