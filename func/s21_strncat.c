#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
	s21_size_t dest_len = 0;
	while (dest[dest_len] != '\0') {
		dest_len++;
	}

	s21_size_t i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++) {
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return dest;
}
