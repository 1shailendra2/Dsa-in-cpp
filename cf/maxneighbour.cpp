#include <iostream>
#include<algorithm>
using namespace std;
int solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return 1;
    }
    else if(n==2){
        cout<<9<<"\n";
        return 9;
    }
    long long firstmax=4*n*n-n-4;
    long long secondmax=5*n*n-5*n-5;
   int maxamt=max(firstmax,secondmax);
    cout<<maxamt<<"\n";
    return maxamt;
}

int main()
{
int t=0;
cin>>t;
while(t--){
    solve();
} 
    return 0;
}
