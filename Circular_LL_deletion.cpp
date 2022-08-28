//Circular linked list
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
    //  n->prev = head;
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

node* del(node *head){

int pos;
int size =1;

node *temp = head;
node *prev = NULL;
while(temp->next!=head){
    prev= temp;
    temp = temp->next;
    size++;
}
cout<<"Enter the position at which you want to delete the data"<<endl;
cin>>pos;
if(pos>(size)){
    cout<<"Invalid size"<<endl;
    return head;
}
else if(pos>1 && pos<size){
temp = head;
pos = pos-1 ;
while(pos--){

prev = temp;
temp = temp->next;  

}

prev->next = temp->next;
delete temp;

}
else if(pos==1){
 temp = head;
if(head->next==head){
delete temp;
return NULL;
    }
else{

while(temp->next !=head)
temp = temp->next;
}
    head = head->next; 
    temp->next = head;   
}
else if(pos>1 && pos==size){

prev->next = head;
delete temp;
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
cout<<temp->data;

}

int main(){

node *head = takeinput();
node *h1 = del(head);
cout<<"New list is-:"<<endl;
print(h1);

}