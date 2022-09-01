#include <iostream>
using namespace std;

int main(){

int n1;
cin>>n1;

int arr1[n1];
for(int i=0; i<n1; i++){
    cin>>arr1[i];
}

int n2;
cin>>n2;
int arr2[n2];

for (int i = 0; i < n2; i++)
{
    cin>>arr2[i];
}
int size=0;
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
            if(arr1[i]==arr2[j]){
                size--;
            }

        
    }
    
}
size = size +n1 +n2;

int uni[size];

for (int f = 0; f < n1; f++)
{
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        if(f!=i){
            if(arr1[f]!=arr1[i]){
                count++;
            }
        }
    }
    
    
}
    


    return 0;
}