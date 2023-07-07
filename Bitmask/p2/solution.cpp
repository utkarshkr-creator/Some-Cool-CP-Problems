#include<bits/stdc++.h>
using namespace std;   
using ll=long long;  
const int Max_value=(1<<8)+12;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;  
    while(t--){
        int n;cin>>n;   
        vector<int>a(n);   
        for(auto &u:a){
             cin>>u;
        }

        // because a[i] is just 255
        // things is we have to find max_xor of subarray, that will be our answer
        // let if you are at position j
        //1-------j having xor p
        // and at any idex k<j, xor is q
        // so, 1----j->p, 1----k->q, then k---j->p^q
        // so, we get the subarray xor from k to j
        // because a[i] is small, we get maximum xor of 255
        // for at any index, we check that is till that index, if i get and value
        // get we will xor it with curr_xor_value i.e 1---j
        // and we will get xor k---j, 
        // we do this till we get maximum value



        vector<bool>found(Max_value);

        // we check at every index
        int cur_xor=0;   
        found[0]=1; //esko isliye kiye taki answer me 1---i bhi inclue ho ske :)
        int ans=0;
        for(int i=0;i<n;i++){
                cur_xor^=a[i];
                for(int k=0;k<Max_value;k++){
                     if(found[k]){
                        ans=max(ans,cur_xor^k);// so observation is that
                        // if at any index if you get value k, then
                        // from that index to cur_idex, you will get 
                        // cur_xor^k
                     }
                }

                found[cur_xor]=true;
        }
        cout<<ans<<"\n";

    }
    
    return 0;
}
