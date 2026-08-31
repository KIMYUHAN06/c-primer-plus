#include <stdio.h>

int main(void)
{
    int low = 1;
    int high = 100;
    int guess;
    char answer;

    printf("1에서 100까지 범위에 있는 한 정수를 생각하시오.\n");
    printf("내 추측이 맞으면 y를 입력하고,\n");
    printf("내 추측보다 크면 b, 작으면 s을 입력하시오.\n");

    while (low < high)
    {
        guess = (low + high) / 2;

        printf("당신이 생각한 수가 %d입니까? (y/b/s): ", guess);
        scanf(" %c", &answer);

        if (answer == 'y')
        {
            printf("그것 봐요, 내가 맞출 수 있다고 했잖아요!\n");
            break;
        }
        else if (answer == 'b')
        {
            low = guess;
        }
        else if (answer == 's')
        {
            high = guess;
        }
        else
        {
            printf("y, b, s 중 하나를 입력하세요.\n");
        }
    }

    if (low == high)
        printf("거짓말하지 마세요\n");
        
    return 0;
}
