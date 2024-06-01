#include <bits/stdc++.h>
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vin vector<ll>
const ll MOD = 1e9 + 7;
const int MXN = 2e5 + 5;
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define rep(ii, beg, till, inc) for (int ii = beg; ii < till; ii += inc)
#define repr(ii, beg, till, inc) for (int ii = beg - 1; ii >= till; ii -= inc)
using namespace std;
// const int mx=1e5+123;
// int arr[mx],cnt[mx];
// const int mx=2*1e5+123;
// int a[mx];
// bool cnt[mx];
/*bool cmp(const pair<int,int>&p1,const pair<int,int>&p2){
    if(p1.first>p2.first){return 1;}
    else if(p1.first==p2.first){return(p1.second<p2.second);}
    return 0;
}*/
// typedef long long ll;
// const int mx=2e5+123;
// ll arr[mx],cnt[mx];
ll ti(int x)
{
    string s = to_string(x);
    sort(all(s));
    return s[s.size() - 1] - s[0];
}
int solve(string myString)
{
    int x;
    stringstream ss(myString);
    ss >> x;
    return x;
}
bool nil(ll n, ll m)
{
    if (n == m)
        return true;
    if (n % 3 != 0)
        return false;
    return nil((n / 3), m) || nil((2 * n / 3), m);
}
ll factorial(ll n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

// Calculate GCD from an array using recursion
ll GcdOfArray(vector<ll> &arr, ll idx)
{
    if (idx == arr.size() - 1)
    {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(
        a, b); // __gcd(a,b) is inbuilt library function
}
/// prime number generation
/*const int mx =1e5+123;
bitset<mx>isprime;
vector<int>primes;

void primegen(int x){
    for(int i=3;i<=x;i+=2){
        isprime[i]=1;
    }
    isprime[2]=1;
    int sq=sqrt(x);
    for(int i=3;i<=sq;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<=x;j+=i){
                isprime[j]=0;
            }
        }
    }
}*/
/// Find divisors from a number
/*for(int i=1;i*i<=n;++i){
        if(n%i==0){
            vv.push_back(i);
            if(i*i!=n){
                vv.push_back(n/i);
            }
        }
    }*/
bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {

        long long sr = sqrt(x);
        return (sr * sr == x);
    }

    return false;
}
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m), vvv;
    vector<int> vv[n];
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int x;
            cin >> x;
            vv[i].push_back(x);
        }
    }

    for (int j = 0; j < m; ++j)
    {
        int ans = 0;
        for (int k = 0; k < n; ++k)
        {
            ans += vv[k][j];
        }
        vvv.push_back(ans);
    }
    /*for (auto u : vvv)
    {
        cout << u << " ";
    }
    cout << endl;
    */

    bool ok = 0;
    for (int i = 0; i < vvv.size(); ++i)
    {
        if (vvv[i] >= v[i])
        {
            ok = 1;
        }
        else
        {
            ok = 0;
            break;
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    FIO;

    solve();

    // cout << '\n';

    /*int lim=1e5;
    primegen(lim);
    solve();
    //cout<<'\n';*/

    return 0;
}
