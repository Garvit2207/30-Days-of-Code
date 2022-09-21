#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

unordered_map<int, int> m;

for(int i=0; i<n; i++){
int data;
cin>>data;
    m[data] = m[data] + 1;
}

for(auto it: m){
    cout<<it.first<<" "<<it.second<<endl;
}


    return 0 ;
}