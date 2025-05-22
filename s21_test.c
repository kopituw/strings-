#include <string.h>
#include <limits.h>
#include <check.h>  
#include "func/s21_string.h"


// START_TEST(test_s21_memchr) {
// 	{
// 		const void *str = "Hello, World!";
// 		int c = 'o';
// 		s21_size_t n = 15;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);

// 	}
// 	{
// 		const void *str = "Hello, World!";
// 		int c = 'o';
// 		s21_size_t n = 1;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const void *str = "Hello,\0 World!";
// 		int c = '\0';
// 		s21_size_t n = 15;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const void *str = "Hello, World!";
// 		int c = ' ';
// 		s21_size_t n = 15;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const void *str = "Hello, World!";
// 		int c = 'H';
// 		s21_size_t n = 0;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}{
// 		const void *str = "Hello, World!";
// 		int c = 'p';
// 		s21_size_t n = 20;

// 		void *res = s21_memchr(str, c, n);
// 		void *exp_res = memchr(str, c, n);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// }
// END_TEST

// START_TEST(test_s21_memcmp) {
// 	{
// 		const void *str1 = "Hello, World!";
// 		const void *str2 = "Hello, World!";
// 		s21_size_t n = 13;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "Hello, Bimbo!";
// 		const void *str2 = "Hello, World!";
// 		s21_size_t n = 15;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "Hello, World!";
// 		const void *str2 = "H";
// 		s21_size_t n = 13;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "Hello, World!";
// 		const void *str2 = "ello";
// 		s21_size_t n = 7;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "Hello, World!";
// 		const void *str2 = "wow";
// 		s21_size_t n = 0;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// {
	
// 		const void *str1 = "He\0llo, World, ahahahahahah!";
// 		const void *str2 = "He\0llo, World, ahahahahahah!";
// 		s21_size_t n = 20;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "He\0llo, World!";
// 		const void *str2 = "sh\0ubaduba";
// 		s21_size_t n = 20;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "HELLO, WORLD!";
// 		const void *str2 = "hello, world!";
// 		s21_size_t n = 15;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// 	{
// 		const void *str1 = "";
// 		const void *str2 = "";
// 		s21_size_t n = 0;

// 		int res = s21_memcmp(str1, str2, n);
// 		int exp_res = memcmp(str1, str2, n);

// 		ck_assert_int_eq(res, exp_res);
// 	}
// }
// END_TEST

// START_TEST(test_s21_memcpy){
// 	{
// 		const char src[] = "Hello, World!";
// 		char dest[50] = {0};
// 		s21_size_t n = 15;

// 		char *res = s21_memcpy(dest, src, n);
// 		char *exp_res = memcpy( dest, src, n);

// 		ck_assert_str_eq(res, exp_res);

// 	}
// 	{
// 		const char src[] = "Hello, World!";
// 		char dest[1] = {0};
// 		s21_size_t n = 0;

// 		char *res = s21_memcpy( dest, src, n);
// 		char *exp_res = memcpy( dest, src, n);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	{
// 		const char src[] = "Hello, World!";
// 		char dest[50] = {0};
// 		s21_size_t n = 3;

// 		char *res = s21_memcpy( dest, src, n);
// 		char *exp_res = memcpy( dest, src, n);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	{
// 		const char src[] = "Hello, World!";
// 		char dest[] = {123451245};
// 		s21_size_t n = 0;

// 		char *res = s21_memcpy(dest, src, n);
// 		char *exp_res = memcpy(dest, src, n);

// 		ck_assert_str_eq(res, exp_res);
// 	}

// }
// END_TEST

// START_TEST(test_s21_memset) {
// 	{
// 		char str[20] = "Hello, World!";
// 		char exp_str[20] = "Hello, World!";
// 		int c = 'o';
//  		s21_size_t n = 5;

//  		char *res = s21_memset(str, c, n);
//  		char *exp_res = memset(exp_str, c, n);

// 		ck_assert_ptr_eq(res, str);
// 		ck_assert_ptr_eq(exp_res, exp_str);

//  		ck_assert_str_eq(str, exp_str);
// 	}
// 	{
// 		char str[20] = "Hello, World!";
// 		char exp_str[20] = "Hello, World!";
// 		int c = '\0';
//  		s21_size_t n = 10;

//  		char *res = s21_memset(str, c, n);
//  		char *exp_res = memset(exp_str, c, n);

// 		ck_assert_ptr_eq(res, str);
// 		ck_assert_ptr_eq(exp_res, exp_str);

//  		ck_assert_str_eq(str, exp_str);
// 	}
// 	{
// 		char str[20] = "Hello, World!";
// 		char exp_str[20] = "Hello, World!";
// 		int c = 'o';
//  		s21_size_t n = 0;

//  		char *res = s21_memset(str, c, n);
//  		char *exp_res = memset(exp_str, c, n);

// 		ck_assert_ptr_eq(res, str);
// 		ck_assert_ptr_eq(exp_res, exp_str);

//  		ck_assert_str_eq(str, exp_str);
// 	}
// }

START_TEST(test_s21_strncat) {
	{
	char dest[50] = "Hello, ";
	char dest_exp[50] = "Hello, ";
	const char *src = "World!";
	s21_size_t n = 12;

	char *res = s21_strncat(dest, src, n);
	char *exp_res = strncat(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);
} 
{
	char dest[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	char dest_exp[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	const char *src = "!!!!!!!!!!!!!!";
	s21_size_t n = 3;

	char *res = s21_strncat(dest, src, n);
	char *exp_res = strncat(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);
}
{
	char dest[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	char dest_exp[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	const char *src = "";
	s21_size_t n = 10;

	char *res = s21_strncat(dest, src, n);
	char *exp_res = strncat(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);
}
}
END_TEST

// START_TEST(test_s21_strchr) {
// 	{
//  		const void *str = "Hello, World!";
// 		int c = 'o';

//  		void *res = s21_strchr(str, c);
//  		void *exp_res = strchr(str, c);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
//  		const void *str = "Hello, World!";
// 		int c = '\0';

//  		void *res = s21_strchr(str, c);
//  		void *exp_res = strchr(str, c);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
//  		const void *str = "Hello, World!";
// 		int c = 't';

//  		void *res = s21_strchr(str, c);
//  		void *exp_res = strchr(str, c);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
//  		const void *str = "Hello, World!";
// 		int c = ' ';

//  		void *res = s21_strchr(str, c);
//  		void *exp_res = strchr(str, c);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}	
// 	{
//  		const void *str = "Hello, World!";
// 		int c = 'h';

//  		void *res = s21_strchr(str, c);
//  		void *exp_res = strchr(str, c);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
	
// }
// END_TEST

 START_TEST(test_s21_strncmp){
 	{
 		const char *str1 = "Hello, World!";
 		const char *str2 = "Hello, World!";
 		s21_size_t n = 13;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}
	{
 		const char *str1 = "hello, world!";
 		const char *str2 = "HELLO, WORLD!";
 		s21_size_t n = 13;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}
	{
 		const char *str1 = "Hello, World!";
 		const char *str2 = "Hello, World!";
 		s21_size_t n = 0;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}
	{
 		const char *str1 = "Hello, pisya";
 		const char *str2 = "Hello, popa";
 		s21_size_t n = 6;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}
	{
 		const char *str1 = "";
 		const char *str2 = "";
 		s21_size_t n = 100;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}
	{
 		const char *str1 = "";
 		const char *str2 = "";
 		s21_size_t n = 0;

 		int res = s21_strncmp(str1, str2, n);
 		int exp_res = strncmp(str1, str2, n);

 		ck_assert_int_eq(res, exp_res);
 	}

 }
 END_TEST

START_TEST(test_s21_strncpy){
	{char dest[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	char dest_exp[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	const char *src = "!!!!!!!!!!!!!!";
	s21_size_t n = 3;

	char *res = s21_strncpy(dest, src, n);
	char *exp_res = strncpy(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);}

	{char dest[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	char dest_exp[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	const char *src = "";
	s21_size_t n = 10;

	char *res = s21_strncpy(dest, src, n);
	char *exp_res = strncpy(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);}
	{char dest[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	char dest_exp[50] = "OOOOOOOOHHHHHHHH, NNNNOOO";
	const char *src = "!!!!!!!!!!!!!!";
	s21_size_t n = 0;

	char *res = s21_strncpy(dest, src, n);
	char *exp_res = strncpy(dest_exp, src, n);

	ck_assert_str_eq(res, exp_res);}
}

// START_TEST(test_s21_strcspn) {
// 	{
// 		const char *str1 = "Hello, World!";
// 		const char *str2 = ",";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "";
// 		const char *str2 = "";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// 	{	
// 		const char *str1 = "abc";
// 		const char *str2 = "";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "";
// 		const char *str2 = "abc";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "lalalalalalalalla";
// 		const char *str2 = "p";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "ababababababab";
// 		const char *str2 = "b";
// 		s21_size_t res = s21_strcspn(str1, str2);
// 		s21_size_t exp_res = strcspn(str1, str2);

// 		ck_assert_uint_eq(res, exp_res);
// 	}
// }
// END_TEST

// START_TEST(test_s21_strerror) {
// 	{
// 		int errnum = 1;
// 		char *res = s21_strerror(errnum);
// 		char *exp_res = strerror(errnum);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	{
// 		int errnum = 0;
// 		char *res = s21_strerror(errnum);
// 		char *exp_res = strerror(errnum);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	{
// 		int errnum = 2;
// 		char *res = s21_strerror(errnum);
// 		char *exp_res = strerror(errnum);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	{
// 		int errnum = -1;
// 		char *res = s21_strerror(errnum);
// 		char *exp_res = strerror(errnum);

// 		ck_assert_str_eq(res, exp_res);
// 	}
// 	// {
// 	// 	s21_size_t
// 	// }
// }

START_TEST(test_s21_strlen) { 
	{
	const char *test_str1 = "Hello, World!";
	char res = s21_strlen(test_str1);
	char exp_res = strlen(test_str1);
	ck_assert_int_eq(res, exp_res);
	}
	{
	const char *test_str2 = "OHWOW LOOK AT ME, OHH WOOOOWWWWW!!!";
	char res = s21_strlen(test_str2);
	char exp_res = strlen(test_str2);
	ck_assert_int_eq(res, exp_res);
	}
	{
	const char *test_str3 = "";
	char res = s21_strlen(test_str3);
	char exp_res = strlen(test_str3);
	ck_assert_int_eq(res, exp_res);
	}
}
END_TEST

// START_TEST(test_s21_strpbrk) {
// 	{
// 		const char *str1 = "Hello, World!";
//  		const char *str2 = ",";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);

// 	}
// 	{
// 		const char *str1 = "Hello, World!";
//  		const char *str2 = "";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "Hello, World!";
//  		const char *str2 = "ppp";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "oooooooooooooooooooooo";
//  		const char *str2 = "aaaaaaao";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "oooooooooooooooooooooo";
//  		const char *str2 = "oooooooo";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1 = "";
//  		const char *str2 = "";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str1[] = {'a', 'b', '\0', 'c'};
//  		const char *str2 = "c";
//  		char *res = s21_strpbrk(str1, str2);
//  		char *exp_res = strpbrk(str1, str2);

//  		ck_assert_ptr_eq(res, exp_res);
// 	}
// }
// END_TEST

// START_TEST(test_s21_strrchr){
// 	{
// 		const char *str = "Hello, World!";
// 		int c = 'o';
// 		char *res = s21_strrchr(str, c);
//   		char *exp_res = strrchr(str, c);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str = "Hello, World!";
// 		int c = 'm';
// 		char *res = s21_strrchr(str, c);
//   		char *exp_res = strrchr(str, c);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str = "Hello, World!";
// 		int c = '\0';
// 		char *res = s21_strrchr(str, c);
//   		char *exp_res = strrchr(str, c);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str = "Hello, World!";
// 		int c = 'w';
// 		char *res = s21_strrchr(str, c);
//   		char *exp_res = strrchr(str, c);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *str = "";
// 		int c = 'o';
// 		char *res = s21_strrchr(str, c);
//   	char *exp_res = strrchr(str, c);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// }
// END_TEST


// START_TEST(test_s21_strstr){
// 	{
// 		const char *haystack = "Hello, World!";
// 		const char *needle = "World";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *haystack = "Hello, World!";
// 		const char *needle = "n";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *haystack = "";
// 		const char *needle = "abbbba";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *haystack = "bubilupi";
// 		const char *needle = "";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *haystack = "bubilupi";
// 		const char *needle = "bubilupi";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// 	{
// 		const char *haystack = "bubilupi";
// 		const char *needle = "pupilupi";
// 		char *res = s21_strstr(haystack, needle);
// 	   	char *exp_res = strstr(haystack, needle);

// 		ck_assert_ptr_eq(res, exp_res);
// 	}
// }
// END_TEST

// START_TEST(test_s21_strtok) {
// 	{
// 		char str[] = "one, two, three, four, five";
// 		const char *delim = ",";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "one;. two;, three, four; five";
// 		const char *delim = ";,";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "one;., two;, three, four,, five,,,,";
// 		const char *delim = ",";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "one;. two;, three, four; five";
// 		const char *delim = "";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "";
// 		const char *delim = "";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "one, two, three, four, five";
// 		const char *delim = ".";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "one, two, three, four, five";
// 		const char *delim = "z";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "oznze, tzwzo,zz tzhzrzzee, fzozr, zfzizvzze";
// 		const char *delim = "zzz";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 		char str[] = "........";
// 		const char *delim = ".";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// 	{
// 	char str[] = ".;.;.;....;;;;;";
// 		const char *delim = ".;";
// 		char *token_s21 = s21_strtok(str, delim);
// 		char *token_exp = strtok(str, delim);
// 		while (token_s21 != s21_NULL && token_exp != s21_NULL )
// 		{
// 			ck_assert_str_eq(token_s21, token_exp);
// 			token_s21 = s21_strtok(s21_NULL, delim);
// 			token_exp = strtok(s21_NULL, delim);
// 		}
// 		ck_assert_ptr_eq(token_s21, strtok);
// 	}
// }
// END_TEST

// START_TEST(test_s21_sprintf) {
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		int len1 = s21_sprintf(buf1, "%c", 'A');
// 		int len2 = sprintf(buf2, "%c", 'A');
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		int len1 = s21_sprintf(buf1, "%d",-123456 );
// 		int len2 = sprintf(buf2, "%d", -123456);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		int len1 = s21_sprintf(buf1, "%i", 123456);
// 		int len2 = sprintf(buf2, "%i", 123456);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		double val = 1234.56789;
// 		int len1 = s21_sprintf(buf1, "%.6e", val);
// 		int len2 = sprintf(buf2, "%.6e", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		double val = 1234.56789;
// 		int len1 = s21_sprintf(buf1, "%.6E", val);
// 		int len2 = sprintf(buf2, "%.6E", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		double val = 1234.56789;
// 		int len1 = s21_sprintf(buf1, "%.6f", val);
// 		int len2 = sprintf(buf2, "%.6f", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		double val = 1234.56789;
// 		int len1 = s21_sprintf(buf1, "%g", val);
// 		int len2 = sprintf(buf2, "%g", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		unsigned int val = 0755;
// 		int len1 = s21_sprintf(buf1, "%o", val);
// 		int len2 = sprintf(buf2, "%o", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		const char *str = "Я ЩАС МОЗГИ ПОЛОМАЮ СЕБЕ!";
// 		int len1 = s21_sprintf(buf1, "%s", str);
// 		int len2 = sprintf(buf2, "%s", str);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		const char *str = "123456789";
// 		int len1 = s21_sprintf(buf1, "%u", str);
// 		int len2 = sprintf(buf2, "%u", str);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		unsigned int val = 0x1a3f;
// 		int len1 = s21_sprintf(buf1, "%x", val);
// 		int len2 = sprintf(buf2, "%x", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		unsigned int val = 0x1a3f;
// 		int len1 = s21_sprintf(buf1, "%X", val);
// 		int len2 = sprintf(buf2, "%X", val);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		void *ptr = buf1;
// 		int len1 = s21_sprintf(buf1, "%p", ptr);
// 		int len2 = sprintf(buf2, "%p", ptr);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		int len1 = s21_sprintf(buf1, "%%");
// 		int len2 = sprintf(buf2, "%%");
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
// 		int n1 = -1;
// 		int n2 = -1;
// 		int len1 = s21_sprintf(buf1, "Hello%nWorld", &n1);
// 		int len2 = sprintf(buf2, "Hello%nWorld", &n2);
// 		ck_assert_int_eq(len1, len2);
// 		ck_assert_str_eq(buf1, buf2);
// 		ck_assert_int_eq(n1, n2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
//     	int val = 123;
//     	int len1 = s21_sprintf(buf1, "%-10d", val);
//     	int len2 = sprintf(buf2, "%-10d", val);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
//     	int val_pos = 123;
//     	int val_neg = -123;
//     	int len1 = s21_sprintf(buf1, "%+d %+d", val_pos, val_neg);
//     	int len2 = sprintf(buf2, "%+d %+d", val_pos, val_neg);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100];
// 		char buf2[100];
//     	int val_pos = 123;
//     	int val_neg = -123;
//     	int len1 = s21_sprintf(buf1, "% d % d", val_pos, val_neg);
//     	int len2 = sprintf(buf2, "% d % d", val_pos, val_neg);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	unsigned int val1 = 123;
//     	unsigned int val2 = 0;
//     	int len1 = s21_sprintf(buf1, "%#o %#x %#X %#o", val1, val1, val1, val2);
//     	int len2 = sprintf(buf2, "%#o %#x %#X %#o", val1, val1, val1, val2);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	double val = 123.0;
//     	int len1 = s21_sprintf(buf1, "%#.0f %#.0e %#.0g", val, val, val);
//     	int len2 = sprintf(buf2, "%#.0f %#.0e %#.0g", val, val, val);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	int val = 123;
// 		int len1 = s21_sprintf(buf1, "%010d", val);
//     	int len2 = sprintf(buf2, "%010d", val);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	int val = 123;
//     	int len1 = s21_sprintf(buf1, "%-+10d", val);
//     	int len2 = sprintf(buf2, "%-+10d", val);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	int val = 123;
//     	int len1 = s21_sprintf(buf1, "%10d", val);
//     	int len2 = sprintf(buf2, "%10d", val);
//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);

//     	ck_assert(buf1[7] == ' ');
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     	int val = 123;
//     	int width = 10;

//     	int len1 = s21_sprintf(buf1, "%*d", width, val);
//     	int len2 = sprintf(buf2, "%*d", width, val);

//     	ck_assert_int_eq(len1, len2);
//     	ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     int val = 123;
//     int len1 = s21_sprintf(buf1, "%.5d", val);
//     int len2 = sprintf(buf2, "%.5d", val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		 char buf1[100], buf2[100];
//     int val = 0;
//     int len1 = s21_sprintf(buf1, "%.0d", val);
//     int len2 = sprintf(buf2, "%.0d", val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     double val = 3.1415926535;
//     int len1 = s21_sprintf(buf1, "%.2f", val);
//     int len2 = sprintf(buf2, "%.2f", val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     double val = 1234.56789;
//     int len1 = s21_sprintf(buf1, "%.3e", val);
//     int len2 = sprintf(buf2, "%.3e", val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     double val = 123.456789;
//     int len1 = s21_sprintf(buf1, "%.3g", val);
//     int len2 = sprintf(buf2, "%.3g", val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     const char *str = "abcdef";
//     int len1 = s21_sprintf(buf1, "%.3s", str);
//     int len2 = sprintf(buf2, "%.3s", str);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     const char *str = "abc";
//     int len1 = s21_sprintf(buf1, "%.5s", str);
//     int len2 = sprintf(buf2, "%.5s", str);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2); 
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     double val = 3.1415926535;
//     int precision = 3;
//     int len1 = s21_sprintf(buf1, "%.*f", precision, val);
//     int len2 = sprintf(buf2, "%.*f", precision, val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// 	{
// 		char buf1[100], buf2[100];
//     int val = 42;
//     int precision = 5;
//     int len1 = s21_sprintf(buf1, "%.*d", precision, val);
//     int len2 = sprintf(buf2, "%.*d", precision, val);
//     ck_assert_int_eq(len1, len2);
//     ck_assert_str_eq(buf1, buf2);
// 	}
// }

Suite *s21_string_suite(void) {
	Suite *s = suite_create("s21_string");
	// TCase *tc_memchr = tcase_create("Memchr");
	// TCase *tc_memcmp = tcase_create("Memcmp");
	// TCase *tc_memcpy = tcase_create("Memcpy");
	// TCase *tc_memset = tcase_create("Memset");
	TCase *tc_strncat = tcase_create("Strncat");
	// TCase *tc_strchr = tcase_create("Strchr");
	 TCase *tc_strncmp = tcase_create("Strncmp");
	TCase *tc_strncpy = tcase_create("Strncpy");
	// TCase *tc_strcspn = tcase_create("Strcspn");
	// TCase *tc_strerror = tcase_create("Strerror");
	TCase *tc_strlen = tcase_create("Strlen");
	// TCase *tc_strpbrk = tcase_create("Strpbrk");
	// TCase *tc_strrchr = tcase_create("Strrchr");
	// TCase *tc_strstr = tcase_create("Strstr");
	// TCase *tc_strtok = tcase_create("Strtok");
	// TCase *tc_sprintf = tcase_create("Sprintf");
	// TCase *tc_sscanf = tcase_create("Sscanf");
	
	// tcase_add_test(tc_memchr, test_s21_memchr);
	// tcase_add_test(tc_memcmp, test_s21_memcmp);
	// tcase_add_test(tc_memcpy, test_s21_memcpy);
	// tcase_add_test(tc_memset, test_s21_memset);
	tcase_add_test(tc_strncat, test_s21_strncat);
	// tcase_add_test(tc_strchr, test_s21_strchr);
	tcase_add_test(tc_strncmp, test_s21_strncmp);
	tcase_add_test(tc_strncpy, test_s21_strncpy);
	// tcase_add_test(tc_strcspn, test_s21_strcspn);
	// tcase_add_test(tc_strerror, test_s21_strerror);
	tcase_add_test(tc_strlen, test_s21_strlen);
	// tcase_add_test(tc_strpbrk, test_s21_strpbrk);
	// tcase_add_test(tc_strrchr, test_s21_strrchr);
	// tcase_add_test(tc_strstr, test_s21_strstr);
	// tcase_add_test(tc_strtok, test_s21_strtok);
	// tcase_add_test(tc_sprintf, test_s21_sprintf);
	// tcase_add_test(tc_sscanf, test_s21_sscanf);

	// suite_add_tcase(s, tc_memchr);
	// suite_add_tcase(s, tc_memcmp);
	// suite_add_tcase(s, tc_memcpy);
	// suite_add_tcase(s, tc_memset);
	suite_add_tcase(s, tc_strncat);
	// suite_add_tcase(s, tc_strchr);
	suite_add_tcase(s, tc_strncmp);
	suite_add_tcase(s, tc_strncpy);
	// suite_add_tcase(s, tc_strcspn);
	// suite_add_tcase(s, tc_strerror);
	suite_add_tcase(s, tc_strlen);
	// suite_add_tcase(s, tc_strpbrk);
	// suite_add_tcase(s, tc_strrchr);
	// suite_add_tcase(s, tc_strstr);
	// suite_add_tcase(s, tc_strtok);
	// suite_add_tcase(s, tc_sprintf);
	// suite_add_tcase(s, tc_sscanf);

	return s;
}

int main () {
	int numb_failed;
	Suite *s = s21_string_suite();
	SRunner *sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	numb_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (numb_failed == 0) ? 0 : 1;
}
