#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int target = 0 - nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                if (nums[left] + nums[right] == target) {
                    triplets.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (nums[left] + nums[right] < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return triplets;
    }
};
//the main loop iterates through the array nums n times, 
//and the inner loop iterates through the array nums from i + 1 to n - 1, 
//which is a total of n - i - 1 times. 
//The total number of iterations of the main loop and the inner loop is therefore n(n - i - 1), which is O(n^2)
//The time complexity of the program can be improved by using a more efficient sorting algorithm, 
//such as the quicksort algorithm. The quicksort algorithm has a worst-case time complexity of O(n^2), 
// but its average-case time complexity is O(n log n).
