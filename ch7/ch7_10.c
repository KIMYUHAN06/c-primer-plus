#include <stdio.h>
#define CELIBACY    17850 //독신
#define BREADWINNER    23900 //가장
#define DUALINCOME_SUMMATION    29750 //맞벌이_합산
#define DUALINCOME_SEPERATE    14875 //맞벌이_별산

double tax_below(double income);
double tax_over(double income, int limit);

int main(void)
{
    char ch;
    double income;
    int limit;
    
    while (1)
    {
        printf("과세 구분을 선택해주세요\n");
        printf("독신은 a, 가장은 b, 맞벌이_합산은 c, 맞벌이_별산은 d\n");
        scanf("%c", &ch);

        switch (ch)
        {
            case 'a':
                limit = CELIBACY;
                break;
                
            case 'b':
                limit = BREADWINNER;
                break;
                
            case 'c':
                limit = DUALINCOME_SUMMATION;
                break;
                
            case 'd':
                limit = DUALINCOME_SEPERATE;
                break;
            
            default:
                printf("다시 입력해 주세요\n");
                getchar();
                continue;

        }
        printf("연간 소득을 입력해주세요(단위:$)\n");
        scanf("%lf", &income);
        printf("income: %.2f, limit: %d\n", income, limit);
        if (income<=limit)
        {
            printf("소득세는 %.2f$ 입니다.\n",tax_below(income));
        }
        else
        {
            printf("소득세는 %.2f$ 입니다.\n",tax_over(income, limit));
        }
    }
    
    return 0;
}

double tax_below(double income)
{
    double tax;
    
    tax = income*0.15;
    
    return tax;
}

double tax_over(double income, int limit)
{
    double tax;
    
    tax = income*0.15+0.28*(income-limit);
    
    return tax;
}


