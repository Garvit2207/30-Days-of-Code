#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    
	    long int even=0;
	    long int odd=0;
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){

	            even++;
	        }else odd++;
	    }
	    
	    if(odd==0 || even==0){
	        cout<<0<<endl;
	    }
	    else{
	        
	        
	    long long int nodes;
	    nodes = n + even;
	    long long int sum = nodes*(nodes+1)/2;
	    if(nodes<=200000){
	        
	   cout<<even<<endl;
	    
	    }else cout<<0<<endl;
	        
	    }
	    
	}
	
	return 0;
}
