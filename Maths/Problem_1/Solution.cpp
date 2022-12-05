/*
         Author=UTKARSH
*/
/*
------------------------------------------------------------------------

░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗  ██╗░░██╗░█████╗░██████╗░██████╗░
░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝  ██║░░██║██╔══██╗██╔══██╗██╔══██╗
░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░  ███████║███████║██████╔╝██║░░██║
░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░  ██╔══██║██╔══██║██╔══██╗██║░░██║
░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗  ██║░░██║██║░░██║██║░░██║██████╔╝
░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝  ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░

------------------------------------------------------------------------
*/
#include<bits/stdc++.h>
using namespace std;

#define FIO                                 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod                                 1000000007
#define en                                   "\n"
#define pb                                   push_back
#define ppb                                  pop_back
#define pf                                    push_front
#define ppf                                   pop_front
#define vi                                   vector<ll>
#define vs                                   vector<string>
#define pii                                  pair<ll, ll>
#define mp                                   make_pair
#define all(n)                               n.begin(), n.end()
#define ff                                     first
#define ss                                      second
#define uniq(v)                               (v).erase(unique(all(v)),(v).end())
#define sz(x)                                 (int)((x).size())
#define mem1(a)                              memset(a,-1, sizeof(a))
#define mem0(a)                              memset(a,0,sizeof(a))
#define ppc                                     __builtin_popcount
#define ppcll                                __builtin_popcountll       
#define loop(i, a, b)                         for (int i = (a); i < (b); i++)
#define looprev(i, a, b)                     for (int i = (a); i >= (b); i--)
#define logarr(arr,a,b)                     for(int z=(a);z<(b);z++) cout<<(arr[z])<<" ";cout<<endl;
#define pt(a,b)                             cout<<a<<" "<<b<<"\n";

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
typedef unsigned long long ull;
typedef long double lld;
typedef long long int ll;
typedef long double ld;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(multimap <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T, class V> void _print(unordered_multimap <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(unordered_multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename T> T gcd(T a, T b) {if (a % b) return gcd(b, a % b); return b;}
template <typename T> T lcm(T a, T b) {return (a * (b / gcd(a, b)));}
template<typename T> void inline in(vector<T> &v, ll n) {
    v.resize(n); for (ll i = 0; i < n; i++) cin >> v[i];
}
bool inline isVowel (char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.ff>>a.ss;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.ff<<" "<<a.ss;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=4e18;  
const long long N=2e6+5;
map<ll,ll> primeFactorisation(ll n){
    if(n<=1)return {{n,1}}; 
    map<ll,ll> ans;   
    for(ll prime=2;(prime*prime)<=n;prime++){
         while(n%prime==0){
              ans[prime]++;  
              n/=prime;
         }
    }
    if(n!=1)ans[n]++;
    return ans;
}

void solve(){
    ll k;  
    cin>>k;    
    map<ll,ll> primeFactor=primeFactorisation(k);  
    // debug(primeFactor); 
    ll ans=0;   
    for(auto &[u,v]:primeFactor){
        ll maxValue; 
        ll frq=v;  
        for(maxValue=u;;maxValue+=u){
             ll temp=maxValue;
             while(temp%u==0){
                   temp/=u;
                   frq--;
             }
             if(frq<=0)break;
        }
        amax(ans,maxValue);
    }
    cout<<ans<<endl;
    
}


int main() 
{
FIO;
cout << setprecision(8) << fixed;
//Code here.....boom-->:):):):):)

int t=1;  
// cin>>t;  
for(int tcase=1;tcase<=t;tcase++){
    // cout<<"Case #"<<tcase<<": ";
    solve();
}

return 0;
}
