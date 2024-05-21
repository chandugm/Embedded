#include <stdio.h>

int main()
{
    int a;
    printf("Please enter 4 digit number : ");
    scanf("%d",&a);
    printf("%d\b\b\b   \n",a);
    printf("%d\b\b  \n",a);
    printf("%d\b \n",a);
    printf("%d\n",a);
    printf("%d\b\b\b   \b\b\b\b\n",a);
    printf("%d\b\b  \b\b\b\b \n",a);
    printf("%d\b \b\b\b\b  \n",a);
    printf("%d\b\b\b\b   \n",a);
    return 0;
}
