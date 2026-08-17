#include <stdio.h>

#define FNUM 5
#define DUNBARS_NUMBER 150

int main(void)
{
    int num = FNUM;
    int week = 0;
    
    do
    {
        printf("%d번째 주 친구의 수는 %d명\n", week, num);
        week++;
        num = (num-week)*2;
        
    }while (num<DUNBARS_NUMBER);
    
    printf("%d번째 주 친구의 수는 %d명\n", week, num);
    
    return 0;
}
