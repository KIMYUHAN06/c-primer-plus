/* nogood.c -- 몇 개의 에러가 있는 프로그램 */

#include <stdio.h>

#define TRUE     1
#define FALSE    0

int main(void)
{
    int flag;
    int n, n2, n3;
    int count, sum;

// 이 프로그램은 몇 개의 에러를 가지고 있었다. 그런데 지금은 다 고침
    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d, n의 제곱 = %d, n의 세제곱 = %d\n", n, n2, n3);

    //printf("\n디버깅을 위한 break point%d\n",1);
    
    flag = TRUE;
    count = 0, sum = 0;

    //printf("\n디버깅을 위한 break point%d\n",2);

    while(flag)
    {
        sum = sum + count++;
        if (count > 10)
            flag = FALSE;
        //printf("\n디버깅을 위한 break point%d : count 변수 - %d : sum 변수 - %d\n",3, count, sum);

    }

    //printf("\n디버깅을 위한 break point%d\n",4);


    printf("\nTotal Sum is %d\n", sum);
    
    return 0;
}
