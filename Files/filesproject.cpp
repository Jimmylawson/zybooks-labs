#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void ReadReview(vector<string> &reviewList){
    ifstream reviewsFS;
    string review;

    reviewsFS.open("reviews.txt");
    if(!reviewsFS.is_open()){
        cout << "Could not open file review.txt" << endl;
    }else{
        getline(reviewsFS, review);
        while(!reviewsFS.fail()){
            reviewList.push_back(review);
            getline(reviewsFS, review);
        }
        reviewsFS.close();
    }
}

void DisplayReview(const vector<string>&reviewList){
    cout << endl<< "Reviews:" << endl;
    for (int i = 0; i < reviewList.size();i++){
        cout << i + 1 << ". " << reviewList.at(i) << endl;
    }
    cout << endl;
}
int main(){
    vector<string> reviewList;
    string newReview;

    ReadReview(reviewList);
    DisplayReview(reviewList);

    cout << "Enter new review or Quit: " << endl;
    getline(cin, newReview);
    while(newReview != "Quit"){
        //Add new reviews to the vector and display new list
        reviewList.push_back(newReview);
        DisplayReview(reviewList);

        cout << "Enter new review or Quit: " << endl;
        getline(cin, newReview);
    }

    return 0;
}