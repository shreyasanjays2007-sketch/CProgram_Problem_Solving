//Leetcode problem 875. Koko Eating Bananas
/*Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. 
The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. 
If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.*/

#include <stdio.h>
int minSpeed(int bunches[], int n, int h){
    int left=1;
    int right=0;
    for(int i=0;i<n;i++){
        if(bunches[i]>right){
            right=bunches[i];
        }
    }
    int speed=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        int totalhours=0;
        for(int i=0;i<n;i++){
            totalhours+=(bunches[i]+mid-1)/mid;
        }
        if(totalhours<=h){
            speed=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return speed;
}
int main(){
    int bunches[]={3,6,7,11};
    int h=8;
    printf("%d\n",minSpeed(bunches,4,h));
    return 0;
}