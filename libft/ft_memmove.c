// #include <stdio.h>

// void *ft_memmove(void* destination, const void* source, size_t num)
// {
// 	char *dest = destination;
// 	char *src = (char *)source;
// 	char save[num];
// 	size_t i = 0;

// 	while(i < num)
// 	{
// 		save[i] = src[i];
// 		i++;
// 	}

// 	i = 0;
// 	while(i < num)
// 	{
// 		dest[i] = save[i];
// 		i++;
// 	}
// }

// // int main()
// // {
// //     char str[] = "memmove can be very useful......";
// //     ft_memmove(str + 20, str + 15, 11);
// //     puts(str);
// //     return (0);
// // }