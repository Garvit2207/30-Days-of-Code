#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	while(test--){
	    
	    int n;
	    cin>>n;
	    
	    long long a[n];
	    long long b[n];
	    
	    for(int i=0; i<n; i++){
	        
	        cin>>a[i];
	        
	    }
	    
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	    }
	    int count=0;
	    
	    int train[n];
	    
	    for(int i=0; i<n; i++){
	        count = 0;
	        for(int j=0; j<n; j++){
	            if(i!=j && (a[i]>a[j] || b[i]>b[j])){
	                count++;
	            }
	        }
	        train[i]=count;
	    }
	    
	    int max = 0;
	    
	    for(int i=0; i<n; i++){
	        if(train[i]>max){
	            max = train[i];
	        }
	    }
	    count = 0;
	    for(int i=0; i<n; i++){
	     if(train[i]==max){
	         count++;
	     }   
	    }
	    
	    cout<<count<<endl;
	    
	}
	
	return 0;
}
