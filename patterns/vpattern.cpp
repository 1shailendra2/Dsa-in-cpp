#include<iostream>
int main(){
        using namespace std;
        int n=0;
        cin>>n;
        for(int i=0;i<n;i++){
                for(int j=0;j<n-i;j++){
                cout<<"*";
                }
                for(int j=0;j<2*i;j++){
                        cout<<" ";
                }
                for(int j=0;j<n-i;j++){
                        cout<<"*";

                }
  cout<<endl;
        } 
           for(int i=n-1;i>=0;i--){
                for(int j=0;j<n-i;j++){
                cout<<"*";
                }
                for(int j=0;j<2*i;j++){
                        cout<<" ";
                }
                for(int j=0;j<n-i;j++){
                        cout<<"*";

                }
  cout<<endl;
        } 
      

    
    
}
