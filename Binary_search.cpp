#include <iostream>
using namespace std;

void merge(int *arr, int lb, int ub)
{
    int mid = (lb + ub) / 2;
    // int b[ub];
    int len1 = mid - lb + 1;

    int len2 = ub - mid;

    int *first = new int[len1];

    int *second = new int[len2];

    // copying elements;
    int k = lb;

    for (int i = 0; i < len1; i++)

    {

        first[i] = arr[k];

        k++;
    }
    k = mid + 1;

    for (int i = 0; i < len2; i++)
    {

        second[i] = arr[k];

        k++;
    }

    // merge 2 sorted arrays
    int mainarrayindex = lb;

    int index1 = 0;

    int index2 = 0;

    while (index1 < len1 && index2 < len2)

    {

        if (first[index1] < second[index2])
        {

            arr[mainarrayindex] = first[index1];

            index1++;
            mainarrayindex++;
        }

        else
        {

            arr[mainarrayindex] = second[index2];

            index2++;
            mainarrayindex++;
        }
    }

    while (index1 < len1)
    {

        arr[mainarrayindex] = first[index1];
        mainarrayindex++;
        index1++;
    }

    while (index2 < len2)

    {

        arr[mainarrayindex] = second[index2];
        mainarrayindex++;
        index2++;
    }

    delete[] first;

    delete[] second;
}

void merge_sort(int *arr, int lb, int ub)
{
    if (lb >= ub)
    {
        return;
    }

    if (lb < ub)
    {

        int mid = (lb + ub) / 2;

        merge_sort(arr, lb, mid);

        merge_sort(arr, mid + 1, ub);

        // int b[ub];
        merge(arr, lb, ub);
    }
}

void binarysearch(int *arr, int n,int target){
int s=0;
int e=n;
int middle=(s+e)/2;
int mid=0;
int a=0;
for(int i=0; i<=middle; i++){

mid= (s+e)/2;

if(target<=arr[mid]){

s=0;
e=mid;

if(target==arr[mid]){
cout<<"Element found"<<endl;
// cout<<mid;

for (int i = 0; i <= mid; i++)
{
 
    if (arr[i]==arr[mid])
    {
      
        cout<<a;
        break;
    }
         a++;
    
}

break;
}

}

if(target>arr[mid]){
    s=mid;
    e=n;
  if(target!=mid && n-mid==1){
      if(target==arr[mid+1]){
          cout<<"Element found"<<endl;
          cout<<mid+1;
          break;
      }
  }
    if(target==arr[mid]){
    cout<<"Element found"<<endl;
    cout<<mid;
  break;
    }
}

}

}

int main(){

int n;
cin>>n;

int *arr = new int[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

merge_sort(arr, 0, n-1);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int target;
cin>>target;
binarysearch(arr, n-1, target);

    return 0;
}