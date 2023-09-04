//Create an array that accepts itegers 
//and stores them in ascending order

#include<iostream>

using namespace std;

int main(){
    const int ARRAY_SIZE = 150;

    int array[ARRAY_SIZE];
    int index, size = 0;
    int userInput, value;
    bool numberEntered;
    do
    {
        cout << "Doc Brown Ascending Array" << endl;
        cout << "1.Enter anumber" << endl;
        cout << "2.Enter array" << endl;
        cout << "3.Quit" << endl;
        cout << "Enter your selection: ";
        cin >> userInput;

        switch (userInput)
        {
        case 1:
        //Adding a number to the array
        cout << "Enter value to be added: ";
        cin >> value;
        numberEntered = false;
        if (size == 0)
        {
            array[size] = value;
        }
        else
        {
            index = 0;
            while (index <size && !numberEntered){
                if(array[index] <  value){
                    index++;
                }else{
                    for (int i = size; i >= index;i--){
                        array[i + 1] = array[i];
                    }
                    array[index] = value;
                    numberEntered = true;
                }
            }
            if(index == size)
                array[size] = value;
        }
         size++;
         break;
        case 2:
            for (int i = 0; i < size;i++){
                cout << array[i] << endl;
            }
            break;
        case 3:
            break;
        default: // is for validation check;
            cout << "That is an invalid option, please choose from the list" << endl;
        }

    } while (userInput != 3);
}