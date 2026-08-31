#include <stdio.h>

#define VERBOSE    1
#define SILENT     0

char menu(void);
float scan_float(void);
float calculate(char ch, float first_num, float second_num);
void flush(int mode);

int main(void)
{
    char ch;
    float first_num, second_num;

    ch = menu();
    
    while (ch != 'q')
    {
        printf("첫 번째 수를 입력하시오:");
        
        first_num = scan_float();

        printf("두 번째 수를 입력하시오:");
        
        second_num = scan_float();
        
        calculate(ch, first_num, second_num);
        
        ch = menu();
    }
    
    printf("종료!\n");
    
      
    return 0;
}


char menu(void)
{
    char ch;
    
    do
    {
        printf("\n원하는 연산에 해당하는 문자를 선택하시오(끝내려면 q):\n");
        printf("a.add(덧셈)              s.subtract(뺄셈)\n");
        printf("m.multiply(곱셈)         d.divide(나눗셈)\n");
        printf("q.quit(종료)\n");

        ch = getchar();
        flush(SILENT);

    } while( ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q');

    return ch;
}


float scan_float(void)
{
    float num;

    while (scanf("%g", &num) != 1)
    {
        flush(VERBOSE);
        printf(": 수가 아닙니다\n");
        printf("2, 5, -1.78E8, 3과 같은 수를 입력하시오: ");

    }

    return num;
}

float calculate(char ch, float first_num, float second_num)
{
    float result;
    
    switch(ch)
    {
        case 'a':
            result = first_num + second_num;
            printf("%.1f + %.1f = %.1f", first_num, second_num, result);
            break;
        case 's':
            result = first_num - second_num;
            printf("%.1f - %.1f = %.1f", first_num, second_num, result);
            break;
        case 'm':
            result = first_num * second_num;
            printf("%.1f * %.1f = %.1f", first_num, second_num, result);
            break;
        case 'd':
             while (second_num == 0)
             {
                 printf("0이 아닌 다른 수를 입력하시오:");
                 second_num = scan_float();
             }
             
             result = first_num / second_num;
             printf("%.1f / %.1f = %.1f", first_num, second_num, result);
             break;
             
        default:
            printf("잘못된 연산 문자입니다.\n");
            result = 0;
            break;

    }

    return result;
}

void flush(int mode)
{
    int ch;

    while ((ch = getchar()) != '\n')
        if(mode == VERBOSE)
            putchar(ch);
        else
            ;
}



