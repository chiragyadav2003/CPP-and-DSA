//leetcode problem
//url = https://leetcode.com/problems/permutations/

class Solution {
    private:  void solve(vector<int> nums, vector<vector<int>> &ans, int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;            
        }
        
        for(int j=index; j<nums.size(); j++){
            //here we are swapping index
            swap(nums[index], nums[j]);
            solve(nums, ans, index+1);
            //here we use backtracking as changes are made in original string
            //also helpful in space complexity problems
            swap(nums[index], nums[j]);
        }
        
        
    }
    
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        //here  vector<vector<int>> indcates that our our final answer should of this data type
        //so we've crested 2-d vector ans 
        vector<vector<int>> ans;
        int index= 0;
        solve(nums, ans, index);
        return ans;
        
    }
};