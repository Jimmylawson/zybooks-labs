#include<iostream>
#include<fstream>

using namespace std;


int main(){
    fstream dataFs;
    string FileName;
    string customer;
    int Quantity;

    cin >> FileName;
    dataFs.open(FileName);
    if(!dataFs.is_open()){
        cout << FileName << ": file could not be opened" << endl;
        return 1;
    }
    dataFs >> customer >> Quantity;
    while(!dataFs.fail()){
        cout << customer << " sold " << Quantity << endl;
        dataFs >> customer >> Quantity;
    }
    dataFs.close();
}