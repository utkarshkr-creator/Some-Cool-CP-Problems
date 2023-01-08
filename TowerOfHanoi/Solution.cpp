/*
         Author=UTKARSH
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

typedef unsigned long long ull;
typedef long double lld;
typedef long long int ll;
typedef long double ld;

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
vector<pii> ans;
void towerOfHanoi(ll s,ll d,ll h,ll n){
         if(n==1){
            ans.pb({s,d});
            return;
         }
         //pahle n-1 ko helper pe daal do destination ke help se
         towerOfHanoi(s,h,d,n-1);
         // ab 1 sourse pe bcha usko destination pe daal do
         ans.pb({s,d}); 
         // ab jo helper pe tha usko destination pe daal do source ke help se 
         towerOfHanoi(h,d,s,n-1);        
}

void solve(){
    ll n;   
    cin>>n;   
    towerOfHanoi(1,3,2,n);
    cout<<sz(ans)<<en;
    for(auto &[u,v]:ans){
         cout<<u<<" "<<v<<en;
    }
    
    
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
