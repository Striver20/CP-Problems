#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define int                 ll
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define rep(i, m, n)        for (ll i = m; i < n; i++)
#define ppi                 pair<int, int>
#define pb                  push_back
#define endl                "\n"
#define all(v)              (v).begin(), (v).end()
#define f                   first
#define ss                  second
#define in                  insert
#define lb                  lower_bound
#define ub                  upper_bound
#define sz                  size()
#define bg                  begin()
#define pq                  priority_queue
#define vc                  vector<ll>
#define vcp                 vector<ppi>
#define mp                  map<int, int> 
#define gp                  gp_hash_table<int, int, chash>
#define mem1(a)             memset(a, -1 ,sizeof(a));
#define memt(a)             memset(a, true ,sizeof(a));
#define re(a)               {cout<<a<<enl;}
#define sd                  greater<int>()
#define sdp                  greater<ppi>()
#define enl                 "\n"; return;
// #define SET(n)              cout << fixed << setprecision(n)
#define ppc                 __builtin_popcountll
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" : "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
template<typename T> istream& operator>>(istream& is,  vector<T>  &v){ for(auto& i : v) is >> i; return is;}
template<typename T> ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}
 
template<class T> void _print(T n){cerr<<n;}
template<class T, class V> void _print(T a[], V n){cerr<<"Array: [ "; rep(i, 0, n){_print(a[i]); cerr<<" ";} cerr<<" ] \n";}
template<class T, class V> void _print(pair<T, T> a[], V n){cerr<<"Pair Array: [ "; rep(i, 0, n){cerr<<"{";_print(a[i].f); cerr<<", "; _print(a[i].ss); cerr<<"},";cerr<<" ";} cerr<<"] \n";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
const double eps=1e-6;
const int MOD=1e9+7 , inf=INT_MAX, inff=INT_MIN;
//998244353
const int N=(400000)+5;
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash { // To use most bits rather than just the lowest ones:
    int MUL=1e9+3;
    int operator()(int x) const { return std::hash<ll>{}((x ^ RANDOM) % MOD * MUL); }
};
ll expo1(ll a, ll b)  {ll res = 1; while (b > 0) {    if (b & 1)res = (res * a);     a = (a * a);     b = b >> 1;} return res;}
ll expo(ll a, ll b, ll MOD=1e9+7)   {ll res = 1; a%=MOD; while (b > 0) {if (b & 1)res = (res * a) % MOD; a = (a * a) % MOD; b = b >> 1;} return res;}
int LOG(ll n, ll x) {int ans=-1;while(n>0){    ans++, n/=x;}return ans;}
int Ceil(ll a, ll b) {if(a%b==0 || a<0) return a/b; else return a/b+1;}
int dx[]={1, 1, -1, -1}, dy[]={1, -1, 1, -1};
void Solve(int T)
{
   int n;
   cin>>n;
   rep(i,2,n+1){
    if(__gcd(i,n-i-1)==1){
        cout<<i<<" "<<(n-i-1)<<" "<<1<<endl;
        break;
    }
   }
}

signed main()
{ 
    fast
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);  
    #endif
    int T=1;

    // SieveOfEratosthenes();
    // f();
    
    cin >> T;
    int i=1;

    while(T--)
    {
        // cout<<"Case #"<<i<<": ";
        Solve(i++);  
    } 

    #ifndef ONLINE_JUDGE
    cerr<<"\ntime taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
    #endif

    return 0;
}