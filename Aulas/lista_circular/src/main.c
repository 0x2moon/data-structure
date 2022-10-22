#include <stdio.h>
#include "./../lib/lcircular.h"
#define SIZE 8
int main()
{
	struct __listacircular *clist = lcircular_create();
    _add_first(clist,1);
	  _add_first(clist,2);
	    _add_first(clist,5);
		puts("\n");
	_print_listacircular(clist);
	_search(clist, 5);
	return (0);
}