#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num=0;

    scanf("%d",&num);
    for(i=1;i<11;i++)
        printf("%d x %d = %d\n",num, i, num*i);
    system("pause");
}
