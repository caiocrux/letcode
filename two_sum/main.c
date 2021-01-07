/*
 * main.c
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 


 * 
 */


#include <stdio.h>
\
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(int argc, char **argv) {
	int nums [] = {2,7,11,15};

	size_t nums_size = NELEMS(nums);
	int target = 9;
	int result_size = 0;
	int k = 0;
	int *p;
	p = twoSum(nums,nums_size,target,&result_size);
	
	printf("Result is [");
	while ( k < result_size ) {
		//[%d , %d]\r\n",p[0],p[1])
		printf(" %d ", p[k]);
		k++;
	}
	printf("]\r\n");
	return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0;
    int j=0;
    static int result[2] = {0,0};
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if ( (nums[i]+nums[j]) == target ){
				//printf("num[i] == %d  and num[j] == %d\r\n",i,j);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return NULL;
}
