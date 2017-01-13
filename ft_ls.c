#include "ft_ls.h"

void writedir(char *str)
{
	DIR *dir = opendir(str);
	struct dirent *ent;
	char *mass;

	if (dir != NULL)
	{
		while ((ent = readdir(dir)) != NULL)
		{
			if (ent->d_name[0] != '.')
			{
				mass = ent->d_name;
				printf("%s\n",mass);
			}
			else
				ent++;
		}
	}
	else 
		printf("This is not directory: %s", str);
	closedir(dir);
}
