#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src);
int main(void);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *t);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
