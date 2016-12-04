#include "ft_ls.h"

int main(int argc, char **argv)
{
	if (argc == 1)
		writedir(".");
	if (argc == 2)
		writedir(argv[1]);
	return 0;
}