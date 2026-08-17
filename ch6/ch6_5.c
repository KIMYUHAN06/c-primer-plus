#include <stdio.h>

void printspace(int n);
#define LINENUM 5

int main(void)
{
    char ch;
    int n;
    int j = LINENUM;
    
    for (n=LINENUM; n>0; n--)
    {
        printspace(n-1);
        ch = 'A';
        while (j>=n)
        {
            printf("%c", ch);
            j--;
            ch++;
        }
        ch--;
        j++;
        while (j<LINENUM)
        {
            ch--;
            printf("%c", ch);
            j++;
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
