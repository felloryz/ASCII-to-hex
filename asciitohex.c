#include <stdio.h>
#include <string.h>

int StrToHex(char *string, unsigned int *hexArray);

int main(void)
{
    char str[80]; // ASCII string
    unsigned int hex[80]; // hex array 
    
    scanf("%s", str);

    int len = StrToHex(str, hex);

    for (int i = 0; i < len; i++)
    {
        printf("%02x  ", hex[i]);
    }
    
    return 0;
}

int StrToHex(char *string, unsigned int *hexArray)
{
    int len = strlen(string);
    if ((len & 1) != 0)
    {
        len++;
    }

    int i, j;
    for (i = 0, j = 0; j < len, i < (len >> 1) ; ++i, j+=2)
    {
        sscanf(&string[j], "%02x", &hexArray[i]);
    }

    return len >> 1;
}