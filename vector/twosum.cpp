#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr{1,5,2,7,4};
	int sum {9};
	for(int i {0}; i<arr.size();i++){
		int element=arr[i];
for(int j{i+1};j<arr.size();j++){
	if(element+arr[j]==sum){
		cout<<element<<","<<arr[j]<<endl;
	}
}
	}
}
