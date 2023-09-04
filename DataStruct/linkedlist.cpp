#include<iostream>

using namespace std;

class Node{
public:
    int Value;
    Node *Next;
};

// Insert a node into a linked list.At the fron and after a
// specific node;
// Linked list to a function
void PrintList(Node* n){
    while(n !=nullptr){
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node**head,int newValue){
    // Three steps this function need to perform to in order to insert an element at the front of out nodeList
    // 1.Prepare a newNode;
    Node *newNode = new Node;//Node()
    newNode->Value = newValue;
    // 2.Put it in front of current head
    newNode->Next = *head;
    //newNode is point to current head
        // 3.Move head of the list to point to the newNode;
     *head = newNode;//Redirect head to the front of the list
}


void insertAtTheEnd(Node**head,int newValue){
     // Need to perform 4 steps to implement a node to the end of the list
     // 1.Prepare a newNode
     Node *newNode = new Node();
     newNode->Value= newValue;
     newNode->Next = NULL;
     // 2.If Linked list is empty,newNode will be a head node
     if(*head == NULL){
        *head = newNode;
        return;
     }
     // 3.Find the last node
     Node *last = *head;
    while(last ->Next !=NULL){
        last = last->Next;
    }
     // 4.Insert newNode after last node(at the end);
    last->Next = newNode;
}

//Third way to insert a node list after a node.
void insertAfter(Node* previous,int newValue){
    //1.Check if previous node is NULL
    if(previous ==NULL){
        cout << "Previous can not be NULL";
        return;
    }
    //2.Prepare a newNode
    Node *newNode = new Node();
    newNode->Value = newValue;
    // 3.Insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next = newNode;
}
int main()
{
    //Linked list for three elements
    Node *head = new Node();//try to use head
    Node *second = new Node();//try to use head
    Node *third = new Node();//try to use head

    head->Value = 1;
    head->Next = second;//linked element to the second element
    second->Value = 2 ;
    second->Next = third;//linked element to third
    third->Value = 3;
    third->Next = NULL; // linked element to null(means empty);

    // insertAtTheFront(&head, -1);
    // insertAtTheFront(&head, -2);
    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    // insertAfter(head, -1);
    // insertAfter(second, -2);
    PrintList(head);

    system("pause>0");
}