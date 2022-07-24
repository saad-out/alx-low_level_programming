#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

void a_free(char **s, int i);

int w_count(char *s, int *arr);

char **strtow(char *str);

#endif
