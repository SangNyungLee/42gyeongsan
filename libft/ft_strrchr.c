#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    char *start = (char *)s;
    while(*s++);
    while(--s != start && *s != (char)c);
    if (*s == (char) c)
        return (char *)s;
    return (NULL);
}

int main(void)
{
    char str[] = "BlockDMask";
    char *ptr = ft_strrchr(str, 'M');
    if(ptr)
    {
        printf("%c, %p\n", *ptr, (void *)ptr);
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}