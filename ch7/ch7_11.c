#include <stdio.h>
#define ARTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DELIVER_1 6.50 //5파운드 미만
#define DELIVER_2 14.00 //5파운드 이상 20파운드 미만
#define DELIVER_3 0.50 //20파운드 이상 파운드당 추가비용

int pound(void);

int main(void)
{
    int input;
    int artichokes_pound = 0;
    int beets_pound = 0;
    int carrots_pound = 0;
    int pound_sum;
    double sum=0;
    double result=0;
    
    char ch;
    

    while (1)
    {
        printf("원하는 야채를 선택하세요\n");
        printf("a. 아티초크 / b. 비트 / c. 당근 / q. 계산\n");
        
        scanf("%c",&ch);
        
        if (ch !='q')
        {
            input = pound();
            switch(ch)
            {
                case 'a':
                    artichokes_pound += input;
                    break;
                case 'b':
                    beets_pound += input;
                    break;
                case 'c':
                    carrots_pound += input;
                    break;
                default:
                    printf("a,b,c중 하나를 입력하세요\n");
                    break;
            }
        }
        else
            break;
    }
    
    
    pound_sum = artichokes_pound + beets_pound + carrots_pound;
    
    printf("각 야채별 파운드당 가격 - 아티초크 :%.2f, 비트 :%.2f, 당근 :%.2f\n",ARTICHOKES, BEETS, CARROTS);
    printf("주문 양 - 아티초크 :%d, 비트 :%d, 당근 :%d, 합계 :%.d\n", artichokes_pound, beets_pound, carrots_pound, pound_sum);
    printf("각 야채당 주문 비용 - 아티초크 :%.2f, 비트 :%.2f, 당근 :%.2f\n", artichokes_pound*ARTICHOKES, beets_pound*BEETS, carrots_pound*CARROTS);
    
    sum = artichokes_pound*ARTICHOKES + beets_pound*BEETS + carrots_pound*CARROTS;
    
    printf("총 구매 합산 :%.2f\n", sum);
    
    if (sum>=100)
    {
    printf("할인 가격 :%.2f\n",sum*0.05);
    sum*=0.95;
    }
    
    
    if (pound_sum < 5)
        result += DELIVER_1;
    else
    {
        result += DELIVER_2;
        
        if (pound_sum > 20)
            result += (pound_sum-20)*DELIVER_3;
    }
    
    printf("배송비 :%.2f\n", result);
    
    result += sum;
    
    printf("총 청구 금액:%.2f\n", result);
    
    
    
    
    return 0;
}


int pound(void)
{
    int input;
    
    printf("원하는 양을 파운드 단위로 입력하세요 :");
    scanf("%d", &input);
    getchar();
    
    return input;
    
}
