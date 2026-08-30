#include <stdio.h>

int main(void)
{
    int ch;
    int word = 0;
    int text = 0;
    int inword = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inword = 0;
        }
        else
        {
            text++;

            if (!inword)
            {
                word++;
                inword = 1;
            }
        }
    }

    if (word > 0)
        printf("\n평균 글자 수: %.2f\n", (double)text / word);
    else
        printf("단어 없음.\n");

    return 0;
}
