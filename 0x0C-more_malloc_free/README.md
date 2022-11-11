# C - More malloc, free

In this project, I learned about using , , and  in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written in
the project.

| File                 | Prototype                                                                  |
| -------------------- | -------------------------------------------------------------------------- |
|  |                                     |
|  |                 |
|          |                 |
|     |                                       |
|       |  |

## Tasks :page_with_curl:

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using .
    * If  fails, the function causes normal process termination with a status value
    of .

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains  followed by the first  bytes
    of , null-terminated.
    * If  is greater than or equal to the length of , the entire string  is used.
    * If  is passed, the function treats the parameter as an empty string.
    * If the function fails - returns .

* **2. _calloc**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using .
    * Allocates memory for an array of  elements of  bytes each.
    * The memory is set to zero.
    * If  = 0,  = , or the function fail - returns .

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters  to , inclusive,
    ordered from  to .
    * If  or the function fails - returns .

* **4. _realloc**
  * [100-realloc.c](./100-realloc.c): C function that reallocates a memory block using
   and               total        used        free      shared  buff/cache   available
Mem:       16095660     3176544      534076        3416    12385040    12596872
Swap:       8388604       28188     8360416.
    * The parameter  is a pointer to the memory previously allocated with
    a call to .
    * The paramter  is the size, in bytes, of the allocated space for .
    * The paramter  is the new size, in bytes, of the new memory block.
    * The contens of  are copied to the newly-allocated space in the range from the
    start of  up to the minimum of  and .
    * If  > , the added memory is not initialized.
    * If  == , the function returns .
    * If  is , the call is equivalent to  for all values of
     and .
    * If  = 0 and  is not , the call is equivalent to
     and the function returns .

* **5. We must accept finite disappointment, but never lose infinite hope**
  * [101-mul.c](./101-mul.c): C program that multiplies two positive numbers.
    * Usage: .
    * The function assumes  and  are passed in base 10.
    * Prints the result followed by a new line.
    * If the number of arguments is incorrect or either of  or 
    contains non-digits, the function prints  followed by a new line and
    exits with a status of .
