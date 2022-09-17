# include <iostream>
using namespace std;

int main(){

int t;
cin>>t;
int test_count=1;
while(t--)
{
int x;
cin>>x;

int a = 1;
int d = 5;
int bot = (x-a)/d + 1;

cout<<"Case #"<<test_count<<": "<<bot<<endl;
test_count++;
}
return 0;
}