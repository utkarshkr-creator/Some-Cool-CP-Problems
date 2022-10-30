class Solution {
public:
    int n,m; 
    int dx[4]={-1,0,0,1};  
    int dy[4]={0,-1,1,0}; 
    bool isvalid(int i,int j){
         return i>=0 && i<n && j>=0 && j<m;
    }
  
    int shortestPath(vector<vector<int>>& grid, int k) {
        n=grid.size();  
        m=grid[0].size();  
        vector<vector<int>> remains(n,vector<int>(m,-1));  
        queue<array<int,3>> qu;  
        qu.push({0,0,k});
        remains[0][0]=k;  
        int ans=0;
        while(!qu.empty()){
            int steps=qu.size();
            for(int i=0;i<steps;i++){
                auto u=qu.front();  
                if(u[0]==n-1 && u[1]==m-1)return ans;
                qu.pop();  
                for(int l=0;l<4;l++){
                    int x=u[0]+dx[l];  
                    int y=u[1]+dy[l];  
                    if(!isvalid(x,y))continue; 
                    int  rem=u[2]-grid[x][y];  
                    if(rem>remains[x][y]){
                            qu.push({x,y,rem});
                            remains[x][y]=rem;
                    }
                }
            }
            ans++;
        }
        return -1;
        
    }
};
