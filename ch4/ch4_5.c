#include <stdio.h>

int main(void)
{
    // 1 bite = 8 bit
    
    float dv; //download velocity
    float fs; //file scale
    
    printf("다운로드 속도가 초당 몇 메가비트인가요? :");
    scanf("%f", &dv);
    
    printf("파일 크기가 몇 메가바이트인가요? :");
    scanf("%f", &fs);
    
    printf("초당 %.2f메가비트, %.2f 메가바이트 파일을"
           "%.2f초에 다운로드한다.\n", dv, fs, fs*8/dv);
    return 0;
}
