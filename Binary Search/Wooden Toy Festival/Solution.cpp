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

void solve(){
    ll n;cin>>n;   
    vi a;in(a,n);    
    sort(all(a));    
    // x1,x2,x3
    //1->(x1+x2)/2->(x2+x3)/2->n
    //for any t
    // 1->x x->y y->n such that (x-1)/2<t && (y-n)/2<t && (y-x)/2<t

//      t1          t2       t3      min(t1,t2,t3)=t->binary search for that t 
//   (x-1)/2    (y-x)/2   (n-y)/2   
//      |           |          | 
//      |           |          | 
    //1-----x  x+1---------y-1 y--------n
  
   ll l=-1,r=1e9;   
   while(r-l>1){
        ll mid=(l+r)/2;   
        int i=0;   
        while(i+1<n && a[i+1]-a[0]<=2*mid)i++;
        int j=n-1; 
        while(j-1>=0 && a[n-1]-a[j-1]<=2*mid)j--; 
        i++,j--;  
        if(i>j || a[j]-a[i]<=2*mid){
            r=mid;
        }
        else{
            l=mid;
        }  

   }  
   cout<<r<<en;
    
    

}


int main() 
{
FIO;
cout << setprecision(8) << fixed;
//Code here.....boom-->:):):):):)

int t=1;  
cin>>t;  
for(int tcase=1;tcase<=t;tcase++){
    // cout<<"Case #"<<tcase<<": ";
    solve();
}

return 0;
}
