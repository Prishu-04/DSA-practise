/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define SIZE 10000
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;
Node* hashTable[SIZE];
int* twoSum(int* nums, int numsSize, int target,int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int foundIndex = search(complement);
        if (foundIndex != -1) {
            result[0] = foundIndex;
            result[1] = i;
            return result;
        }
        insert(nums[i], i);
    }

    return result; // LeetCode guarantees one solution
}