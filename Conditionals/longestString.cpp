#include<iostream>
#include<string>

using namespace std;

int main(){
    string first, last;

    cin >> first >> last;

    if(first.length() > last.length()){
        cout << first << endl;
    }else if(first.length() == last.length()){
        cout << last << endl;
    }else{
        cout << last << endl;
    }
    return 0;
}