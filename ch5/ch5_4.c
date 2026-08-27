#include <stdio.h>

int main(void)
{
    int height;
    int feet;
    double inches;

    printf("센티미터 단위로 키를 입력하시오: ");
    scanf("%d", &height);

    while (height > 0)
    {
        feet = height / 30.48;
        inches = height / 2.54 - feet * 12;

        printf("%.1f센티미터는 %d피트, %.1f인치입니다.\n",
               (double)height, feet, inches);

        printf("센티미터 단위로 키를 입력하시오(끝내려면 <=0): ");
        scanf("%d", &height);
    }

    printf("안녕!");

    return 0;
}

