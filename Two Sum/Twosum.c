# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

/**
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* indices = malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                indices[0] = i;
                indices[1] = j;
                *returnSize = 2;
                return indices;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}



int main() {
    int nums[4] = { 1,3,2,7 };
    int returnSize;
    int *indices = twoSum(nums, 4, 9, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d", indices[i]);
    }



    return 0;
}