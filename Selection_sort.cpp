/* 27-08-2022 */
#include <iostream>
using namespace std;

void selection_sort(int *arr, int n){

for (int i = 0; i < n-1; i++)
{ int min=i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[min]){
           min =j;
        }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}
cout<<"Sorted array-: "<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}



}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
selection_sort(arr, n);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
