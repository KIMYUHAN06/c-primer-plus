#include <stdio.h>
#define CELIBACY    17850 //독신
#define BREADWINNER    23900 //가장
#define DUALINCOME_SUMMATION    29750 //맞벌이_합산
#define DUALINCOME_SEPERATE    14875 //맞벌이_별산

int tax_below(int income);
int tax_over(int income, int limit);

int main(void)
{
    char ch;
    int income;
    int limit;
    
    while (1)
    {
        printf("과세 구분을 선택해주세요\n");
        printf("독신은 a, 가장은 b, 맞벌이_합산은 c, 맞벌이_별산은 d\n");
        scanf(" %c", &ch);

        
        switch (ch)
        {
            case 'a':
                limit = CELIBACY;
                printf("연간 소득을 입력해주세요(단위:$)\n");
                scanf("%d", &income);
                if (income<=limit)
                {
                    tax_below(income);
                    printf("소득세는 %d$ 입니다.\n",tax_below(income));
                }
                else
                {
                     tax_over(income,ch);
                     printf("소득세는 %d$ 입니다.\n",tax_over(income, limit));
                }
                break;
                
                
            case 'b':
                limit = BREADWINNER;
                printf("연간 소득을 입력해주세요(단위:$)\n");
                scanf("%d", &income);
                if (income<=limit)
                {
                    tax_below(income);
                    printf("소득세는 %d$ 입니다.\n",tax_below(income));
                }
                else
                {
                     tax_over(income,ch);
                     printf("소득세는 %d$ 입니다.\n",tax_over(income, limit));
                }
                break;
                
                
            case 'c':
                limit = DUALINCOME_SUMMATION;
                printf("연간 소득을 입력해주세요(단위:$)\n");
                scanf("%d", &income);
                if (income<=limit)
                {
                    tax_below(income);
                    printf("소득세는 %d$ 입니다.\n",tax_below(income));
                }
                else
                {
                     tax_over(income,ch);
                     printf("소득세는 %d$ 입니다.\n",tax_over(income, limit));
                }
                break;
                
            case 'd':
                limit = DUALINCOME_SEPERATE;
                printf("연간 소득을 입력해주세요(단위:$)\n");
                scanf("%d", &income);
                if (income<=limit)
                {
                    tax_below(income);
                    printf("소득세는 %d$ 입니다.\n",tax_below(income));
                }
                else
                {
                     tax_over(income,ch);
                     printf("소득세는 %d$ 입니다.\n",tax_over(income, limit));
                }
                break;
                
                
            
        }
        
    }
    
    return 0;
}

int tax_below(int income)
{
    int tax;
    
    tax = income*0.15;
    
    return tax;
}

int tax_over(int income, int limit)
{
    int tax;
    
    tax = income*0.15+0.28*(income-limit);
    
    return tax;
}


