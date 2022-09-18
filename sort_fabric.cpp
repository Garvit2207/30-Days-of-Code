#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int test_case = 1;
    while(t--){
        
        int n;
        cin>>n;
        string c[n];
        int d[n];
        int u[n];
        for(int i=0; i<n; i++){
            cin>>c[i];
            cin>>d[i];
            cin>>u[i];
        }
        if(n==1){
            cout<<"Case #"<<test_case<<": "<<1<<endl;
        }else{
        cout<<"Case #"<<test_case<<": ";
        int count = 0;
        
        for(int i=0; i<n-1; i++){
            int dura_check[2]= {0};
            int color_check[2] = {0};
            if(c[i]==c[i+1]){
                if(u[i]<u[i+1]){
                    color_check[0]++;
                }else color_check[1]++;
            }else{
                int j=0;
                while(c[i][j] == c[i+1][j]){
                j++;
            }
            if(int(c[i][j])<int(c[i+1][j])){
                color_check[0]++;
            }else color_check[0+1]++;
            }
            
            
            if(d[i]==d[i+1]){
                if(u[i]>u[i+1]){
                    dura_check[0+1]++;
                }else dura_check[0]++;
            }
            else if(d[i]<d[i+1]){
                dura_check[0]++;
            }else dura_check[0+1]++;
            // cout<<c[i]<<"" <<c[i+1]<<endl;
            for(int j=0; j<2; j++){
                 if(dura_check[j]==color_check[j] && dura_check[j]>0){
                     
                if(i==0){
                    count = count + 2;
                }else count = count + 1;
        }
            } 
        }
        cout<<count<<endl;
        }
        
        test_case++;
    }
    
}