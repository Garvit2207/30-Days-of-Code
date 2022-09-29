#include <iostream>
#include<cmath>
using namespace std;

long long int difference(int a, int b){
    
    long long int diff = a-b;
    if(diff<0){
        return diff*(-1);
    }else return diff;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	
	long long int a,b,x;
	cin>>a>>b>>x;
	
	long long int diff = difference(a,b);
    int new_n = diff;
    if(a==b){
        cout<<"YEs"<<endl;
    }
    else if(new_n%(2*x)==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
// 	if(a==b){
// 	    cout<<"YES"<<endl;
// 	}
// 	else if(diff<x){
// 	    cout<<"NO"<<endl;
// 	}
// 	else if(n*2==diff){
// 	    cout<<"YES"<<endl;
// 	}else if(diff%x==0 && x==1){
// 	    cout<<"YES"<<endl;
// 	}
// 	else cout<<"NO"<<endl;
	
	}
	return 0;
}
