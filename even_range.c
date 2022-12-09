#include<stdio.h>
int main()
{
    int i, r1, r2;
    printf("Enter Range: ");
    scanf("%d%d", &r1, &r2);
    printf("Even Numbers: ");
    for(i=r1; i<=r2; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}