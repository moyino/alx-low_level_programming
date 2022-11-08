# C - malloc, free

In this project, I learned about the difference between automatic
and dynamic location as well as how to use ,               total        used        free      shared  buff/cache   available
Mem:       16095672     3516888     2521920        5204    10056864    12252712
Swap:       8388604        6912     8381692, and  in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written
in the project.

| File               | Protoype                                         |
| ------------------ | ------------------------------------------------ |
|  |  |
|        |                       |
|    |           |
|    |        |
|     |         |
|     |             |
|      |                       |

## Tasks :page_with_curl:

* **0. Float like a butterfly, sting like a bee**
  * [0-create_array.c](./0-create_array.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of characters.
    * The array of characters is initialized to the parameter .
    * If the function fails or receives  equal to  - returns .

* **1. The woman who has no imagination has no wings**
  * [1-strdup.c](./1-strdup.c): C function that returns a pointer to a newly-allocated space
  in memory containing a copy of the string passed as parameter.
    * Returns a pointer to a new string which is a duplicate of the string .
    * Memory for the new string is obtained with  and can be freed with               total        used        free      shared  buff/cache   available
Mem:       16095672     3516780     2520660        5204    10058232    12252820
Swap:       8388604        6912     8381692.
    * If  is  or insufficient memory was available - returns .

* **2. He who is not courageous enough to take risks will accomplish nothing in life**
  * [2-str_concat.c](./2-str_concat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings passed as
  parameters.
    * The returned pointer contains the contents of  followed by  and is
    null-terminated.
    * The function treats  as an empty string.
    * If the function fails - returns .

* **3. If you even dream of beating me you'd better wake up and apologize**
  * [3-alloc_grid.c](./3-alloc_grid.c): C function that returns a
  pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
    * Each element of the two-dimensional array is initialized to .
    * If the function fails or either of  or  is
     or negative - returns .

* **4. It's not bragging if you can back it up**
  * [4-free_grid.c](./4-free_grid.c): C function that frees a two-dimensional array previsouly
  created by the  function defined in .
    * The program does not crash upon receiving invalid two-dimensional arrays.

* **5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**
  * [5-argstostr.c](./5-argstostr.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of all the arguments of the
  program.
    * Each argument is followed by a  in the new string.
    * If , , or the function fails - returns .

* **6. I will show you how great I am**
  * [100-strtow.c](./100-strtow.c): C function that splits a string into words.
    * Returns a pointer to a newly-allocated space in memory containing
    an array of strings (words).
    * Each element of the array of strings contains a single word, null-terminated.
    * The last element of the returned array is .
    * Words are separated by spaces.
    * If , , or the function fails - returns .
