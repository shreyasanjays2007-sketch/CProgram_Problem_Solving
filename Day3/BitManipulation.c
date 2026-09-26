//swap using xor gate bit manipulation

#include <stdio.h>
int main(){
    int a=5,b=4;
    a=a^b;
    b=a^b;
    a=a^b;
}