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


int size(node *head){

node* temp=head;
int size =1;
cout<<"Your list-: "<<endl;
while (temp->next!=head)
{
    cout<<temp->data<<endl;
    temp=temp->next;
size++;
}
cout<<temp->data<<endl;
return size;
}

int main(){

node *head = takeinput();
cout<<"Size of your entered ll is "<<size(head);

}