#include "ft_ls.h"

void writedir(char *str)
{
	DIR *dir = opendir(str);
	struct dirent *ent;
	
	if (dir != NULL)
	{
		while((ent = readdir(dir)) != NULL)
		{
			if (ent->d_name[0] != '.')
			{
				ft_putstr(ent->d_name);
				write(1, "\n", 2);
			}
			else
				ent++;
		}
	}
	closedir(dir);
}