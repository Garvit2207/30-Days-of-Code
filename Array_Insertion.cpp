#include <iostream>
using namespace std;
int main(){
int arr[50];
for (int i = 0; i < 5; i++)
{
  cin>>arr[i]; 
}

int num,pos;
cin>>pos>>num;
for (int i = 0; i < 5; i++)
{
  cout<<arr[i];  
}

for (int i = 5; i > pos-1; i--)
{
    arr[i]=arr[i-1];
    
}
cout<<"\n";
arr[pos-1]=num;

for (int i = 0; i < 6; i++)
{
  cout<<arr[i];  
}

return 0;
}