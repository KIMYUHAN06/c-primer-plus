#include <stdio.h>

void printspace(int n);

int main(void)
{
    char ch;
    int n;
    int j;
    int linenum;
    
    
    scanf("%c", &ch);
    
    linenum = (ch - 'A')+1;
        
    j = linenum;
    
    for (n=linenum; n>0; n--)
    {
        printspace(n-1);
        ch = 'A';
        printf("%c", ch);
        while (j>n)
        {
            j--;
            ch++;
            printf("%c", ch);
        }
        while (j<linenum)
        {
            j++;
            ch--;
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

void printspace(int n)
{
    for (int i = 0; i < n; i++)
        printf(" ");
}
