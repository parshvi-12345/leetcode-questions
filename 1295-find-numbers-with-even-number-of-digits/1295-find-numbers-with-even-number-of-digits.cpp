class Solution {
public:

    bool is_digit_even(int num)
    {
        int count=0;
        while(num)
        {
            num=num/10;
            count++;
        }
        return count%2==0;
    }

    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(is_digit_even(nums[i]))
            count++;
        }
        return count;
    }
};