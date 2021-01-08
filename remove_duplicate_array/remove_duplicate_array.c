/*
 * remove_duplicate_array.c
 * 
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 * 
 * 
 */
#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
int removeDuplicates(int* nums, int numsSize);

int main(int argc, char **argv) {
	// nums is passed in by reference. (i.e., without making a copy)
	int nums []= {0,0,1,1,1,2,2,3,3,4};
	int size_of_array = NELEMS(nums);
	int len = removeDuplicates(nums,size_of_array);
	// any modification to nums in your function would be known by the caller.
	// using the length returned by your function, it prints the first len elements.
	for (int i = 0; i < len; i++) {
		printf("num[%d] == %d\r\n",i,nums[i]);
	}
	return 0;
}

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) {
        return 0;
    }
    int i = 0;
    int ref = 0;
    nums[ref] = nums[0];
    ref =1 ;
    for(i = 0;  i < numsSize-1; i++){
        if(!(nums[i] == nums[i+1])) {
            nums[ref] = nums[i+1];
            ref++;
        }
    }
    return ref;
}
