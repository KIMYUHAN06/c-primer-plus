#include <stdio.h>
#include <stdlib.h>  
int main(int argc, char *argv[])
{
    int ch;
    int num_of_char = 0;
    FILE *fp;
    char *file_name, fname[50];     
    
    if (argc < 2)
    {
        printf("파일 이름을 입력하시오: ");
        scanf("%s", fname);
        file_name = fname;
    }
    else
        file_name = argv[1];

    fp = fopen(file_name, "r"); 
    if (fp == NULL)        
    {
        printf("파일을 여는데 실패했다. 안녕!\n");
        exit(1);           
    }
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
        num_of_char++;
    }
    fclose(fp);
    
    printf("\n\n\n=========================================================\n");
    printf("%s 파일의 총 글자수는 %d자 입니다.", file_name, num_of_char);
    printf("\n=========================================================\n");
    
    return 0;
}
