#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    if( (int) (str[0])>=65 && (int) (str[0])<=90)
    {
        printf("%s",str);

    }
    else
    {
        str[0] = (int) (str[0]) -32;
        printf("%s",str);
    }
    return 0;
}