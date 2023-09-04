#include<iostream>
#include<string>
using namespace std;

int main(){
    string phrase, sub;
    cout << "\nEnter two strings: ";
    getline(cin,phrase);
    getline(cin,sub);
    if(phrase == sub)
        cout << "Both phrases match" << endl;
    else if(sub.find(phrase)!=string::npos){
        cout << phrase << " is found within the " << sub << endl;
    }else if(phrase.find(sub)!=string::npos){
        cout << sub << " is found within the " << phrase << endl;
    } 
    else
        cout << "No match" << endl;

    return 0;
}