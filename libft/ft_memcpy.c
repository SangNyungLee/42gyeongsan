#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *des = dest;
    char *cpy = (char *)src;

    size_t i = 0;

    while(i < n)
    {
        des[i] = cpy[i];
        i++;
    }
}

// int main()
// {
//     char str1[] = "SampleString";
//     char str2[40];
//     char str3[40];

//     ft_memcpy(str2, str1, strlen(str1) + 1);
//     ft_memcpy(str3, "copy Successful", 16);
//     printf("str1 : %s \n str2 : %s \n str3 : %s \n", str1, str2, str3);
//     return (0);
// }