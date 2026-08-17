#include <stdio.h>

void sum(void);

int main(void);
{
    int snum, bnum;
    int squaesum = 0;
    
    printf("정수로 상한과 하한을 입력하시오:");
    sum();
    while (snum < bnum)
    {
        printf("다음 하한과 상한을 입력하시오:");
        sum();
        squaesum = 0;
    }
    
    
    printf("종료!")
    
    return 0;
}

void sum(void);
{
    scanf("%d %d", &snum, &bnum);
    
    printf("\n");
    
    int n = snum;
    
    for (bnum>=n; n++)
    {
        printf("%d \n",n);
        squaresum += n*n;
    }
    
    printf("%d부터 %d까지, 제곱들의 합은 %d", snum*snum, bnum*bnum, squaresum);
}
