# 0x0C. C - MORE  MALLOC, FREE

## malloc and free are two standard C library functions that are used for dynamic memory allocation and deallocation.

* malloc is short for "memory allocation" and is used to allocate a block of memory in the heap at runtime. It takes a single argument, which is the size of the block of memory to be allocated in bytes. If the allocation is successful, malloc returns a pointer to the beginning of the allocated block. If the allocation fails, it returns a null pointer.

* Free is used to deallocate a block of memory that was previously allocated with malloc (or a similar function like calloc or realloc). It takes a single argument, which is the pointer to the beginning of the block of memory to be deallocated. Once the memory has been deallocated, it can no longer be accessed by the program.

* It is important to note that memory allocated with malloc (or similar functions) must always be deallocated with free (or a similar function). Failing to do so can lead to memory leaks, where memory is allocated but never freed, causing the program to eventually run out of memory. 
Additionally, attempting to access memory after it has been deallocated can result in undefined behavior, which can cause crashes or other unexpected behavior in the program.


