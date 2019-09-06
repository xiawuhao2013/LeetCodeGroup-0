#include"../Include/TwoSum.h"

namespace LeetCodeGroup
{
    std::vector<int> TwoSum::GetResult(std::vector<int>& nums, int target)
    {
        std::vector<int> res;
        if (nums.size() < 2)
        {
            return res;
        }
        auto iter0 = nums.begin();
        int index0 = -1;
        for (; iter0 < nums.cend() - 1; ++iter0)
        {
            int index1 = ++index0;
            //if ((*iter0) > target)
            //{
            //    continue;
            //}
            for (auto iter1 = iter0 + 1; iter1 < nums.cend(); ++iter1)
            {
                ++index1;
                //if ((*iter1) > target)
                //{
                //    continue;
                //}
                if (target == (*iter0) + (*iter1))
                {
                    res.push_back(index0);
                    res.push_back(index1);

                    return res;
                }
            }
        }

        return res;
    }
}