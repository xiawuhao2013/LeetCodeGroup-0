#include<iostream>
#include"./Include/TwoSum.h"

using namespace LeetCodeGroup;

int main()
{
    std::cout << "TwoSum Demo." << std::endl;
    std::vector<int> nums;
    //for (int i = 1; i <= 100; ++i)
    //{
    //    nums.push_back(i);
    //}
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(0);

    TwoSum twoSum;
    auto res = twoSum.GetResult(nums, 0);
    if (2 == res.size())
    {
        std::cout << "Success: \nresult is: " << res[0] << "\t" << res[1] << std::endl;
    }
    else
    {
        std::cout << "Failed." << std::endl;
    }


    return 0;
}