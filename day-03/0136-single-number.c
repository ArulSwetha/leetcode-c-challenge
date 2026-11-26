// LeetCode 136: Single Number
// Approach: XOR all numbers, pairs cancel out
// Time: O(n) | Space: O(1)

int singleNumber(int* nums,int numsSize){
    int result=0;

    for(int i=0;i<numsSize;i++){
         result=result^nums[i];
    }
    return result;
}
