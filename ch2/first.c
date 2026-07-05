#include <stdio.h>

#ifdef KYH
#define NUMBER    100
#else
#define NUMBER    1
#endif

int main(void)
/*
void main(void)
 */
{
    int num;
    
    num = NUMBER;

    printf("나는 단순한");
    printf("컴퓨터이다.\n");
    printf("나는 최고를 원하기 때문에 %d이라는 수를 좋아한다.\n",num);

    return 0;
}
