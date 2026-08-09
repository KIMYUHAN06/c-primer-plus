#include <stdio.h>


void Temperature( double farenheit);

int main(void)
{
    
    double farenheit;
    
    printf("화씨온도를 입력하세요: ");
    
    while (scanf("%lf", &farenheit)==1)
    {
        Temperature(farenheit);
        printf("\n 화씨온도를 입력하세요:");
    }
    return 0;
}



void Temperature(double farenheit)
{
    const double SCALE = 5.0 / 9.0;
    const double FREEZING = 32.0;
    const double ABSOLUTE = 273.16;
    
    double celsius;
    double kelvin;
    
    celsius = SCALE*(farenheit-FREEZING);
    kelvin = celsius + ABSOLUTE;
    
    printf("화씨온도: %.2f\n", farenheit);
    printf("섭씨온도: %.2f\n", celsius);
    printf("절대온도: %.2f\n", kelvin);
}
