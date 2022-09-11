#include <iostream>

using namespace std;

void check_palindrome(int *arr, int n){
    int a=0;
    for(int i=0; i<((n-1)/2); i++){
        
        for(int j=n-i-1; j>n-i-2; j--){
            
            if(arr[i]==arr[j]){
                
            a++;
                
            }
            
        }
        
    }
    if(a==((n-1)/2)){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
}

int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];

for(int i=0; i<n; i++){
    
    cin>>arr[i];
    
}

check_palindrome(arr, n);

    return 0;
}