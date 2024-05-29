#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=1;i<=n;++i){
    cin>>v[i];
}
sort(v.begin(),v.end());
int target;
cin>>target;
cout<<upper_bound(v.begin(),v.end(),target)-v.begin()<<endl;
return 0;
}
