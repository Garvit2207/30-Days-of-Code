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

int index = 0;
int i =1;
n= n-i;
int target = arr[n];
while (i<=n)
{
    if(arr[n-i]<arr[n]){
        index = n-i;
        int end = n;
while (end>index){

arr[end] = arr[end-1];
end--;

}
arr[index] = target;

for (int i = 0; i <= n; i++)
{
    cout<<arr[i]<<" ";
}
        return 0;
    }
    else i++;

}


for (int i = n; i >= 0; i--)
{
    cout<<arr[i]<<" ";
}

    return 0;
}