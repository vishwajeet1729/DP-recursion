/* कदाचित् अहानि, अश्रान्तः, अविरामः च प्रयत्नस्य पुरतः भाग्यमपि नष्टं भवति।
             ||राम कृष्ण हरि||*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define bitcount(x) __builtin_popcountll(x)
#define ff first
#define debug(x) cout<<x<<endl
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define sz size()
#define vvi vector<vector<int>>
#define vall(v) v.begin(), v.end()
#define line cout << endl
#define vii vector<pair<ll, ll>>
#define pho cout << "YES" << endl
#define sq(a) ((a)*(a))
#define pnahi cout << "NO" << endl
#define fr(i, k, n) for (ll int i = k; i < n; ++i)
const int MOD = 1e9 + 7;
ll lcm(ll a, ll b) { return a*(b / __gcd(a, b)); }
long long gcd(long long a, long long b){if (a == 0)return b;return gcd(b % a, a);}
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
vector<unsigned ll> factors(unsigned ll  n){vector<unsigned ll> factors; for (unsigned  ll int i = 1; i * i <= n; ++i)
  {if (n % i == 0){ factors.push_back(i);if (i != n / i){ factors.push_back(n / i); }} }return factors;
}template <typename T>void input(T&v){ for (auto&e:v) {cin>>e;}}
// if u not able to solve properly then read question again
//think twice before u type code
// think greedy
// ll n;
ll t=0;
void vishwa();
signed main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);  
cout.tie(NULL);
 // cin>>t;
t=1;
   while (t--)
    vishwa(); return 0;}

// vll dp(N,0);
  //no of ways to rach at n step from 1 step considering u can make step of 1,2,3
int n;
int rec(int level){
    if(level>n)return 0;
    if(level==n)return 1;
    int ans=0;
    for(int i=1;i<=3;++i){
      if(level+i<=n){
        int ways=rec(level+i);
        ans+=ways;
      }
    }
    return ans;
}
void vishwa(){
     
            // ll n;
            cin>>n;
            cout<<rec(1)<<endl;            

        }