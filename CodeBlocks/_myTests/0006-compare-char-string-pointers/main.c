#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int v;

    char *str1 = "hello";
    char *str2 = "world";

    v = strcmp(str1, "hello");

    if (v < 0)
        printf("'%s' is less than '%s'.\n", str1, str2);
    else if (v == 0)
        printf("'%s' equals '%s'.\n", str1, str2);
    else if (v > 0)
        printf("'%s' is greater than '%s'.\n", str1, str2);

    return 0;
}
