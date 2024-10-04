#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n) {
  while (n && (*(unsigned char *) s != (unsigned char) c)) {
    s = (unsigned char *) s + 1;
    n--;
  }

  return (n ? (void *) s : NULL);
}
