#pragma once
#include <vector>

class MyVector
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    std::vector<int> twoSumSlow(std::vector<int>& nums, int target);

private:
    std::vector<int> numbers; // Container to store integers

};

