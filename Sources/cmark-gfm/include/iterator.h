#ifndef CMARK_ITERATOR_H
#define CMARK_ITERATOR_H

#include "cmark-gfm.h"

typedef struct {
  cmark_event_type ev_type;
  cmark_node *node;
} cmark_iter_state;

struct cmark_iter {
  cmark_mem *mem;
  cmark_node *root;
  cmark_iter_state cur;
  cmark_iter_state next;
};

#endif
