#include <bits/stdc++.h>
using namespace std;
using ll=long long int ;
class fenwikTree{
    ll MaxIdx;  
    vector<ll> tree;
public:
    fenwikTree(ll n){
         MaxIdx=n;
         tree.assign(n+1,0);      
    }
    void update(ll idx,ll val){
         while(idx<=MaxIdx){
            tree[idx]+=val;  
            idx+=(idx & -idx);  
         }
    }
    ll PointSum(ll idx){
         ll sum=0;  
         while(idx>0){
             sum+=tree[idx];  
             idx-=(idx & -idx);
         }
         return sum;
    }
    ll rangeSum(ll l,ll r){
        return PointSum(r)-PointSum(l-1);
    }
    
};
  
int main(){
     int n;  
     cin>>n; 
     vector<int> a(n+1);
     int maxNum=-1;  
     for(int i=1;i<=n;i++){
        cin>>a[i]; 
        maxNum=max(maxNum,a[i]);   
     }
     fenwikTree BIT(maxNum);
     int RSum=0;
     for(int i=1;i<=n;i++){
         RSum+=BIT.rangeSum(a[i]+1,maxNum);  
         BIT.update(a[i],1);
     }
     cout<<RSum<<endl;
}
