class Dsu{
    public:
      vector<int> par,rank;  
      Dsu(int n){
           par.resize(n);  
           rank.resize(n);  
           for(int i=0;i<n;i++){
                par[i]=i;  
                rank[i]=0;
           }
      }
      int findnode(int x){
           if(par[x]==x)return x;  
           return par[x]=findnode(par[x]);
      }
      void unionset(int x,int y){
            int u=findnode(x);  
            int v=findnode(y);  
            if(u==v)return;
            if(rank[u]>rank[v])swap(u,v);  
            par[u]=v;  
            if(rank[u]==rank[v])
              rank[v]++;
            return;
      }

};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        int n=accounts.size();
        Dsu d(n);  
        unordered_map<string,int> emailsnode;
        for(int i=0;i<n;i++){
                
                for(int j=1;j<accounts[i].size();j++){
                       if(emailsnode.count(accounts[i][j])){
                           d.unionset(i,emailsnode[accounts[i][j]]);
                       }
                       else{
                            emailsnode[accounts[i][j]]=i;
                       }
                }
        }
        vector<vector<string>> ans;
        unordered_map<int,vector<string>> groups;  
        for(auto u:emailsnode){
              string emails=u.first; 
              int id=u.second;  
              groups[d.findnode(id)].push_back(emails);
        }
        for(auto u:groups){
             int id=u.first;  
             vector<string>temp;
             temp.push_back(accounts[id][0]);
             temp.insert(temp.end(),u.second.begin(),u.second.end());  
             sort(temp.begin()+1,temp.end());  
             ans.push_back(temp);
        }
        return ans;


    }
};
