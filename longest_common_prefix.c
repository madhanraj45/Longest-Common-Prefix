#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    for (int i = 0;; i++)
    {
        char ch = strs[0][i];

        if (ch == '\0')
            return strs[0];

        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != ch)
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
}

int main()
{
    // Modifiable strings
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    // Array of pointers to the strings
    char *strs[] = {
        str1,
        str2,
        str3
    };

    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char *result = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}