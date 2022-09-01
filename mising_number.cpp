/* 1-09-2022 */
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

int sub_arr[n+1]={0};


for (int i = 0; i < n; i++)
{
    int index = arr[i];
    sub_arr[index]++;
}

for (int i = 1; i < n+1; i++)
{
    if (sub_arr[i]>1)
    {
        cout<<"Repeating element is "<<i<<endl;
    }
    else if(sub_arr[i]==0){
        cout<<"Missing element is "<<i;
    }
    
}



    return 0;
}