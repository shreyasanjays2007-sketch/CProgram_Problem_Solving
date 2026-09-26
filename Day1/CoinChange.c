// Leetcode 322-Coin Change
/*the problem statement is m is a bigger amount given to a shopkeeper,
n is the actual amount
c is the change given to customer,
find the minium number of notes used,
in a c program*/

#include <stdio.h>

int main(){
    int m,n,c,t=0;

    //store all your note denominations in an array from largest to smallest

    int notes[]={100,50,20,10,5,2,1};
    printf("Enter the amount m:");
    scanf("%d",&m);
    printf("Enter the amount n:");  
    scanf("%d",&n);
    c=m-n; //calculate total change to be given

    //loop through the 7 denominations in the notes array

    for(int i=0;i<7;i++){
        t=t+(c/notes[i]); //add the number of notes for the current denomination
        c=c%notes[i]; //update 'c' to just be the remaining remainder
    
    }
    printf("The number of notes=%d",t);
    return 0;
}
