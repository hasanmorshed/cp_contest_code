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
#define mem(a,b) memset(a, b, sizeof(a) )
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
//typedef long long ll;
//const int mx=2e5+123;
//ll arr[mx],cnt[mx];
ll ti(int x)
{
    string s=to_string(x);
    sort(all(s));
    return s[s.size()-1]-s[0];
}
int solve( string myString)
{
    int x;
    stringstream ss( myString );
    ss >> x;
    return x;
}
void solve()
{
    int n;
    cin>>n;
    vin v(2*n);
    for(int i=0; i<(2*n); ++i)
    {
        cin>>v[i];
    }
    sort(all(v));
    int sum=0;
    for(int i=1; i<n; ++i)
    {
        sum+=abs(v[i]-v[i-1]);
    }
    for(int i=n+1; i<(2*n); ++i)
    {
        sum+=abs(v[i]-v[i-1]);
    }
    cout<<sum<<endl;
    for(int i=0; i<n; ++i)
    {
        cout<<v[i]<<" "<<v[(2*n)-i-1]<<endl;
    }
}
int main()
{
    FIO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();

        //cout << '\n';


    }

    /*solve();
    //cout<<'\n';*/

    return 0;
}



