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
    //  n->prev = head;
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

node* insert(node *head){

node *nw = new node;
int pos;
int size =1;

node *temp = head;
while(temp->next!=NULL){
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
pos = pos-1;
while(pos--){
temp = temp->next;  

}

nw->next = temp;
nw->prev = temp->prev;
temp->prev->next = nw;
temp->prev = nw;
}
else if(pos==1){
    nw->next = head;
    nw->prev = NULL;
    head->prev=nw;
    head = nw;
}
else if(pos>1 && pos==size+1){

nw->next = NULL;
nw->prev = temp;
temp->next = nw;

}

return head;
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
node *h1 = insert(head);
cout<<"New list is-:"<<endl;
print(h1);

}