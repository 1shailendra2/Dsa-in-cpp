#include<iostream>
using namespace std;
int main(){
	int n=150;
        int power=31 - __builtin_clz(n);
	for(int mask=1 << power; mask > 0; mask>>=1){
if(n& mask){
	cout<<"1";
}
else{
	cout<<"0";
}
	}
}
