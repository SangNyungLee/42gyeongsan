#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    char *str = (char *)s;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     char str[] = "BlockDMask";
//     char *ptr = ft_strchr(str, 'M');
//     if(ptr)
//     {
//         printf("%c, %p\n", *ptr, (void *)ptr);
//     }
//     else
//     {
//         printf("Character not found\n");
//     }
//     return 0;
// }