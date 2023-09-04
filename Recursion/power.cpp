#include<iostream>

using namespace std;

//exponentials recursion

int RaiseToPower(int base,int exponent){
    if(exponent==0)
        return 1;
    else
        return base*RaiseToPower(base,exponent-1);

    return -1;
}

int main(){
    int base = 4;
    int exponent = 3;
    cout<<RaiseToPower(base,exponent)<<endl;

    return 0;
}