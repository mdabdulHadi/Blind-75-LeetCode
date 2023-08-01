class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int sum, n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            if(i==0||nums[i]!=nums[i-1]){
                int left = i+1;
                int right = n-1;
                while(left<right){
                    sum=nums[i]+nums[left]+nums[right];
                    if(sum==0){
                        result.push_back({nums[i],nums[left],nums[right]});
                        while(left<right&&nums[left]==nums[left+1])
                            left++;
                        while(left<right&&nums[right]==nums[right-1])
                            right--;
                        left++;
                        right--;
                    }
                    else if(sum<0)
                        left++;
                    else
                        right--;
                    
                }
            }
        }
        return result;
    }
};
/*The first difference is that the code you have provided uses a technique called two pointers. Two pointers is a technique that uses two pointers to iterate through the array. In this case, the two pointers are used to iterate through the array from the second element to the last element. The code then checks if the sum of the three elements pointed to by the two pointers is equal to 0. If it is, the code adds the triplet to the result vector. Otherwise, the code increments the left pointer if the sum is less than 0, or decrements the right pointer if the sum is greater than 0.

The second difference is that the code you have provided checks if the current element is equal to the previous element before it starts iterating through the array. This is done to prevent the code from adding duplicate triplets to the result vector.

The time complexity of the code you have provided is O(n^2), because the main loop iterates through the array n times, and the inner loop iterates through the array from i + 1 to n - 1, which is a total of n - i - 1 times. The total number of iterations of the main loop and the inner loop is therefore n(n - i - 1), which is O(n^2).

The space complexity of the code is O(n), because the code uses a vector to store the triplets. The size of the vector is at most n, so the space complexity of the code is O(n).*/
// The space complexity of the program is O(n), because the program uses a vector to store the triplets. 
// The size of the vector is at most n, so the space complexity of the program is O(n).
/*
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int sum, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                int left = i + 1, right = n - 1;
                while (left < right) {
                    sum = nums[i] + nums[left] + nums[right];
                    if (sum == 0) {
                        result.push_back({nums[i], nums[left], nums[right]});
                        int low = left + 1;
                        while (low < right && nums[low] == nums[left]) {
                            low++;
                        }
                        left = low;
                        int high = right - 1;
                        while (high > left && nums[high] == nums[right]) {
                            high--;
                        }
                        right = high;
                    } else if (sum < 0) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
//This code is optimized by using the following techniques:

The quicksort algorithm is used to sort the array, which improves the time complexity of the code to O(n log n).
The code checks if the current element is equal to the previous element before it starts iterating through the array. This is done to prevent the code from adding duplicate triplets to the result vector.
The code uses a technique called two pointers to iterate through the array. This technique allows the code to quickly find the desired triplets without having to iterate through the entire array.
The time complexity of the optimized code is O(n log n), because the quicksort algorithm is used to sort the array. The space complexity of the code is O(n), because the code uses a vector to store the triplets. The size of the vector is at most n, so the space complexity of the code is O(n).
*/


