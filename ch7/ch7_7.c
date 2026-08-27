#include <stdio.h>
#include "income.h"

int main(void)
{
    int work_time;
    double gross_pay; // 총소득
    double taxes; // 세금
    double net_pay; //순소득
    
    
    printf("일주일동안 노동한 시간을 입력하시오:");
    scanf("%d", &work_time);
    if (work_time<=40)
        gross_pay = work_time*MINIMUM_WAGE_3;
    else
        gross_pay = 40*MINIMUM_WAGE_3+(work_time-40)*MINIMUM_WAGE_3*OVERTIME_PAY;
        
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
