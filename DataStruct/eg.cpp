#include<iostream>

using namespace std;



class Node{
    public:
        int Value;
        Node* Next;
        
};

void PrintValue(Node* n){
    while(n !=nullptr){
        cout << n->Value << endl;
        n = n->Next;
    }
}
//Insert element at the front of the nodeList

void InsertAtTheFront(Node** head,int newValue){
    //Prepare a newNode
    Node *newNode = new Node();
    newNode->Value = newValue;
    // Put it in front of the current head
    newNode->Next = *head;
    // newNode is point to current head;
    *head = newNode;
}

int main()
{
        Node *head = new Node();
        Node *second = new Node();
        Node *third = new Node();
        Node *fourth = new Node();
        Node *fifth = new Node();

        head->Value = 3;
        head->Next = second;
        second->Value = 40;
        second->Next = third;
        third->Value = 50;
        third->Next = fourth;
        fourth->Value = 100;
        fourth->Next = fifth;
        fifth->Value = 23;
        fifth->Next = NULL;

        InsertAtTheFront(&head,4);
        PrintValue(head);
}