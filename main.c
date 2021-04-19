#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t n = 20;
	char *ptr = malloc(n);
	char *ptr_memset;
	char *ptr_memcpy;

	/* ft_memset */

	int m = 77;

	printf("\nft_memset:\n");
	ptr_memset = ft_memset(ptr, m, n);
	printf("M: %c\n", ptr_memset[0]);
	for (size_t i = 0; i < n; i++)
	{
		if (ptr_memset[i] != m)
		{
			printf("Failed\n");
			break ;
		}
	}
	printf("Success\n");

	/* ft_bzero */

	printf("\nft_bzero:\n");
	ft_bzero(ptr, n);
	for (size_t i = 0; i < n; i++)
	{
		if (ptr[i] != '\0')
		{
			printf("Failed\n");
			break ;
		}
	}
	printf("Success\n");

	/* ft_memcpy */

	char *hello = "Hello world!";

	printf("\nft_memcpy:\n");
	ptr_memcpy = ft_memcpy(ptr, hello, 5);
	printf("%s\n", ptr_memcpy);
	printf("Success\n");
	free(ptr);

	/* ft_isalpha */
	printf("\nft_isalpha:\n");
	printf("Nope: %d, Yep: %d\n", ft_isalpha(5), ft_isalpha(103));

	return (0);
}
