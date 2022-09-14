#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=2*n; i++){
        
        for(int j=1; j<=2*n-1; j++){
            
         if(i<=n){
             
             if(n-i<j && n-i< 2*n-j){
                 
                 cout<<'*';
             }
             
             else cout<<" ";
             
         }   
         
         if(i>n){
             
             if((j<n+1 && i-n<=j) ||( j>n && j<=3*n-i))
         {
             cout<<'*';
         }
         else cout<<" ";
             
        } 
            
        }
        cout<<endl;
    }

    return 0;
}