#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int target;
cout<<"Enter target"<<endl;
cin>>target;
for (int i = 0; i < n-1; i++)
{
    if(arr[i]+arr[i+1]==target){
        cout<<i<<" "<<i+1;
        return 0;
    }
}

cout<<-1<<endl;
    return 0;
}