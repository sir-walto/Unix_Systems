/*


*/
#include <stdio.h>
#include "my_find.h"
#include "../walk_tree/walk_tree.h"

//static int callback(struct stat *, char *, char *, char *, void *);

int main(int argc, char ** argv)
{

	if(argc == 1 || argc > 4)
	{
		perror("Incorrect usage: <directory> <flag> <search criteria>");
		exit(1);
	}

	walk_tree(argv[1], argv[2], argv[3], &callback);

	return 0;
}

/*static int callback(struct stat * statdata, char * path, char * flag, char * search, void * passthrough)
{
	
}*/