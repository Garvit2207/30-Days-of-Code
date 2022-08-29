<<<<<<< HEAD
/* 27-08-2022 */
=======
/* 28-08-2022 */
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
#include <iostream>
using namespace std;

class MergeSort{
public:
int merge(int *arr, int l, int mid , int r){

int temp[r+1];
int i=l;
int j = mid+1;
int f = l;
while(i<=mid && j<=r){

if(arr[i]<arr[j]){
    temp[f] = arr[i];
    f++;
    i++;
}
else {
    temp[f] = arr[j];
    f++;
    j++;
}
}

if(i>mid){

while(j<=r){
    temp[f] = arr[j];
    f++;
    j++;
}
}
else if(j>r){
    while(i<=mid){
        temp[f] = arr[i];
        i++;
        f++;
    }
}

for(int i= l; i<=r; i++){
    arr[i] = temp[i];
}
}

int merge_sort(int *arr, int l, int r){
if(l<r){
    
int mid;
mid = (l+r)/2;

merge_sort(arr, l, mid);
merge_sort(arr, mid+1, r);

merge(arr, l, mid, r);
}
}
};

int main(){

int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}
MergeSort obj;
obj.merge_sort(arr, 0, n-1);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
<<<<<<< HEAD
}
=======
}
>>>>>>> e259fbb1ebed98066a8401d54915768d95373c3b
