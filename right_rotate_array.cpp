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

cout<<"Enter pos"<<endl;
int k;
cin>>k;
for (int i = n-1; i >=n-k; i--)
{
    int current = arr[n-1];

    for (int j = n-1; j >0; j--)
    {
        arr[j] = arr[j-1];

    }
    


    arr[0] = current;
    
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}