#include<iostream>
#include<list>
using namespace std;



int main(){
    list<string> authorList;
    string name;
    list<string>::iterator iter;

    authorList.push_back("John");
    authorList.push_back("Jimmy");
    authorList.push_back("Emmett");

    for (iter = authorList.begin(); iter != authorList.end();iter++){
        cout << *iter << endl;
    }

    return 0;
}