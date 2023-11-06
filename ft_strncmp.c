
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;

	i = 0;
	while (s1[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/* 
int main(){
    char s1[] = "Hello";
    char s2[] = "World";
    size_t n = 5;
    printf("%d", ft_strncmp(s1,s2,n));
} */