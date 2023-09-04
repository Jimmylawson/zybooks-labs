#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "\nFinding the smallest and largest number";
    cin >> a >> b >> c;

    if( a < b && a < c){
        cout << a << " is the smallest number" << endl;
    }else if(b < a && b < c){
        cout << b << " is the smallest number" << endl;
    }else{
        cout << c << " is the smallest number" << endl;
    }
    // largest number
     if( a > b && a > c){
        cout << a << " is the largest number" << endl;
    }else if(b > a && b > c){
        cout << b << " is the largest number" << endl;
    }else{
        cout << c << " is the largest number" << endl;
    }

    return 0;
}