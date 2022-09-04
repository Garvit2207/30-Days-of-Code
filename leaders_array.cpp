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
n= n-1;
int max = arr[n];
cout<<max<<" ";
for (int i = n-1; i >=0; i--)
{
    if(arr[i]>max){
        max = arr[i];
        cout<<max<<" ";
    }

}


}