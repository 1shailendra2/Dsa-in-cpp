#include<iostream>
using namespace std;
int main(){
	int n=270;
	int power=31 - __builtin_clz(n);
	int start= 1<< power;
	cout<< start;
}
