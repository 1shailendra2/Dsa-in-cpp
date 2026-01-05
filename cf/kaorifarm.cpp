#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<0<<"\n";
    }
    else{
        cout<<(n/4)+1<<"\n";
    }
}
int main()
{
int t;
cin>>t;
while(t--){
    solve();
}

    return 0;
}
