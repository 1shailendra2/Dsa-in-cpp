#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve()
{
    int n=0,x=0;
cin>>n>>x;
vector <int> a(n);
for(int i=0;i<a.size();i++){
    cin>>a[i];
}
int first=a[0];
int second=0;
int back=0;
int mux=0;
for(int i=1;i<n;i++){
    second=a[i]-a[i-1];
    first= max(first,second);
}
    back=2*(x-a[n-1]);
mux=max(first,back);
cout<<mux<<"\n";
    return mux;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        solve();
    }
}
