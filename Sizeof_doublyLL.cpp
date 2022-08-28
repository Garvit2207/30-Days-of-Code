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
     }
else{
temp->next=n;
n->prev = temp;
temp= temp->next;
temp->next=NULL;
}
cout<<"Want to enter data(0/1)"<<endl;
cin>>choice;

}
    return head;
}

int size(node *head){

node* temp=head;
int size =0;
cout<<"You entered ll is-: "<<endl;
while (temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
size++;
}

return size;
}

int main(){

node *head = takeinput();
cout<<"Size of your entered ll is "<<size(head);

}