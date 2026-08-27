#include <stdio.h>
#include <ctype.h>         
#include <stdbool.h>    
#define STOP '|'
int main(void)
{
    char c;               
    char prev;          
    long n_chars = 0L;   
    int n_lines = 0;      
    int n_words = 0;     
    int p_lines = 0;      
    bool inword = false;   
    
    printf("분석할 영문 텍스트를 입력하시오(끝내려면 |):\n");
    prev = '\n';          
    while ((c = getchar()) != STOP)
    {
        n_chars++;        
        if (c == '\n')
            n_lines++;     
        if (!isspace(c) && !inword)
        {
            inword = true; 
            n_words++;    
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;       
    }
    
    if (prev != '\n')
        p_lines = 1;
    printf("문자 수 = %ld, 단어 수 = %d, 라인 수 = %d, ",
           n_chars, n_words, n_lines);
    printf("불완전 라인 수 = %d\n", p_lines);
    
    return 0;
}
