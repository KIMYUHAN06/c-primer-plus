#include <stdio.h>

int main(void)
{
    float quart;
    float value;
    
    printf("쿼트 단위로 물의 양을 입력하세요: \n");
    scanf("%f", &quart);
    
    value = (quart * 950.0) / (3.0e-23);
    
    printf("물 분자의 개수는 %f 개 입니다.\n", value);
    
    return 0;
    
}
