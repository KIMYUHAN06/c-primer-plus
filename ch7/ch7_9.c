#include <stdio.h>

int divide(int divide_num);

int main(void)
{
    int input_num;
    int divide_num;
    int flag;

    while (scanf("%d", &input_num) == 1)
    {
        for (divide_num = 2; divide_num <= input_num; divide_num++)
        {
            flag = divide(divide_num);

            if (flag == 1)
            {
                printf("%d ", divide_num);
            }
        }

        printf("\n");
    }

    return 0;
}

int divide(int divide_num)
{
    int i;

    for (i = 2; i < divide_num; i++)
    {
        if (divide_num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
