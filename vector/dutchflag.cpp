#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr{1,1,0,1,1,0,0,1,0};
    int start {0};
    size_t end {arr.size()-1};
    while(start < end){
    if(arr[start]==0){
    start ++;}

    
    else if (arr[start]==1){
	    swap(arr[start],arr[end]);
	    end--;
    }}
    for(int i : arr){
	    cout<<i;
    }
    return 0;
}
