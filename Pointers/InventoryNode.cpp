#include<iostream>

using namespace std;


class InventoryNode{
    private:
        string item;
        int numberOfItems;
        InventoryNode *nextNodeRef;
    public:
    InventoryNode(){
        this->item = " ";
        this->numberOfItems = 0;
        this->nextNodeRef = nullptr;
    }
    //Constructor
    InventoryNode(string itemInt,int numberOfItems){
        this->item = itemInt;
        this->numberOfItems = numberOfItems;
        this->nextNodeRef = NULL;
    }
    InventoryNode(string itemInt,int numberOfItems,InventoryNode* nextLoc){
        this->item = itemInt;
        this->numberOfItems = numberOfItems;
        this->nextNodeRef = nextLoc;
    }
    void InsertAtFront(InventoryNode* head,InventoryNode* currNode){
        currNode->nextNodeRef = head->nextNodeRef;
        head->nextNodeRef = currNode;
    }

    InventoryNode* GetNext(){
        return this->nextNodeRef;
    }
    void PrintNodeData(){
        cout << this->numberOfItems << " " << this->item << endl;
    }
};
int main()
{
    int count;
    int numItems;
    string items;
    InventoryNode *headNode = new InventoryNode();
    InventoryNode *currNode;

    cin >> count;
    for (int i = 0; i < count;i++){
        cin >> items;
        cin >> numItems;
        InventoryNode *newNode= new InventoryNode(items, numItems);
        newNode->InsertAtFront(headNode, newNode);
    }

    currNode = headNode->GetNext();

    while(currNode !=NULL){
        currNode->PrintNodeData();
        currNode = currNode->GetNext();
    }

    return 0;
}