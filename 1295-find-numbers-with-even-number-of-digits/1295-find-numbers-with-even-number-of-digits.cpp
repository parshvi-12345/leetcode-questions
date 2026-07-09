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
        //     for (int i=0;i<nums.size();i++){
        //         int count_digits(nums){
        //             if (nums[i]==0){
        //                 return 0;
        //             }
        //             else{
        //                 return 1+digits(num[i]/10)
        //             }
        //         if (nums[i]%2==0){
        //             count++;
        //         }
        //     }
        // }     
        // return count;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(is_digit_even(nums[i]))
            count++;
        }
        return count;
    }
};