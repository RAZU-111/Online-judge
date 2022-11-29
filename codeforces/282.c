#include<stdio.h>
int main()
{
    int t,x=0;
    scanf("%d",&t);
    while (t--)
    {
        char arr[150];
        scanf("%s",arr);
       if(arr[1]=='+')
           x++;
       else
          x--;
             
    }
       printf("%d\n",x);

      return 0;
}