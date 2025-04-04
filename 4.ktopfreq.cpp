class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> freqMap;  
    
           
            for (int num : nums) {
                freqMap[num]++;
            }
    
           
            priority_queue<pair<int, int>> maxHeap;
    
           
            for (auto p: freqMap) {
                maxHeap.push({p.second,p.first});
            }
    
           
            vector<int> result;
            while (k-- && !maxHeap.empty()) {
                result.push_back(maxHeap.top().second);
                maxHeap.pop();
            }
    
            return result;
        }
    };