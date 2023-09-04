#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    // const int numVals = 4;
    // vector<int> courseGrades(numVals);
    // cout << "Enter a number: " << endl;

    // for (int i = 0; i < courseGrades.size(); i++)
    // {
    //     cin >> courseGrades.at(i);
    // }
    // cout << endl;

    // for (int i = courseGrades.size()-1; i >= 0;i--){
    //     cout << courseGrades.at(i) << " ";
    // }

    // Binary numbers;

//     int userInput;
//     string binary;
//     int divisor = 0;

//     cout << "Enter your a positive number: ";
//     cin >> userInput;
   
//    while(userInput >0){
//        cout << userInput% 2;
//        userInput /= 2;
//    }

int values;
vector<int> userChoice;

cout << "Enter a number: ";
while (values != -1)
{
    userChoice.push_back(values);
    cin >>values;
}

int subVal;
int n = userChoice.back();

for (int i = 0; i < userChoice.size()-1;i++){
    subVal = userChoice.at(i);
    subVal -= n;
    cout << subVal << endl;
}

}