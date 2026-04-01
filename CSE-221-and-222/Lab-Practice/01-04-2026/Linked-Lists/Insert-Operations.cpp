#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* insert(Node* head, int value){
Node* newNode = new Node();
newNode->data = value;
newNode->next = NULL;

if(head==NULL){
    head = newNode;
}
else {
        Node* temp = head;
while(temp->next!=NULL){
    temp = temp->next;
}
    temp->next = newNode;
}

return head;

}

void display(Node* head){
Node* temp = head;
cout<<"Linked List: ";
while (temp!=NULL){
    cout<<temp->data<< "->";
    temp=temp->next;
}
cout<< "NULL" <<endl;
}

int countNodes(Node* head){
int count=0;
Node* temp = head;

while (temp!=NULL){
    count++;
    temp=temp->next;
}
return count;
}


int main(){
Node* head=NULL;

head = insert(head,10);
head = insert(head,20);
head = insert(head,30);
head = insert(head,40);

display(head);

cout<< "Total Nodes: " << countNodes(head) <<endl;

return 0;

}
