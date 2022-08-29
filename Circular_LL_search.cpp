/* 28-08-2022 */
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

void search(node *head){

int pos=0,data;

node *temp = head;
cout<<"Enter the data for which you want to search the node"<<endl;
cin>>data;

while(temp->data != data){

temp = temp->next;
pos++;
}
cout<<"Position of your node from head is "<<pos<<endl;
}

void print(node *head){

node* temp=head;
while (temp->next!=head)
{
    cout<<temp->data<<endl;
    temp=temp->next;

}
cout<<temp->data;

}

int main(){

node *head = takeinput();
search(head);

}