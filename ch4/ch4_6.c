#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    char firstname[20];

    printf("성 제외한 이름을 입력하세요: ");
    scanf("%s", name);

    printf("성을 입력하세요: ");
    scanf("%s", firstname);

    printf("%s %s\n", firstname, name);

    printf("%*d %*d\n",
           (int)strlen(firstname), (int)strlen(firstname),
           (int)strlen(name), (int)strlen(name));
    printf("%*d %*d\n",
           -(int)strlen(firstname), (int)strlen(firstname),
           -(int)strlen(name), (int)strlen(name));

    return 0;
}
    
    
