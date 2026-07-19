#include <stdio.h>
int main(void)
{
    printf("int형의 크기: %zd바이트\n", sizeof(int));
    printf("char형의 크기: %zd바이트\n", sizeof(char));
    printf("long형의 크기: %zd바이트\n", sizeof(long));
    printf("longlong형의 크기: %zd바이트\n", sizeof(longlong));
    printf("double형의 크기: %zd바이트\n", sizeof(double));
    printf("doubledouble형의 크기: %zd바이트\n", sizeof(doubledouble));
    
    return 0;   
}   
