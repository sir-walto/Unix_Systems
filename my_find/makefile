cc = gcc
OBJECTS = my_find.o walk_tree/walk_tree.o
CFLAGS = -Wall -pedantic -std=gnu99 -c
LFLAGS = -Wall

all: my_find

debug:
 CFLAGS += -ggdb
debug: clean my_find

my_find.o: my_find.c my_find.h
	$(CC) $(CFLAGS) $<

walk_tree.o: walk_tree/walk_tree.c walk_tree/walk_tree.h
	$(CC) $(CFLAGS) $<

###########################################################################
clean:
	rm -f $(OBJECTS) my_find