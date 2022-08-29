/* 29-08-2022 */
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

for (int i = 0; i < n-1; i++)
{
    if(arr[i]>arr[i+1]){
        cout<<"Not a sorted array";
     return 0;
    }
}

cout<<"Array is sorted"<<endl;
return 0;
}