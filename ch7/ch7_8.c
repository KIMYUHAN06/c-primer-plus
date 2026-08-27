#include <stdio.h>
#include "income.h"

int main(void)
{
    int choice = 0;
    double minimumwage = 0;
    int work_time;
    double gross_pay; // 총소득
    double taxes; // 세금
    double net_pay; //총소득
    
    
    while ( (choice < 5) || (minimumwage == 0) )
    {
        printf("**********************************************************\n");
        printf("자신의 기본급에 해당하는 번호를 선택하시오(끝내려면 5번을 선택하시오) :\n");
        printf("1) 시간당 $8.75                  2) 시간당 $9.33\n");
        printf("3) 시간당 $10.00                 4) 시간당 $11.20\n");
        printf("5) 종료\n");
        printf("**********************************************************\n");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                minimumwage = MINIMUM_WAGE_1;
                break;
            case 2:
                minimumwage = MINIMUM_WAGE_2;
                break;
            case 3:
                minimumwage = MINIMUM_WAGE_3;
                break;
            case 4:
                minimumwage = MINIMUM_WAGE_4;
                break;
            default:
                break;
        }
    }
    
    
    printf("일주일동안 노동한 시간을 입력하시오:");
    scanf("%d", &work_time);
    if (work_time<=40)
        gross_pay = work_time*minimumwage;
    else
        gross_pay = 40*minimumwage+(work_time-40)*minimumwage*OVERTIME_PAY;
        
    if (gross_pay<=300)
        taxes=gross_pay*INCOME_TAX_RATE_FIRST_300;
    else if (gross_pay>300 && gross_pay<=450)
        taxes=300*INCOME_TAX_RATE_FIRST_300+(gross_pay-300)*INCOME_TAX_RATE_NEXT_150;
    else
        taxes=300*INCOME_TAX_RATE_FIRST_300+150*INCOME_TAX_RATE_NEXT_150+(gross_pay-450)*INCOME_TAX_RATE_ELSE;
    
    net_pay = gross_pay-taxes;
    
    printf("총소득 : %.2f$, 세금 : %.2f$, 순소득 : %.2f$\n", gross_pay, taxes, net_pay);
    
    return 0;
}
