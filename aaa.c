
#include <stdio.h>

int main()
{
    int ret = 0;
    int ch = 0;

    char password[20] = {0};
    scanf("%s", password);
    printf("请确认密码Y/N");
    while (ch = getchar() != '\n')
    {
        ;
    }
    ret = getchar();
    if (ret == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("放弃确认\n");
    }
}