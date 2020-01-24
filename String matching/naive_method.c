#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *txt = (char *)malloc(sizeof(char) * 1000000);
    char *ptn = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",txt);
    scanf("%s",ptn);

    int i = 0;
    int j = 0;
    int n = strlen(txt);
    int m = strlen(ptn);

    for(i = 0;i < n - m + 1;i++)
    {
        for(j = 0;j < m;j++)
        {
            if(txt[i + j] != ptn[j])
            {
                break;
            }
        }
        if(j == m)
        {
            printf("There is a match at index %d.\n",i);
        }
    }
    return 0;
}
