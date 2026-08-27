#include <stdio.h>
#define PERIOD '.'
int main(void)
{
    char ch;
    int charcount = 0;
    
    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("따옴표는 빼고, 문자 %d개가 들어 있습니다.\n", charcount);
 
    return 0;
}
