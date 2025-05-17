#include <stdio.h>
int main(){
    int x,r = 0;
    scanf("%d",&x);
    for(int t =x;t;t/= 10)r = r * 10 + t % 10;
    printf(x == r ? "palindrome":"not");
}