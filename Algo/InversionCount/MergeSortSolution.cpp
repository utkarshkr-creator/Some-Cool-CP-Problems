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

ll mergeArrayCountInv(ll l,ll mid,ll r,vi &a){
    ll countInv=0;   
    int i=0,j=0;
    vi left(a.begin()+l,a.begin()+mid+1);  
    vi right(a.begin()+mid+1,a.begin()+r+1);
    ll k=l;  
    while(i<sz(left) && j<sz(right)){
          if(left[i]<=right[j]){
              a[k++]=left[i++];
          }
          else{
               a[k++]=right[j++];
               countInv+=(mid+1)-(l+i);
          }
    }
    while(i<sz(left)){
         a[k++]=left[i++];
    }
    while(j<sz(right)){
         a[k++]=right[j++];
    }
    return countInv;
}

ll enhMergeCountInv(ll l,ll r,vi &a){
     if(l>=r)return 0;
     ll mid=(l+r)/2;  
     ll countInv=0;
     countInv+=enhMergeCountInv(l,mid,a); 
     countInv+=enhMergeCountInv(mid+1,r,a);
     countInv+=mergeArrayCountInv(l,mid,r,a);
     return countInv;
}

void solve(){
     ll n;  
     cin>>n;  
     vi a;in(a,n);
     cout<<enhMergeCountInv(0,n-1,a)<<en;  
    
    
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
