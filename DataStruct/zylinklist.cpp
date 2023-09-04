#include<iostream>
#include<cstdlib>

using namespace std;



class Node{
    private:
        int dataVal;
        Node *NextNodePtr;
     public:
         Node(int dataInt = 0, Node *nextLoc = nullptr);
         void InsertAfter(Node *nodeLoc);
         void PrintNodeData();
         Node *GetNext();
};

//Constractor
Node::Node(int dataInt, Node* nextLoc){
         this->dataVal = dataInt;
         this->NextNodePtr = nextLoc;

}

Node *Node::GetNext() { return this->NextNodePtr; }
//Insert node after this node
/*
Before:this -- next
After: this--node -- next
*/
void Node::InsertAfter(Node *nodeLoc){
         Node *tempNext = nullptr;
         tempNext = this->NextNodePtr;//Remember next
         this->NextNodePtr = nodeLoc;//this--node--?
         nodeLoc->NextNodePtr = tempNext;//Thiss--node--next

}

void Node::PrintNodeData(){
    cout<<this->dataVal<<endl;
}
int main()
{
    Node *head = nullptr; // Create intNode objects;
    Node *curr = nullptr;
    Node *last = nullptr;

    head = new Node(-1);
    last = head;

    for (int i = 0; i < 10;i++){
        curr = new Node(rand());
        last->InsertAfter(curr);
        last = curr;
    }
    curr = head;
    while (curr != nullptr)
    {
        curr->PrintNodeData();
        curr = curr->GetNext();
    }

    return 0;
}
