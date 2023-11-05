#include <string.h>
#include <stdio.h>

int	ft_memcmp(char	*s1, const char *s2, size_t n)
{
	size_t  i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int main(){
    char s1[6] = "Hello";
    char s2[6] = "Hello";
    size_t n = 7;
    printf("%d\n", ft_memcmp(s1,s2,n));
}
/* #include <stdio.h>
#include <string.h>

int main() {
    char s1[5] = "ddddz";
    char s2[5] = "ddddz";
    size_t n = 11;
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;

    printf("Memory contents of s1:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", p1[i]);
    }
    printf("\n");

    printf("Memory contents of s2:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", p2[i]);
    }
    printf("\n");

    printf("Result of ft_memcmp: %d\n", memcmp(s1, s2, n));
}
 */