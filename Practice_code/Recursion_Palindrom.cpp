#include<bits/stdc++.h>
#define FIO   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll    long long
#define ull             unsigned long long
#define pb              push_back
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define vin vector<ll>
const ll MOD = 1e9 + 7;
const int MXN = 2e5 + 5;
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
//const int mx=1e5+123;
//int arr[mx],cnt[mx];
//const int mx=2*1e5+123;
//int a[mx];
//bool cnt[mx];
/*bool cmp(const pair<int,int>&p1,const pair<int,int>&p2){
    if(p1.first>p2.first){return 1;}
    else if(p1.first==p2.first){return(p1.second<p2.second);}
    return 0;
}*/



bool recursion_palindrom(int i,string &ss,int n){
    if(i>=n/2){
        return true;
    }
    if(ss[i]!=ss[n-i-1]){
        return false;
    }
    return recursion_palindrom(i+1,ss,n);
}



int main()
{
    //FIO;
    string s;
    cin>>s;
    int n=s.size();

    if(recursion_palindrom(0,s,n)){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }
    return 0;
}









