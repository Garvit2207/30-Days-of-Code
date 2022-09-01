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

int k;
cout<<"Enter sum"<<endl;
cin>>k;

int count = 0;
int sum = 0;
int temp_count=0;
int temp_sum = 0;
for (int i = 0; i < n; i++)
{
    if(arr[i]<=(k-sum) ){
        temp_count=0;
        temp_sum=0;
sum = sum + arr[i];
count++;
    }
    else if(sum+arr[i]>=k && arr[i]<=(k-temp_sum)){
        temp_count++;
        temp_sum  = temp_sum + arr[i];
if (temp_count>count)
{
    count = temp_count;
    sum = temp_sum;
}

    }
}
if(sum!=k){
    cout<<0;
}
else cout<<count;


    return 0;
}