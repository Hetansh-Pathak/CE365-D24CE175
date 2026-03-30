// ID : D24CE175
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, valid = 1;

    // Input the string
    scanf("%s", str);

    len = strlen(str);

    // String must be at least of length 2 to end with "bb"
    if (len < 2)
    {
        valid = 0;
    }
    else
    {
        // Check last two characters
        if (str[len - 1] != 'b' || str[len - 2] != 'b')
        {
            valid = 0;
        }

        // Check all previous characters are 'a'
        for (int i = 0; i < len - 2; i++)
        {
            if (str[i] != 'a')
            {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("Valid String");
    else
        printf("Invalid String");

    return 0;
}
