//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    
	    int neg_n=0;
	    int pos_n = 0;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]<0){
	            neg_n++;
	        }else if(arr[i]>=0){ pos_n++;
	    }
	    }
	    
	    int neg[neg_n];
	    int pos[pos_n];
	    int g = 0;
	    int f=0;
	    for(int i=0; i<n; i++){
	        
	        if(arr[i]<0){
	            neg[f] = arr[i];
	            f++;
	        }
	        if(arr[i]>=0){
	            pos[g] = arr[i];
	            g++;
	        }
	        
	    }
	    
	    g = 0;
	    f = 0;
	    int N=0;
	    while(g<pos_n && f<neg_n){
	        arr[N]=pos[f];
	        N++;
	        arr[N] = neg[g];
	         f++;
	         g++;
	         N++;
	    }

	   if(f==neg_n){
	        while(g<pos_n){

	       arr[N] = pos[g];
	        g++;
	        N++;
	    }
	   }

	   if(g==pos_n){
	       while(f<neg_n){
	           //cout<<neg[f]<<" ";
	           arr[N] = neg[f];
	           f++;
	           N++;
	       }
	   }

	   return ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends