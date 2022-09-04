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

int buy = arr[0];
int sell = 0;
int profit = 0;

for (int i = 0; i < n; i++)
{
    
    if(arr[i]<buy){
        buy = arr[i];
    }
    profit = arr[i] - buy;
    if(profit>sell){
sell = profit;
    }

}

cout<<sell<<endl;

    return 0;
}