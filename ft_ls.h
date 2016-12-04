#ifndef FT_LS_H
# define FT_LS_H
# include <unistd.h>
# include <sys/stat.h>
# include <dirent.h>
# include <stdlib.h>
# include <stdio.h>

void ft_putstr(const char *s);
void writedir(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int sort(char *str, char *str2);


# endif