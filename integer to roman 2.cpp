        string roman = "";
        vector<string> notations = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> nums = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int pos = 0 ; num > 0 ; pos++)
        {
            while(num >= nums[pos])
            {
                roman += notations[pos];
                num -= nums[pos];
            }
        } 
        return roman;
