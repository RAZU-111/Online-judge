#include<stdio.h>
int main()
{
    int T;
    char n [101];
    scanf("%d",&T);
    while (T--) {

    scanf("%s", &n);
    int x = strlen(n);
    if(n[x-1]%2==0)
     printf("even\n");
     else
        printf("odd\n"); 
    }
    
    return 0;
}