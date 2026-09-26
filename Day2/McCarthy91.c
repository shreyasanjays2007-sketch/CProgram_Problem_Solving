//McCarthy 91 function

#include <stdio.h>
 //steps

 int mcCarthy91(int n){
    if(n>100){
        return n-10;
    }
    else{
        return mcCarthy91(mcCarthy91(n+11));
    }
 }
 int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int result=mcCarthy91(n);
    printf("McCarthy 91(%d) = %d\n",n,result);
    return 0;
 }