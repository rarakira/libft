#include "libft.h"
#include <string.h>
#include <stdio.h>

int	len_len(char *s){
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
int main(){
	char *s = "the cake is a lie !\0I'm hidden lol\r\n";
	char s2[100] = "there is no stars in the sky";
	int max = len_len(s) + 4;
	printf("strlen_len %d + %d + %d\n", len_len(s), len_len(s2), max);
	printf("strlen_len %zu + %zu + %d\n", ft_strlen(s), ft_strlen(s2), max);
	printf("strlcat %zu + %lu\n", ft_strlcat(s2, s, max), strlcat(s2, s, max));
}
