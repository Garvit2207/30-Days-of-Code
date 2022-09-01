/* 2-08-2022 */
#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;
int A[n];
for (int i = 0; i < n; i++)
{
    cin>>A[i];
}
	    for(int i=0; i<n; i++){
	        if(i==n-1){
                cout<<A[i];
	            return 0;
	        }
	           else if(A[i]==A[i+1]){
	              i= i+1;  
	        }
	        else if(A[i]!=A[i+1]){
                cout<<A[i];
	            return 0;
	        }
	    }
}