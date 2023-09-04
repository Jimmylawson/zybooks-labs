#include<iostream>
#include<string>
using namespace std;

class Printer{
    private:
        string printerName;
        int availablePaper;

    public:
        Printer(string name, int availablePaper){
            printerName = name;
            this->availablePaper = availablePaper;
        }
        void print(string txtDoc){
            int requirePaper = txtDoc.length() / 10;

            if(requirePaper > availablePaper){
                throw "No paper available"; // throw an exception;
            }
            cout << "Printing... " << txtDoc << endl;
            availablePaper -= requirePaper;
        }
};

int main(){
//three key words in halding: try,catch,and throw
//In order to handle the exception in Print,we need to use try and catch in our code
    Printer p1("Malicia Corporation", 100);

    try{
    p1.print("Hello my name is Jim. I am a billionaire");
    p1.print("Hello my name is Jim. I am a billionaire");
    p1.print("Hello my name is Jim. I am a billionaire");

}
    catch(const char* txtException){
        cout<<"Exception: "<<txtException<<endl;  


    }
   



    system("pause>>null");

    return 0;
}