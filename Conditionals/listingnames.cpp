#include<iostream>
#include<string>

using namespace std;

int main(){
    string firstName1, lastName1;
    string firstName2, lastName2;
    string firstName3, lastName3;

    // teaching teachers names; if it exist
    cout << "Enter teacher's names: ";
    cin >> firstName1 >> lastName1 >> firstName2 >> lastName2 >> firstName3 >>lastName3;

    if (firstName1 == "none")
    {
        cout << "TBD" << endl;
 }else if(firstName2 == "none"){
     cout << firstName1.at(0) << ". "<< lastName1 << endl;
 }else if(firstName3 == "none"){
     cout << lastName1 << " / " << lastName2 << endl;
 }else{
     cout << lastName1 << " / " << lastName2 << "/..." << endl;
 }

 return 0;
}