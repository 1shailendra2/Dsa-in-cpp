#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve()
{
    int n=0,k=0;
cin>>n>>k;
vector <int> a(n);
for(int i=0;i<a.size();i++){
    cin>>a[i];
}
bool sorted=true;
if(k==1){
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            sorted=false;
            break;
        }
    }
    cout<<(sorted ? "YES":"NO")<<"\n";
}
else{
    cout<<"YES\n";
}
    return 0;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        solve();
    }
}
