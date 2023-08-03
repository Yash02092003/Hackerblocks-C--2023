class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string> prefix;
        int size = strs.size();
        if(strs.size() == 1)
        {
            return strs[0];
        }
        for(int i = 0 ; i < size - 1; i++)
        {
            string common = "";
            string str1 = strs[i];
            string str2 = strs[i+1];
            int k = 0;
            int j = 0;
            while(k < str1.length() and j < str2.length())
            {
                if(str2[j] == str1[k])
                {
                    common += str1[k];
                    j++;
                }
                k++;
                if(k > j)
                {
                    break;
                }
            }
            prefix.push_back(common);
        }
        sort(prefix.begin(),prefix.end());
        return prefix[0];
        
    }
};
