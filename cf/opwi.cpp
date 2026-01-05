#include<iostream>
#include<vector>
using namespace std;
int calc(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int maxv=0;
    int keep=0;
for(int i=0;i<n;i++){
    if(a[i]>=maxv){
        maxv=a[i];
        keep++;
    }
}
cout<<n-keep<<endl;
return n-keep;
}
int main(){
    int t;
  cin>>t;
  while(t--){
      calc();
  }
return 0;
    
}
