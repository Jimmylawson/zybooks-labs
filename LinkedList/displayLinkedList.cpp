#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){
        int A[] = {3, 5, 7, 10, 15};

        Node *head = new Node();
        newNode->data = A[0];
        newNode->next = NULL;
        Node *newNode,*temp;
        

        for (int i = 1;i<sizeof(A)/sizeof(A[0]);i++){
            //Create a temporary node
           // temp = new Node;
            //Poplulate temporary node
            newNode->data = A[i];
            newNode->next = NULL;

            //last next is pointing to temp
            
            last = temp;
        }

        //Display Linked List

        Node *p = head;
        
        while(p!=nullptr){
            cout << p->data << "->" << flush;
            p = p->next;
        }

        return 0;
}
