class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m = nums2.size();
        vector<bool> used(n, false);
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(nums1[j]==nums2[i] && !used[j]){
                        ans.push_back(nums1[j]);
                        used[j] = true;
                        break;
                    }
                }
            }
        return ans;
    }
};