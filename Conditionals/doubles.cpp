#include<iostream>
#include<string>

using namespace std;

int main(){
    double a, b,c;
    cin >> a >> b >> c;
    if (abs(a - b) <= 0.001)
        cout << "equal" << endl;
    else if (abs(a - b) < c)
        cout << "close enough" << endl;
    else
        cout << "not close" << endl;
    return 0;
}