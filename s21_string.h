#ifndef S21_HEADER_H 
#define S21_HEADER_H 

#include <stddef.h>

typedef unsigned long s21_size_t;

#ifndef s21_NULL
#define s21_NULL ((void*)0) 
#endif

s21_size_t s21_strlen(const char *str);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
int s21_strncmp (const char *str1, const char *str2, s21_size_t n);

#endif