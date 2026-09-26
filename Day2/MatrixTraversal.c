//Matrix - input and output traversal

#include <stdio.h>
int main(){
    int m,n,i,j;
    
    printf("Enter numbers of rows and columns:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter rows and columns:\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){ 
            
            scanf("%d\n",&a[i][j]);
        }
    }
printf("Printing them\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}