#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* ft_memcmp */
void	test_memcmp()
{
	const char	src_1[] = "Hello World!";
	const char	src_2[] = "Hello Patrick!";
	const char	src_3[] = "Hello Patrick!";
	int n = 5;

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, memcmp(src_1, src_2, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_memcmp(src_1, src_2, n));

	n = 15;

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, memcmp(src_1, src_2, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_memcmp(src_1, src_2, n));

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, memcmp(src_2, src_1, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, ft_memcmp(src_2, src_1, n));

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_3, memcmp(src_2, src_3, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_3, ft_memcmp(src_2, src_3, n));
}

/* ft_memchr */
void	test_memchr()
{
	const char	src_1[] = "Hello World";
	const char	src_2[] = "No search symbol";
	char	letter = 'W';

	printf("\nft_memchr:\n");
	printf("String: %s\n%c found: %s\n\n", src_1, letter, (char *)ft_memchr(src_1, letter, 10));

	printf("\nmemchr:\n");
	printf("String: %s\n%c found: %s\n\n", src_1, letter, (char *)memchr(src_1, letter, 10));

	printf("\nft_memchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)ft_memchr(src_2, letter, 10));

	printf("\nmemchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)memchr(src_2, letter, 10));
}

/* ft_strncmp */
void	test_strncmp()
{
	const char	src_1[] = "Hello World!";
	const char	src_2[] = "Hello Patrick!";
	int n = 5;

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, strncmp(src_1, src_2, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_strncmp(src_1, src_2, n));

	n = 15;

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, strncmp(src_1, src_2, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_strncmp(src_1, src_2, n));

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, strncmp(src_2, src_1, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, ft_strncmp(src_2, src_1, n));

	printf("\nstrncmp:\n");
	printf("First %d letters in \"aaa\" & %s are %d\n", n, src_1, strncmp("aaa", src_1, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in \"aaa\" & %s are %d\n", n, src_1, ft_strncmp("aaa", src_1, n));
}

/* ft_strjoin */
void	test_strjoin()
{
	char		*new_str;
	const char	src_1[] = "Hello ";
	const char	src_2[] = "World!";

	printf("\nft_strjoin:\n");
	new_str = ft_strjoin(src_1, src_2);
	printf("Old: %s & %s\nNew: %s\n\n", src_1, src_2, new_str);
	free(new_str);

	const char	src_3[] = "12345";
	const char	src_4[] = "6789 10";

	new_str = ft_strjoin(src_3, src_4);
	printf("Old: %s & %s\nNew: %s\n\n", src_3, src_4, new_str);
	free(new_str);

	new_str = ft_strjoin(src_4, src_3);
	printf("Old: %s & %s\nNew: %s\n\n", src_4, src_3, new_str);
	free(new_str);
}

/* ft_substr */
void	test_substr()
{
	char		*new_str;
	const char	src[] = "Hello Brave New World.";
	const char	src_num[] = "1234567890";

	printf("\nft_substr:\n");
	new_str = ft_substr(src, 6, 5);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src, 6, 50);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src, 50, 5);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src_num, 5, 5);
	printf("Old: %s\nNew: %s\n\n", src_num, new_str);
	free(new_str);

	new_str = ft_substr(src_num, 1, 40);
	printf("Old: %s\nNew: %s\n\n", src_num, new_str);
	free(new_str);
}

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
	test_memcmp();
	/* MAIN */

	/*
	test_memset();
	test_memcpy();
	test_memccpy();
	test_bzero();
	test_memmove();
	test_memchr();
	test_isalpha();
	test_strncmp();

	test_substr();
	test_strjoin();
	*/

	return (0);
}
