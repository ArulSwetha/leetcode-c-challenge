// LeetCode 66: Plus One
// Approach: add from the last digit, carry on 9s
// Time: O(n) | Space: O(1)

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    int* result = (int*)calloc(*returnSize, sizeof(int));
    result[0] = 1;
    return result;
}
