#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);

unsigned int get_size(char *s1, char *s2, unsigned int n);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _putchar(char c);

char *product(char *s1, char *s2, int size1, int size2);

int _strlend(char *s);

void _error(void);

int leading_0(char *s);

int main(int argc, char *argv[]);

#endif /* MAIN_H */
