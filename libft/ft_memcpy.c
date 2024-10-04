#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *des = (unsigned char *)dest;
    unsigned char *cpy = (unsigned char *)src;

    size_t i = 0;

    while(i < n)
    {
        des[i] = cpy[i];
        i++;
    }

    return (n ? (void *)des : NULL);
}

// int main() {
//     // 1. 기본 테스트 (일반적인 경우)
//     char src1[] = "Hello, World!";
//     char dest1_ft[20];
//     char dest1_memcpy[20];
    
//     ft_memcpy(dest1_ft, src1, strlen(src1) + 1);  // ft_memcpy 사용
//     memcpy(dest1_memcpy, src1, strlen(src1) + 1); // memcpy 사용
    
//     // ft_memcpy 결과와 memcpy 결과 비교
//     assert(memcmp(dest1_ft, dest1_memcpy, strlen(src1) + 1) == 0);
//     printf("Test 1 passed!\n");

//     // 2. 빈 문자열 복사 (크기 0)
//     char src2[] = "";
//     char dest2_ft[10];
//     char dest2_memcpy[10];
    
//     ft_memcpy(dest2_ft, src2, strlen(src2) + 1);
//     memcpy(dest2_memcpy, src2, strlen(src2) + 1);
    
//     assert(memcmp(dest2_ft, dest2_memcpy, strlen(src2) + 1) == 0);
//     printf("Test 2 passed!\n");

//     // 3. n이 0인 경우 (아무것도 복사되지 않음)
//     char src3[] = "Test";
//     char dest3_ft[10] = "Initial";
//     char dest3_memcpy[10] = "Initial";
    
//     ft_memcpy(dest3_ft, src3, 0);  // ft_memcpy 사용, 0바이트 복사
//     memcpy(dest3_memcpy, src3, 0); // memcpy 사용, 0바이트 복사
    
//     assert(memcmp(dest3_ft, dest3_memcpy, sizeof(dest3_ft)) == 0);
//     printf("Test 3 passed!\n");

//     // 5. 큰 데이터 복사 (동적 할당을 통한 큰 메모리 복사)
//     size_t large_size = 1000000;
//     char *src5 = (char*)malloc(large_size);
//     char *dest5_ft = (char*)malloc(large_size);
//     char *dest5_memcpy = (char*)malloc(large_size);
    
//     memset(src5, 'A', large_size - 1);
//     src5[large_size - 1] = '\0';
    
//     ft_memcpy(dest5_ft, src5, large_size);
//     memcpy(dest5_memcpy, src5, large_size);
    
//     assert(memcmp(dest5_ft, dest5_memcpy, large_size) == 0);
//     printf("Test 5 passed!\n");

//     free(src5);
//     free(dest5_ft);
//     free(dest5_memcpy);

//     return 0;
// }