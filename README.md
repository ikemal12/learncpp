# About time, the C++ journey begins...

## The Cherno Notes

### Intro
* main() function returns 0 by default
* << is overload function
* #include is a preprocessing statement (copies and pastes header file contents into source file)
* compiler converts source files (.cpp) to object files (.obj)
* linker combines object files into .exe file (machine code)

### Compiling
* #define allows us to give a name to a constant value before the program is compiled
* #if #endif preprocesser statements allow us to control compilation of portions of a source file
* C -> compile errors, LNK -> link errors

### Linking
* linking is process of combining declarations (function exists) and definitions (function implementations) together to form one entry point into the application
* there must be an entry point to the program for it to run (almost always main)
* static is used to define functions with internal linkage scope ie. this function is only used in this file and not elsewhere!
* linking functions takes into consideration the return type and parameters as well, not just the function name!
* duplicate functions are ambiguous and also cause linking errors!

### Variables
* int is 4 bytes -> values range from -2^31 to 2^31
* you can define/initialise unsigned int using the unsigned keyword -> can store values from 0 to 2^32
* char (1 byte), short (2 bytes), int (4 bytes), long (4 bytes), long long (8 bytes) -> unsigned can be used with any of these
* float type can be used to store decimals (4 bytes) -> need to add 'f' after value to indicate its a float eg. `float num = 5.5f;`
* double stores decimals as well but 8 bytes
* bool keyword used for booleans (1 byte)
* note these are primitive data types but they all boil down to storing numbers (even char!) and in essence the only difference between them is their size in memory
* use sizeof to get the size of a data type (in bytes), eg. sizeof(double) = 8
* references (&) and pointers (*) hinted at, coming later...

### Functions
* main purpose to reduce code duplication and ease of maintainability
* main is a special type of function that doesnt have to return anything (will return 0 by default)
* all other functions must return something -> what their return type is 
* two types -> declarations in header files and definitions in source files

### Header Files
* #pragma once is a preprocessor directive used to prevent header files from being included multiple times in a single source file
* #ifndef #define #endif does the same thing (commonly known as include guard) -> if macro eg MYCLASS_H has not been defined yet then include the code between #ifndef and #endif otherwise skip it
* #pragma once is more modern convention
* using quotes eg #include "log.h" is path relative to the file eg #include "../log.h" means go one directory up and include the log.h file there
* on the other hand angular brackets eg #include <iostream> should be used only for compile include paths

### Debugging (some things are Visual Studio specific but concepts are the same)
* breakpoints pause execution of program at certain line(s), very useful to execute code line by line
* very useful for reading memory to see value of variables at each point in time

### Conditionals
* conditional statements ultimately break down to a 0 or 1 check eg if (1) or if(0) depending on the condition in the brackets, and that determines if the code in the block is included at compilation or not
* can be more concise eg if (x) std::cout << "Hello!" << std::endl

### Loops
* 

