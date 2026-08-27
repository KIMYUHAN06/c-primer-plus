#include <stdio.h>
#include <string.h>

#define MAX_LENGTH    255

int main(void)
{
    char ch[MAX_LENGTH];
    
    scanf("%s", ch);
    
    int index;
    
    for (index = strlen(ch) - 1 ; index>=0; index--)
    {
        printf("%c", ch[index]);
    }
    
    printf("\n");
    
    return 0;
}
