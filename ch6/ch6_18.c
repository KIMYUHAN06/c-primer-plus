#include <stdio.h>

#define FRIEND_NUM    5
#define DUNBARS_NUMBER    150
#define OVER_TIMES    1


int main(void)
{
    int overflow_cnt = 0, flag_over = 1;
    int num = FRIEND_NUM;
    int week = 0;
    
    do
    {
        printf("%d번째 주 친구의 수는 %d명\n", week, num);
        week++;
        num = (num-week)*2;
        
        if (num > DUNBARS_NUMBER) overflow_cnt++;
        flag_over = (overflow_cnt > OVER_TIMES) ? 0 : 1;

    }while (flag_over);

    return 0;
}
