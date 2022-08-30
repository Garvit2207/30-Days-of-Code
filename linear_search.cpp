/* 30-08-2022 */
#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int num;
cout<<"Enter the element"<<endl;
cin>>num;

for (int i = 0; i < n; i++)
{
    if(arr[i] == num){
        cout<<num<<" is present in the "<<i<<"th index"<<endl;
        return 0;
    }
}

cout<<-1<<endl;

}