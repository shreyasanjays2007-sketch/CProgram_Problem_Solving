/* so the problem statement is m is a bigger amount given to shopkeeper,
n is the actual amount
c is thechange given to customer,
find the minimum number of notes used,
in a c program*/

#include <stdio.h>

int main(){
    int m,n,c,d,e,f,g,h,i,j,k,l,o,p,q,r,s,t,u,v;
    printf("Enter the amount m:");
    scanf("%d",&m);
    printf("Enter the amount n:");
    scanf("%d",&n);
    c=m-n;
    u=c%200;
    v=c/200;
    d=u%100;
    e=u/100;
    f=d%50;
    g=d/50;
    h=f%20;
    i=f/20;
    j=h%10;
    k=h/10;
    l=j%5;
    o=j/5;
    p=l%2;
    q=l/2;
    r=p%1;
    s=p/1;
    t=e+g+i+k+o+s+q+v;
    printf("The number of notes=%d",t);
    return 0;
}