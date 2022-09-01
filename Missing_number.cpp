/* 2-08-2022 */
#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
int computed_sum = 0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    computed_sum = computed_sum + arr[i];
}
int original_sum = 0;
for (int i = 1; i <=n+1; i++)
{
    original_sum = original_sum + i;
}

int diff = original_sum - computed_sum;
cout<<diff<<endl;

}