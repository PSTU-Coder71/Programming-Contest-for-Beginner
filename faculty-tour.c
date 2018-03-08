#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int q, sum=0;
    scanf("%d",&q);
    while (q>0){
        int i;
        scanf("%d",&i);
        sum = sum +i;
        q--;
    }
    printf("%d\n",sum);
    return 0;
}
