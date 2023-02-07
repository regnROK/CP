//  Sort Integers by The Number of 1 Bits

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            bitset<32> b1(arr[i]);
            pq.push(make_pair(b1.count(),(arr[i])));
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};