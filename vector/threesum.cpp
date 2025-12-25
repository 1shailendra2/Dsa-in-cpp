#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr{1,5,2,7,4};
	int sum {10};
	for(int i {0}; i<arr.size();i++){
int element = arr[i];
for(int k{i+1};k<arr.size();k++){
    int tyn=arr[k];
for(int j{k+1};j<arr.size();j++){
	if(element+tyn+arr[j]==sum){
		cout<<element<<","<<tyn<<","<<arr[j]<<endl;
	}

}
	}}
}
