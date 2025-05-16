/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define HASH_SIZE 10000

// Hash table entry
typedef struct {
    int key;
    int value;
    int is_occupied;
} HashEntry;

int hash(int key) {
    return abs(key) % HASH_SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashEntry* table = calloc(HASH_SIZE, sizeof(HashEntry));
    *returnSize = 2;

    int* result = malloc(sizeof(int) * 2);

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int h = hash(complement);

        // Search complement in hash table
        while (table[h].is_occupied) {
            if (table[h].key == complement) {
                result[0] = table[h].value;
                result[1] = i;
                free(table);
                return result;
            }
            h = (h + 1) % HASH_SIZE;
        }

        // Insert current number
        h = hash(nums[i]);
        while (table[h].is_occupied) {
            h = (h + 1) % HASH_SIZE;
        }
        table[h].is_occupied = 1;
        table[h].key = nums[i];
        table[h].value = i;
    }

    // This should never be reached if input guarantees one solution
    free(result);
    *returnSize = 0;
    return NULL;
}
