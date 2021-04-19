#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ft_memmove */

void	test_memmove()
{
	char d[] = "1234567890";
	char s[] = "abcdefghij";
	printf("\n* memmove *\nOld: %s\n", d);
	memmove(d, s, 5);
	printf("New: %s\n", d);

	char ft_d[] = "1234567890";
	char ft_s[] = "abcdefghij";
	printf("\n* ft_memmove *\nOld: %s\n", ft_d);
	ft_memmove(ft_d, ft_s, 5);
	printf("New: %s\n", ft_d);

	printf("\n* memmove *\nOld: %s\n", d);
	memmove(d, (d + 3), 5);
	printf("New: %s\n", d);

	printf("\n* ft_memmove *\nOld: %s\n", ft_d);
	ft_memmove(ft_d, (ft_d + 3), 5);
	printf("New: %s\n", ft_d);

	printf("\n* memmove *\nOld: %s\n", s);
	memmove((s + 3), s, 5);
	printf("New: %s\n", s);

	printf("\n* ft_memmove *\nOld: %s\n", ft_s);
	ft_memmove((ft_s + 3), ft_s, 5);
	printf("New: %s\n", ft_s);
}
/* ft_memccpy */

void	test_memccpy()
{
	/*
	int m = 77;
	size_t n = 20;
	char *ptr = malloc(n);
	int stop = 111;
	char *ptr_memccpy;
	char *hello = "Hello world!";

	printf("\nft_memcpy:\n");
	ft_memset(ptr, m, n);
	ptr_memccpy = ft_memccpy(ptr, hello, stop, 10);
	printf("%s\n", ptr_memccpy);
	printf("Success\n");
	free(ptr);
	*/

	char a[] = "123456789012345";
	const char b[] = "Secondstring";
	char c[] = "123456789012345";
	const char d[] = "Secondstring";
	printf("\n* memccpy *\n %s\n", memccpy(a, b, 115, 5));
	printf("New arrays : %s\t%s\n", a, b);
	printf("\n* ft_memccpy *\n %s\n", ft_memccpy(c, d, 115, 5));
	printf("New arrays : %s\t%s\n", c, d);
	printf("\n* memccpy *\n %s\n", memccpy(a, b, 115, 10));
	printf("New arrays : %s\t%s\n", a, b);
	printf("\n* ft_memccpy *\n %s\n", ft_memccpy(c, d, 115, 10));
	printf("New arrays : %s\t%s\n", c, d);
}

/* ft_memcpy */

void	test_memcpy()
{
	char *hello = "Hello world!";
	size_t n = 20;
	char *ptr = malloc(n);
	char *ptr_memcpy;

	printf("\nft_memcpy:\n");
	ptr_memcpy = ft_memcpy(ptr, hello, 5);
	printf("%s\n", ptr_memcpy);
	printf("Success\n");
	free(ptr);

	char a[] = "Firststring";
	const char b[] = "Secondstring";
	memcpy(a, b, 5);
	printf("New arrays : %s\t%s\n", a, b);
}

/* ft_memset */
void	test_memset()
{
	int m = 77;
	size_t n = 20;
	char *ptr = malloc(n);
	char *ptr_memset;

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
	free(ptr);
}

/* ft_bzero */

void	test_bzero()
{
	size_t n = 20;
	char *ptr = malloc(n);

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
	free(ptr);
}

/* ft_isalpha */
void	test_isalpha()
{
	printf("\nft_isalpha:\n");
	printf("Nope: %d, Yep: %d\n", ft_isalpha(5), ft_isalpha(103));
}

int	main(void)
{
	test_memmove();
	/* MAIN */

	/*
	test_memset();
	test_memcpy();
	test_memccpy();
	test_bzero();
	test_isalpha();
	*/

	return (0);
}
