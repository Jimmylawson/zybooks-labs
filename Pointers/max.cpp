#include<iostream>

using namespace std;


class IntNode{
    private:
        int dataVal;
        IntNode *nextPtr;

    public:
        IntNode(int dataInt);
        int GetNodeData();
        IntNode *GetNext();
        void InsertAfter(IntNode *newNode);

};

IntNode::IntNode(int dataInt){
        dataVal = dataInt;
        nextPtr = nullptr;
}

int IntNode::GetNodeData(){
        return this->dataVal;
}

IntNode* IntNode::GetNext(){
        return this->nextPtr;
}

void IntNode::InsertAfter(IntNode *newNode){
        IntNode *tempNext = this->nextPtr;
        this->nextPtr = newNode;
        newNode->nextPtr = tempNext;
}

//Return largest value in the list
int FindMax(IntNode* headNode){
    if(headNode->GetNext()==NULL){
        return -99;
    }
    int max = headNode->GetNodeData();

while(headNode->GetNext()!=NULL){
        int curr = headNode->GetNext()->GetNodeData();
        if (max <curr)
            max = curr;
        headNode = headNode->GetNext();

        return max;
}

}

bool isSorted(IntNode* head){
    if(head->GetNext()==nullptr)
            return true;
    while(head->GetNext()!=nullptr){
        if(head->GetNodeData() > head->GetNext()->GetNodeData()){
            return false;
        }
        head = head->GetNext();
    }

    return true;
}

//Count
int getCount(IntNode* headNode){
    int count;

    while (headNode!=nullptr){
        count++;
        headNode = headNode->GetNext();
    }
}

int main()
{
IntNode *headNode = new IntNode(-1);
IntNode *currNode;
IntNode *lastNode;
int max;
lastNode = headNode;

for (int i = 0; i < 20;i++){
        currNode = new IntNode(i);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;
}

max = FindMax(headNode);
cout << "Max is " << max;

if(isSorted(headNode))
        cout << " true" << endl;
    else
        cout << " false" << endl;
    return 0;
}