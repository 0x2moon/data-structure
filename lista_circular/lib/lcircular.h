#ifndef LCIRCULAR_H_
#define LCIRCULAR_H_
#include <stdbool.h>

struct __node;
struct __listacircular;

struct  __listacircular * lcircular_create();
struct  __node *node_create(struct __listacircular * clist, int val);
void __destroy_listacircular(struct __listacircular **clist);

bool _isempty(struct __listacircular *clist);

void _add_first(struct __listacircular *clist, int val);
void _add_end(struct __listacircular *clist, int val);
void _add_ord(struct __listacircular *clist, int val);
void _search (struct __listacircular *clist, int val);
void _remove (struct __listacircular *clist, int pos);

void _print_listacircular(struct __listacircular *clist);
void _print_invert_listacircular(struct __listacircular *clist);
#endif