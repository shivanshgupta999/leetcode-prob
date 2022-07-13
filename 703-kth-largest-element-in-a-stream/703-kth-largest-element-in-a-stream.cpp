class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int x=0;
public:
    KthLargest(int k, vector<int>& nums) {
        x=k;
        int n=nums.size();
        if(nums.empty()){
            for(int i=0;i<k;i++){
                pq.push(INT_MIN);
            }
        }
        if(!pq.size()){
            sort(nums.begin(),nums.end(),greater<int>());
            for(int i=0;i<k  && i<n;i++){
                pq.push(nums[i]); 
                
            }
        }
    }
    
    int add(int val) {
       if(pq.size()<x){
               pq.push(val); 
       }
      else if(val>pq.top()){
            pq.pop();
           pq.push(val); 
            
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */