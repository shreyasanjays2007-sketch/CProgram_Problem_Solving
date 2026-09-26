//Jump game-Leetcode 55

#include <stdio.h>
#include <stdbool.h>

//functions
bool can_ball_reach(int nume[],int n){
    int max_reach=0;
    for(int i=0;i<n;i++){
        if(i>max_reach){
            return true;
        }
    }
    return true;
}
int minimum_jumps(int nums[],int n){
    if(n<=1){
        return 0;
    }
    int jumps=0;
    int current_end=0;
    int farthest=0;
    for(int i=0;i<n-1;i++){
        if(i>farthest){
            return -1; //destination cannot be reached
        }
        if(i+nums[i]>farthest){
            farthest=i+nums[i];
        }
        if(i==current_end){
            jumps++;
            current_end=farthest;if(current_end>=n-1){
                return jumps;
            }
            printf("Number of jumps=%d\n",jumps);
        }
    }
    return -1;
}
int main(){
    int nums[]={2,3,4,1,1,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d\n",can_ball_reach(nums,n));
    printf("Minimum jumps=%d\n",minimum_jumps(nums,n));
}