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

int temp_arr[3]= {0};
for (int i = 0; i < n; i++)
{
    if(arr[i]==0){
        temp_arr[0]++;
    }else if(arr[i]==1){
        temp_arr[1]++;
    }
    else if(arr[i]==2){
        temp_arr[2]++;
    } 
}
int j=0;
for (int i = 0; i < 3; i++)
{
    while(temp_arr[i]!=0){
        arr[j] = i;
        temp_arr[i]--;
        j++;
    }
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;

}