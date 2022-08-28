//doubly linked list
#include <iostream>
using namespace std;

class node{
public:
int data;
node* next=NULL;
node *prev = NULL;

};

node* takeinput(){
node *head=NULL;
node *temp;
int choice;
cout<<"Want to enter data(0/1)"<<endl;
cin>>choice;
while(choice==1){
    node *n = new node;
    cout<<"Enter your data"<<endl;
    cin>>n->data;
    if(head==NULL){
     head=n;
     temp=head;
     head->next = head;
     }
else{
temp->next=n;
temp= temp->next;
temp->next=head;
}
cout<<"Want to enter data(0/1)"<<endl;
cin>>choice;

}
    return head;
}


void print(node *head){

node* temp=head;
while (temp->next!=head)
{
    cout<<temp->data<<endl;
    temp=temp->next;

}
cout<<temp->data<<endl;
cout<<head->data<<endl;

}

int main(){

node *head = takeinput();
cout<<"list is-:"<<endl;
print(head);

}