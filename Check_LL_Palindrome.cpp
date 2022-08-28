//doubly linked list
#include <iostream>
using namespace std;

class node{
public:
char data;
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



void print(node *head){

node* temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;

}


}

void check_palindrome(node *head){

node *temp=head;
node *temp_head = head;
node*temp_tail, *tail;
int size=1;

while(temp->next!=NULL){
temp = temp->next;
tail = temp;
size++;
}
temp_tail = tail;
while(size!= (size/2)){

if(temp_head->data==temp_tail->data){
temp_head = temp_head->next;
temp_tail = temp_tail->prev;
}else {
    cout<<"Not a palindrome series"<<endl;
    return;
}

size--;

}
cout<<"It's a palindrome series"<<endl;
}
int main(){

node *head = takeinput();
cout<<"Your Enterd ll is-: "<<endl;
print(head);
cout<<endl;
check_palindrome(head);

}