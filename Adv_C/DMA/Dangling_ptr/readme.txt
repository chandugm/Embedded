DMA Problems:
------------

2) Dangling pointer
-------------------
A dangling pointer is a pointer that continues to point to a memory location after the memory has been deallocated or released. This can happen in several ways, such as:

Case 1: Deallocating Memory: 
----------------------------
	When the memory a pointer points to is freed using free() in C, but the pointer is not set to NULL.

Case 2: Exiting a Function: 
----------------------------
When a function returns a pointer to a local variable, the local variable goes out of scope, but the pointer still points to that memory location.

Case 3: Scope Exit: 
-------------------
When a pointer points to a local variable in a block of code and that block of code ends, the local variable goes out of scope, but the pointer still points to that memory location.

Using a dangling pointer leads to undefined behavior, which can cause a program to crash or exhibit unexpected behavior. This is because the memory location it points to may now be used for something else or may be inaccessible.

How to avoid Dangling Pointer:
-----------------------------
1) Set Pointers to NULL: After freeing memory, always set the pointer to NULL.
2) Avoid Returning Pointers to Local Variables: Do not return addresses of local variables from functions
3) Be Careful with Scope: Ensure that pointers do not outlive the variables they point to

By being careful with pointer management, you can avoid the pitfalls of dangling pointers and ensure your programs behave correctly.

