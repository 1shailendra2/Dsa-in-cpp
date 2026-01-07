#include <iostream>
#include <algorithm>
using namespace std;
void finde(){
    int n;
    if(!(cin>>n)) return;
    string i ,j;
    cin>>i>>j;
    sort(i.begin(),i.end());
    sort(j.begin(),j.end());
    if(j==i){
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
}
int main()
{
    int t=0;
    cin>>t;
    while(t--){
    finde();
}
    return 0;
}
