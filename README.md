# About time, the C++ journey begins...

## The Cherno Notes

### Intro
* main() function returns 0 by default
* << is overload function
* #include is a preprocessing statement (copies and pastes header file contents into source file)
* compiler converts source files (.cpp) to object files (.obj)
* linker combines object files into .exe file (machine code)
* #define allows us to give a name to a constant value before the program is compiled
* #if #endif preprocesser statements allow us to control compilation of portions of a source file
* C -> compile errors, LNK -> link errors
* linking is process of combining declarations (function exists) and definitions (function implementations) together to form one entry point into the application
* there must be an entry point to the program for it to run (almost always main)
* static is used to define functions with internal linkage scope ie. this function is only used in this file and not elsewhere!
* linking functions takes into consideration the return type and parameters as well, not just the function name!
* duplicate functions are ambiguous and also cause linking errors!
* 
