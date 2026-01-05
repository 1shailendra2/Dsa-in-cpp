#include<iostream>
#include<vector>
#include<set>
using namespace std;
int uru(){
    int n=0;
  cin>>n;
    vector <int> a(n);
    set<int> color;
    for(int i=0; i< n;i++){
        cin >> a[i];
        color.insert(a[i]);
    }
    int k=color.size();
    while(color.find(k)==color.end() ){
        color.insert(k);
        k++;
    }
    cout<<k<<"\n";
    return k;
}
int main(){
    int t=0;
cin>>t;
while(t--){
    uru();
}

}
