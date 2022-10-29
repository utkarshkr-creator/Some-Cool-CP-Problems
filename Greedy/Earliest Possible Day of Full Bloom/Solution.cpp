class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> planing;  
        int n=plantTime.size();  
        for(int i=0;i<n;i++){
            planing.push_back({growTime[i],plantTime[i]});
        }
        sort(planing.rbegin(),planing.rend());  
        int crgrow=0,crplant=-1;
        for(int i=0;i<n;i++){
             crplant+=planing[i].second;
             crgrow=max(crgrow,crplant+planing[i].first+1);
        }

        return max(crplant,crgrow);

    }
};

 /*
       1. List the planting like the diagram above shows, where a row represents the timeline of a seed.
       A row i is above another row j if the last day planting seed i is ahead of the last day for seed j.
       Does it have any advantage to spend some days to plant seed j before completely planting seed i?
       2. No. It does not help seed j but could potentially delay the completion of seed i, resulting in a worse final answer. 
       Remaining focused is a part of the optimal solution.
       3. Sort the seeds by their growTime in descending order. 
       Can you prove why this strategy is the other part of the optimal solution? 
       Note the bloom time of a seed is the sum of plantTime of all seeds preceding this seed plus the growTime of this seed.
       4. There is no way to improve this strategy.
       The seed to bloom last dominates the final answer. 
       Exchanging the planting of this seed with another seed with either a larger or smaller growTime will result in a potentially worse answer.

*/
  
