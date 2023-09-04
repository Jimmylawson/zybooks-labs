#include<iostream>
#include<string>


using namespace std;


class Team{
    private:
        string name;
        int wins;
        int losses;
    public:
    //mutators
        void SetName(string name) { this->name = name; }
        void SetWins(int wins) { this->wins = wins; }
        void SetLosses(int losses) { this->losses = losses; }
        //Accessors
        string GetName() { return name; }
        int GetWins() { return wins; }
        int GetLosses() { return losses; }
        double GetWinPercentage();
        void PrintStanding();
};

double Team::GetWinPercentage(){
        return (double(wins) / (wins + losses));
}

void Team::PrintStanding(){
    if(GetWinPercentage()>=0.5){
        cout << "Wins percentage: " << GetWinPercentage() << endl;
        cout << "Congratulations, Team " << GetName() << " has a winning average!" << endl;
    }else{
        cout << "Wins percentage: " << GetWinPercentage() << endl;
        cout << "Team " << GetName() << " has a losing average." << endl;
    }
}

int main(){
    Team myTeam;
    string name;
    int num1, num2;

    cout << "Enter name,num1, and num2: ";
    cin >> name;
    cin >>num1;
    cin>> num2;

    myTeam.SetName(name);
    myTeam.SetWins(num1);
    myTeam.SetLosses(num2);

    myTeam.PrintStanding();

    return 0;
}