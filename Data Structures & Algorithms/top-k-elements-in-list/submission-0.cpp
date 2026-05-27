class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> freq;
        for( int num :nums){
            freq[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;

        // push frequency 

        for(auto it : freq){
            minHeap.push({
                it.second,it.first
            });
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        vector<int> ans;

        while( ! minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
        
    }
};
