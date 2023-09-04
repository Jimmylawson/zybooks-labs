#include<iostream>
#include<vector>

using namespace std;

int main(){
    const int NumVals = 4;
    vector<int> courseGrades (NumVals);

     cout << "Enter a number: ";
    for (int i = 0; i < courseGrades.size();i++){
       
        cin >> courseGrades.at(i);
    }
    cout << endl;
    // for (int i = 0; i < courseGrades.at(i);i++){
    //     cout << courseGrades.at(i) << " ";
    // }

    for (int i = courseGrades.size() - 1; i >= 0; i--)
    {
        cout << courseGrades.at(i) << " ";
        }
    cout << endl;
}