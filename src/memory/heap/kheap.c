#include "kheap.h"
#include "heap.h"
#include "config.h"

struct heap kernel_heap;
struct heap_table kernel_heap_table;

void kheap_init()
{
  int total_tables_entries = PEACH_OS_HEAP_SIZE_BYTES / PEACH_OS_HEAP_BLOCK_SIZE;
  kernel_heap_table.entries = (void*) 0x00;
  kernel_heap_table.total = total_table_entries;
}
  
