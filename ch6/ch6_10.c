#include <stdio.h>

void sum(int snum, int bnum);

int main(void)
{
    int snum, bnum;

    printf("정수로 하한과 상한을 입력하시오: ");
    scanf("%d %d", &snum, &bnum);

    while (snum < bnum)
    {
        sum(snum, bnum);

        printf("\n다음 하한과 상한을 입력하시오: ");
        scanf("%d %d", &snum, &bnum);
    }

    printf("종료!\n");

    return 0;
}

void sum(int snum, int bnum)
{
    int squaresum = 0;
    int n;

    for (n = snum; n <= bnum; n++)
    {
        squaresum += n*n;
    }

    printf("%d부터 %d까지, 제곱들의 합은 %d",
           snum*snum, bnum*bnum, squaresum);
}
