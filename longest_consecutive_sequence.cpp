#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr, arr+n);
int temp = 1;
int max = 1;
for (int  i = 0; i < n-1; i++)
{
    
if(arr[i+1]-arr[i]==1){
    temp++;
}
else if(arr[i+1]-arr[i]==0)
{
    temp = temp;
}else temp = 1;
if(temp>max){
    max = temp;
}

}

cout<<max<<endl;

    return 0;
}