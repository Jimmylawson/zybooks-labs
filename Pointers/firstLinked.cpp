#include<iostream>

using namespace std;

class MileageTrackerNode{
    private:
        double miles;
        string date;
        MileageTrackerNode *nextNodeRef;

    public:
        MileageTrackerNode();
        ~MileageTrackerNode();
        MileageTrackerNode(double milesInt, string dateInt);
        MileageTrackerNode(double milesInt, string dateInt, MileageTrackerNode *nextLoc);
        void InsertAfter(MileageTrackerNode *nextLoc);

        MileageTrackerNode *GetNext();
        void PrintNodeData();

};

//Constructors
MileageTrackerNode::MileageTrackerNode(){
        miles = 0.0;
        date = "";
        nextNodeRef = nullptr;
}
//Destructor
MileageTrackerNode::~MileageTrackerNode(){
    if(nextNodeRef !=nullptr){
        delete nextNodeRef;
    }
}
//Constructor
MileageTrackerNode::MileageTrackerNode(double milesInt,string dateInt){
    miles = milesInt;
    date = dateInt;
    nextNodeRef = nullptr;
}
//Constructors
MileageTrackerNode::MileageTrackerNode(double milesInt,string dateInt,MileageTrackerNode* nextLoc){
       miles = milesInt;
        date = dateInt;
    nextNodeRef = nextLoc;
}

/*
Insert node after this node.
Before this -- next
After: thi -- node -- next
*/
void MileageTrackerNode::InsertAfter(MileageTrackerNode* nextLoc){
    MileageTrackerNode *tmpNext;
    tmpNext = nextNodeRef;
    nextNodeRef = nextLoc;
    nextLoc->nextNodeRef = tmpNext;
}
//Get location pointed by nextNodeRef

MileageTrackerNode* MileageTrackerNode::GetNext(){
    return nextNodeRef;
}

void MileageTrackerNode::PrintNodeData(){
    cout << miles << ", " << date << endl;
}
int main(){
    MileageTrackerNode *headNode;
    MileageTrackerNode *currNode;
    MileageTrackerNode *lastNode;

    double miles;
    string date;

    //Front of node list
    headNode = new MileageTrackerNode();
    lastNode = headNode;
    int count;
    for (int i = 0; i < count;i++){
        cin >> miles;
        cin >> date;
        MileageTrackerNode *currNode = new MileageTrackerNode(miles, date);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;
    }
    currNode = headNode->GetNext();
    while (currNode !=NULL){
        currNode->PrintNodeData();
        currNode = currNode->GetNext();

    }

//MileageTrackerNode Destructor deletes all following nodes
    delete headNode;
}