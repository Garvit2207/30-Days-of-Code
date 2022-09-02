/* 2-09-2022 */
#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int m;
cin>>m;
int arr[n][m];

for (int i = 0; i < n; i++)
{
for (int j = 0; j < m; j++)
{
        cin>>arr[i][j];

}

}
int target ;
cout<<"Enter target"<<endl;
cin>>target;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]==target){
cout<<"TRUE"<<endl;
return 0;
        }
    }
    
}

cout<<"FALSE"<<endl;
return 0;

}