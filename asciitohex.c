#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80]; // ASCII string
    unsigned int num[80]; // hex array 
    
    scanf("%s", str);

    int len = strlen(str);
    if ((len & 1) != 0)
        len++;

    int i, j;
    for (i = 0, j = 0; j < len, i < (len >> 1) ; ++i, j+=2)
    {
        sscanf(&str[j], "%02x", &num[i]);
    }

    for (i = 0; i < (len >> 1); i++)
    {
        printf("%02x  ", num[i]);
    }
    
    return 0;
}