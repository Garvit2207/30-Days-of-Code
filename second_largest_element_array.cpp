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

int max = arr[0];
int second_max = 0;

for (int i = 0; i < n; i++)
{
    if(arr[i]>max){
max = arr[i];
    }
    else if(arr[i]>second_max && arr[i]<max){
        second_max = arr[i];
    }
}

cout<<"Second largest element is-: "<<second_max<<endl;

}