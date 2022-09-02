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

int max_sum = arr[0];
int temp_sum= arr[0];

for (int i = 1; i < n; i++)
{
    if(temp_sum>max_sum){
        max_sum = temp_sum;
    }
   else if(arr[i]>temp_sum && temp_sum<0){
temp_sum = arr[i];
    }
    
    temp_sum = temp_sum + arr[i];

}

cout<<max_sum<<endl;

    return 0;
}