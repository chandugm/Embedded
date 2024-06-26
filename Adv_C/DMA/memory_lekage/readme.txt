Memory Management Debugging:
--------------------------
Dynamic memory allocation seems straightforward enough: Memory is allocated on demandusing malloc() or one of its variantsand memory is freed when it's no longer needed.  

For example, a memory leak occurs when memory is allocated but never freed. Leaks can obviously be caused by a malloc() without a corresponding free(), but leaks can also be inadvertently caused if a pointer to dynamically allocated memory is deleted, lost, or overwritten. 

Memory corruption can occur when allocated (and in use) memory is overwritten accidentally or when using statically allocated memory and stack variables (especially if a pointer to stack-allocated memory is returned to a calling method). Buffer overrunscaused by writing past the end of a block of allocated memoryfrequently corrupt memory.
 
Regardless of the root cause, memory management errors can have unexpected, even devastating effects on application and system behavior. With dwindling available memory, processes and entire systems can grind to a halt, while corrupted memory often leads to spurious crashes. System security is also susceptible to buffer overruns. Worse, it might take days before evidence of a real problem appears. Today, it's common for Linux systems to have a gigabyte of main memory. If a program leaks a small amount of memory, it takes some time before the application and system show symptoms of a problem. Memory management errors can be quite insidious and very difficult to find and fix. 

memory-management checkers: MEMWATCH, YAMD, Electric Fence, and Valgrind.

Dynamic Memory Functions:
-------------------------
Of all the library calls (libc) in Linux, only four manage memory: malloc(), calloc(), realloc(), and free(). All these functions have prototypes in the stdlib.h include file. 
malloc() allocates a memory block that is uninitialized. Its prototype is 
void* malloc(size_t size)

The single argument is the number of bytes of memory to allocate. 
If the allocation is successful, malloc() returns a pointer to the memory. If memory allocation fails for some reason (for example, if the system is out of memory), malloc() returns a NULL pointer. 
calloc() allocates an array in memory and initializes all the memory to 0 (with malloc(), the allocated memory is uninitialized). Here's the prototype: 
void* calloc(size_t nmemb, size_t size)

The first argument is the number of elements in the array, and the second argument is the size (in bytes) of each element. Like malloc(), calloc() returns a pointer if the memory allocation was successful, and NULL otherwise. 
realloc() is defined as 
void* realloc (void *ptr, size_t size)

realloc() changes the size of the object referenced by the pointer to a new size specified by the second argument. realloc() returns a pointer to the moved block of memory. 
free() deallocates a memory block. It takes a pointer as an argument, as shown in its prototype, and releases that memory: 
void free (void *ptr),

While the API for memory management is unusually small, the number and kind of memory errors that can occur are substantial. They include: 

1. Reading and using uninitialized memory
2. Reading and writing memory after it has been freed
3. Reading and writing from memory after or in front of (underrun) the allocated size
4. Reading and writing inappropriate areas on the stack

Memory leaks:
-------------
The use of pointers can cause problems in all types of memory. In addition, indexes into statically allocated arrays can cause corruption. Stack issues can also cause problems with some compilers. Returning a pointer to a stack variable in a function is a big no-no. 


Valgrind:
--------
Valgrind was written by Julian Seward; it's available under the GNU Public License. Valgrind is closely tied to the operating system architecture and currently is supported only on Linux x86 machines. There is a port of Valgrind to the PowerPC architecture, and a patch for this is available under the Related Projects link on the Valgrind web site. Valgrind works on machines with kernels from the 2.4.x and 2.6.x series and glibc 2.2.x and 2.3.x. When a program is run under Valgrind's control, all writes and reads of memory are looked at, and calls to malloc()/new()/free()/delete() are intercepted. As a result, Valgrind can detect problems such as: 

1. Use of uninitialized memory
2. Reading and writing memory after it has been freed
3. Reading and writing from memory past the allocated size
4. Reading and writing inappropriate areas on the stack

Memory leaks
Passing of uninitialized and/or unaddressable memory

Mismatched use of malloc/new/new [] versus free/delete/delete []
When a program is run under Valgrind, all memory reads and writes are inspected, and all calls to malloc()/new() and free()/delete() are intercepted.


