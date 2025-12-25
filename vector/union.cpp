#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{1,3,5,7,9};
vector<int>brr{2,4,6,8};
size_t a1 ={arr.size()};
size_t b1 ={brr.size()};
size_t sum {a1+b1};
vector<int>mix;
for(int i=0;i<a1;i++){
mix.push_back(arr[i]);
}
for(int i=0;i<b1;i++){
	mix.push_back(brr[i]);
}
for(int i=0;i<sum;i++){
	cout<<mix[i];
}
}
