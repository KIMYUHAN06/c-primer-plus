#include <stdio.h>

int main(void)
{
    const float LITER_PER_GALLON = 3.785;
    const float KM_PER_MILE = 1.609;

    float mile;      
    float gallon;    
    float mpg;       // mile per gallon
    float l100km;    // 100km당 리

    printf("주행한 거리를 입력하세요(마일): ");
    scanf("%f", &mile);

    printf("소비한 휘발유의 양을 입력하세요(갤런): ");
    scanf("%f", &gallon);

    mpg = mile / gallon;

    l100km = (gallon * LITER_PER_GALLON) / (mile * KM_PER_MILE) * 100;

    printf("\n갤런당 마일 수: %.1f mpg\n", mpg);
    printf("100km당 연료 소비량: %.1f L\n", l100km);

    return 0;
}
