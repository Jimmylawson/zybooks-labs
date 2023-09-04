#include<iostream>
#include<vector>

using namespace std;

int main(){
    const int NUM_VALS = 4;
    int testGrades[NUM_VALS];
    int sumExtra = -999;

    for (int i = 0; i < NUM_VALS;i++){
        cin >> testGrades[i];
    }

    sumExtra = 0;
    for (int i = 0; i < NUM_VALS;i++){
        if(testGrades[i] > 100){
            sumExtra +=testGrades[i] % 100;
            
        }

        // sumExtra += testGrades[i] - 100;
    }

    cout << sumExtra << endl;
}