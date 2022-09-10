#include <iostream>
#include <map>
using namespace std;

int main() {
// 	your code goes here 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int num;
	     map<int,int>m1;
	     
	    for(int i=0; i<n; i++){
	        cin>>num;
	        m1[num] = m1[num] + 1;
	    }
	    long sum =  0;
	    for(auto it:m1){
	        if(it.second>1){
	            long long data = it.second;
	            long long pairs = (data*(data-1))/2 ;
	            sum = sum + pairs;
	        }
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
