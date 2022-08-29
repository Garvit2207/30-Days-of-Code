<<<<<<< HEAD
/* 28-08-2022 */
=======
/* 27-08-2022 */
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n){

for(int i=0; i<n-1; i++){

for(int j=i+1; j<n; j++){
    if(arr[i]>arr[j]){
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
    }
}

}
cout<<"Sorted array-:"<<endl;
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
    bubble_sort(arr, n);
<<<<<<< HEAD
}
=======
}
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
