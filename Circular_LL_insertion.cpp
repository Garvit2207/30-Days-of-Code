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

node* insert(node *head){

node *nw = new node;
int pos;
int size =1;

node *temp = head;
node *prev = NULL;
while(temp->next!=head){
    prev= temp;
    temp = temp->next;
    size++;
}
cout<<"Enter the position at which you want to insert the data"<<endl;
cin>>pos;
if(pos>(size+1)){
    cout<<"Invalid size"<<endl;
    return head;
}
cout<<"Enter the data you want to insert"<<endl;
cin>>nw->data;

if(pos>1 && pos<=size){
temp = head;
pos = pos-1 ;
while(pos--){

prev = temp;
temp = temp->next;  

}

nw->next = temp;
prev->next = nw;

}
else if(pos==1){
if(head->next==NULL){
        nw->next = head;
        head->next = nw;
    head = nw;
    
    }
else{
temp = head;
while(temp->next !=head)
temp = temp->next;
}
     nw->next = head;
    head = nw; 
    temp->next = head;   
}
else if(pos==size+1){

temp->next = nw;

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

}

int main(){

node *head = takeinput();
node *h1 = insert(head);
cout<<"New list is-:"<<endl;
print(h1);

}