#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    double x;
	    cin>>x;
	    
	    double f = pow((0.143*x), (x));
	    int floor_f = floor(f);
	    if((f - floor_f)<0.5){
	        cout<<floor_f<<endl;
	    }else cout<<floor_f+1<<endl;
	}
	return 0;
}
