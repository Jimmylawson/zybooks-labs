#include<iostream>
#include<string>

using namespace std;

int main(){
    int stroke, par;

    cin >> par >>stroke ;
     if(par !=3 && par !=4 && par !=5)
         cout << "Error" << endl;
     if (par - stroke == 2)
         cout << "Eagle" << endl;
     else if (par - stroke == 1)
         cout << "Birdie" << endl;
     else if (par - stroke == 0)
         cout << "Pair" << endl;
     else if (stroke + 1 > par)
         cout << "Bogey" << endl;
    
}