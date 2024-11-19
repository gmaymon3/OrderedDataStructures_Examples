#include "MyVector.h"
#include <vector>
#include <iostream>
#include <unordered_map>

std::vector<int> MyVector::twoSum(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> hash_map; // Hash table to store number and its index

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];  // Calculate complement

        // Check if the complement is already in the hash map
        if (hash_map.find(complement) != hash_map.end()) {
            // If found, return the indices
            return { hash_map[complement], i };
        }

        // If not found, store the current number and its index in the hash map
        hash_map[nums[i]] = i;
        //std::cout << "Storing: " << nums[i] << " at index " << i << std::endl;

    }

    return {}; // Return an empty
}

std::vector<int> MyVector::twoSumSlow(std::vector<int>& nums, int target)
{
    // Iterate through each pair of elements in the array
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            // Check if the sum of the two numbers equals the target
            if (nums[i] + nums[j] == target) {
                return { static_cast<int>(i), static_cast<int>(j) }; // Return the indices
            }
        }
    }
    return {}; // Return an empty vector if no solution is found (not expected per problem
}
