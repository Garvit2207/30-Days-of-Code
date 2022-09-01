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

int count=0;
int max = 0;

for (int i = 0; i < n; i++)
{
    if(arr[i]==1){
        count++;
    }
    if (count>max)
    {
        max = count;
    }
    
    if(arr[i]!=1){
        count=0;
    }
}

cout<<max;

}