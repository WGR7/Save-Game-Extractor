#pragma once

#include <jo/jo.h>

#define COUNTOF(x) sizeof(x)/sizeof(x[0])

#define LWRAM 0x00200000 // start of LWRAM memory. Doesn't appear to be used
#define LWRAM_HEAP_SIZE 0x100000 // number of bytes to extend heap by

// This function prototype is not in jo/malloc.h
// Extend the heap
void jo_add_memory_zone(unsigned char *ptr, const unsigned int size_in_bytes);

// clears all the text on the screen
void clearScreen(void);
