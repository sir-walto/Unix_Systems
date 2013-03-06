/*

*/

#include "walk_tree.h"
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>

void walk_tree(char * directory, char * flag, char * search, void (*callback)(struct stat *, char *, char *, char *, void *))
{
	DIR * dirfd;
	struct stat statdata;
	struct dirent * direntry

	if((dirfdr= opendir(directory)) == NULL)
	{
		perror("Unable to open directory\n");
		exit(errno);
	}
	
	while((direntry = readdir(dirfd)) != NULL)
	{

	}

	if((closedir(dirfd)) == -1)
	{
		perror("unable to close the directory\n");
		exit(errno);
	}
}