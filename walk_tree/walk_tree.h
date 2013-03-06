/*

*/

#ifndef WALK_TREE_H_
#define WALK_TREE_H_

void walk_tree(char *, char *, char *, void (*callback)(struct stat *, char *, char *, char *, void *));

#endif