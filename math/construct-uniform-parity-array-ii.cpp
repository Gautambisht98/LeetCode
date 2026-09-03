class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        for(int i=1;i<nums1.size();i++){
        
                
            
            if(nums1[i]%2!=0){
                nums2.push_back(nums1[0]);
                nums2.push_back(nums1[i]-nums1[i-1]);
            }
            else{
                 nums2.push_back(nums1[0]);
                nums2.push_back(nums1[i]);
            }
        }
        return true;
        
    }
};