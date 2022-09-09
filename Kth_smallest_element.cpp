#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    int temp=0;
    cout<<"Input K"<<endl;
    cin>>k;
    cout<<"Input elements of array"<<endl;
    for(int i=0; i<n; i++){
        
        cin>>arr[i];
    }
    
   for(int i=0; i<n; i++){
       
       for(int j=0; j<n; j++){
       
       if(arr[i]<arr[j]){
           
          temp = arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
           
       }
           
       }
       
   }
   
   cout<<arr[k-1];

    
    return 0;
    
}