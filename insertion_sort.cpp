/* 27-08-2022 */
#include <iostream>
using namespace std;

void insertion_sort(int *arr, int n){

for (int i = 0; i < n; i++)
{
    int current =arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>current){

arr[j+1] = arr[j];
j--;

    }
    arr[j+1] = current;
}

for(int i=0; i<n; i++){
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

insertion_sort(arr, n);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
