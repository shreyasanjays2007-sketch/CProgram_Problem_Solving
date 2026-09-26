#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int longestWindow(int days[],int n,int k){
    int left=0;
    int right=0;
    int maxlen=0;
    for(right=0;right<n;right++){
        if(days[right]-days[left]>k){
            left++;
        }
        maxlen=fmax(right-left+1,maxlen);
    }
    return maxlen;
}
int main(){
    int days[]={1,3,5,7,9};
    int n=sizeof(days)/sizeof(int);
    int k=4;
    printf("%d\n",longestWindow(days,n,k));
}