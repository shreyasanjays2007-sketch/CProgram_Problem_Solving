//Leetcode 136 - Single number

#include <stdio.h>

int singleNumber(const int nums[], int length) {
	int result = 0;
	for (int i = 0; i < length; i++) {
		result ^= nums[i];
	}
	return result;
}

int main(void) {
	int nums[] = {4, 1, 2, 1, 2};
	int length = sizeof(nums) / sizeof(nums[0]);

	printf("%d\n", singleNumber(nums, length));
	return 0;
}