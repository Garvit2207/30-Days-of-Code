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

void search(node *head){

node *temp = head;
int data;
int pos=0;
cout<<"Enter the data for which you want to search"<<endl;
cin>>data;
while(temp->data!=data && temp!=NULL){
    temp = temp->next;
    pos++;
}

cout<<"The position of your node from head is "<<pos<<endl;

}

void print(node *head){

node* temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;

}


}

int main(){

node *head = takeinput();
search(head);

}