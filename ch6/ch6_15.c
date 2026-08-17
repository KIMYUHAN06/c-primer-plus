#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[254];
    
    scanf("%s", ch);
    
    int size;
    
    for (size = strlen(ch) - 1 ; size>=0; size--)
    {
        printf("%c", ch[size]);
    }
    
    printf("\n");
    
    return 0;
}
