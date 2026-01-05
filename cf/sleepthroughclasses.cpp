#include<iostream>
#include<vector>
#include<set>
using namespace std;
int uru(){
int n,k;
string s;
cin>>n>>k>>s;
int muststayawake=-1;
int sleepcount=0;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        muststayawake=i+k;
    }
    else if(i>muststayawake){
        sleepcount++;
    }
}
cout<<sleepcount<<"\n";
return sleepcount;
}
int main(){
    int t=0;
cin>>t;
while(t--){
    uru();
}

}
