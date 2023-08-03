   vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        int size = nums.size();
        int powerset = 1<<size;
        for(int i = 0 ; i < powerset ; i++)
        {
            vector<int> subset;
            for(int j = 0 ; j < size ; j++)
            {
                if((1<<j)&i)
                {
                    subset.push_back(nums[j]);
                }
            }
            answer.push_back(subset);
        }
        return answer;
    }
