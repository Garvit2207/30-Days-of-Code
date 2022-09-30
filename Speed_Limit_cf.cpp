#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    float a,x,b,y;
	    cin>>a>>x>>b>>y;
	    float s1 = a/x;
	    float s2 = b/y;
	    
	    if(s1>s2){
	        cout<<"Alice"<<endl;
	    }else if(s2>s1){
	        cout<<"Bob"<<endl;
	    }else if(s2==s1){
	        cout<<"Equal"<<endl;
	    }
	    
	}
	return 0;
}
