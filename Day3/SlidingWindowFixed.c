// slidingwindowfixed - trained code

#include <stdio.h>

void windowSumMax(int arr[], int n, int k){
    int left=0;
    int right=k-1;
    int sum=0;
    for(int i=left;i<=right;i++){
        sum+=arr[i];
    }
    printf("%d\n",sum);
    while(right<n-1){
        sum=sum-arr[left];
        left++;
        right++;
        sum=sum+arr[right];
        printf("%d\n",sum);
    }

}
#define Max(a,b) (((a)>(b))?(a):(b))
int main(){
    int arr[] = {1, 2, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = arr[0] + arr[1] + arr[2];
    for(int i = 0; i <= n-k; i++){
        int current = arr[i] + arr[i+1] + arr[i+2];
        printf("%d\n", current);
        if(current > maxSum){
            maxSum = current;
        }
    }
    printf("Max sum of %d consecutive elements is: %d\n", k, maxSum);
    return 0;
}