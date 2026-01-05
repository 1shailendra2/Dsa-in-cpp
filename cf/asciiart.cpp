#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int g,c,l;
cin>>g>>c>>l;
vector<int> scores ={g,c,l};
sort(scores.begin(),scores.end());
int diff=scores[2]-scores[0];
if(diff<10){
    cout<<"final "<<scores[1]<<"\n";
}
else{
    cout<<"check again"<<"\n";
}

    return 0;
}
