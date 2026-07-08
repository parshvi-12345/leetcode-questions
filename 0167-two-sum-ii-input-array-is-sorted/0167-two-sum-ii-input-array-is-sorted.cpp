class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        while(low<high){
            int currentSum=numbers[low]+numbers[high];
            if(currentSum==target){
                return {low+1,high+1};
            }else if (currentSum<target){
                low++;
            }else{
                high--;
            }
        }
        return {};
    }
};
    