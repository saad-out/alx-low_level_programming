#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);

unsigned int get_size(char *s1, char *s2, unsigned int n);

unsigned int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);



#endif /* MAIN_H */
