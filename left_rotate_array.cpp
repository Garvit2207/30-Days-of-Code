/* 29-08-2022 */
#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

cout<<"Enter the place from where you want to rotate the array"<<endl;

int pos;
cin>>pos;

int num;

for (int i = 0; i < pos; i++)
{int current = arr[0];
num = i;
    for(int j=0; j<n-1; j++){

arr[j] = arr[j+1];

    }
    arr[n-1] = current;
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


}