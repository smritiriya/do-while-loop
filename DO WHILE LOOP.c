#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    do{
        printf("enter a no");
        scanf("%d",&num);
        sum+=num;
    }while(num!=0);
    printf("sum of all no is %d",sum);
    return 0;
}
