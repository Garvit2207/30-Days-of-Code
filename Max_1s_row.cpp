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
int temp_count = 0;
int max_count = 0;
int row = 0;
for (int i = 0; i < n; i++)
{
    temp_count = 0;
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]==1){
temp_count++;
        }
    }
    if(temp_count>max_count){
        max_count = temp_count;
        row = i;
    }
    
}

cout<<row;
return 0;

}