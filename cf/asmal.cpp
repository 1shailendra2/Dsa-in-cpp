#include<iostream>
#include<vector>
#include<string>
using namespace std;
void finder(){
	int n;
	cin >> n;
	if(n<=0) return;
	vector<string> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
 string res=a[0];
 for(int i=1;i<n;i++){
	 string option1=res+a[i];
	 string option2=a[i]+res;
	 if(option1 > option2){
		 res=option2;
	 }
	 else{
		 res=option1;
	 }
 }
cout<<res<<endl;
}
int main(){
	int t=0;
	cin >>t;
	while(t--){
	finder();}
return 0;
}
