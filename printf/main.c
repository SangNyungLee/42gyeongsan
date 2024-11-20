#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", -0);
    ft_printf("%d\n", -0);
}