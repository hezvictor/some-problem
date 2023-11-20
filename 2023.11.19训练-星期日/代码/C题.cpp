#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i, num = 0;
    char a[11];
    gets(a);
    char max = '\0';
    int len = strlen(a);
    for (i = 0;i <= len - 1;i++)
    {
        if (a[i] > max) max = a[i];
    }
    for (i = 0;i <= len - 1;i++)
    {
        if (a[i] == max)
            printf("%c", max);
    }
    return 0;
}

