class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for (i = 0; i < nums.size() - 1; i++)
		for (j = i + 1; j < nums.size(); j++)
			if (nums[i] + nums[j] == target)
			{
				vector<int> *ret = new vector<int>;
				ret->push_back(i);
				ret->push_back(j);
				return *ret;
			}
			return *(new vector<int>);
    }
};