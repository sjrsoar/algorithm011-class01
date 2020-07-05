class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> myhash;
		vector<int> out;
        /* 首先所有的数据哈希映射表 */
		for (int i = 0; i < nums.size(); i++) {
			myhash[nums[i]] = i;
		}

		for (int i = 0; i < nums.size(); i++) {
            /* 在这里 判断 如果 存在 target - nums[i] 对应的 值  并且这个值不是自己 */
            /*映射关系  key->value,  key:target - nums[i],  value:myhash[target - nums[i]]*/
			if (myhash[target - nums[i]] && (myhash[target - nums[i]] != i)) {
				out.push_back(i);
				out.push_back(myhash[target - nums[i]]);
				return out;
			}
		}

		return out;
	}
};