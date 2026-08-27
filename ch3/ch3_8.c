#include <stdio.h>

int main(void)
{
    /*1pint는 2cups
     1cups는 8ounces는 1/2 pint
     1ounces는 2tablespoons는 1/16pint
     1tablespoons는 3teaspoons는 1/32pint
     1teaspoons는 1/96pint */
     
     float pints;
     float cups;
     float ounces;
     float tablespoons;
     float teaspoons;
     
     printf("pints를 입력하세요\n");
     scanf("%f", &pints);
     cups = pints*2;
     ounces = pints*16;
     tablespoons = pints*32;
     teaspoons = pints*96;
     
     printf("%f pints는 %f cups, %f ounces, %f tablespoons, %f teaspoons와 같다.\n", pints, cups, ounces, tablespoons, teaspoons);
     
     return 0;
}
