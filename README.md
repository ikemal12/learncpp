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
* simple for loop -> for (int i = 0; i < 5; i++) { // do something}
* simple while loop -> int i=0; while (i < 5) { i++ //do something}
* also one more type called do-while loop:

```
do {
    // executes at least once
} while (condition);
```

### Control Flow 
* `continue` skips to the next iteration of a loop
* `break` breaks out of the loop completely 
* `return` exits a function immediately, sending a specified value back to the code that called it

### Pointers
* pointer is just an integer/number that represents an address in memory
* note you cannot read from address 0 - its not a valid pointer value -> same with NULL and nullptr
* use `*` before the variable to indicate its a pointer -> eg. `void* ptr`  
* use `&` to get the memory address of a variable:
```
int var = 8;
    void* ptr = &var;
```
* if you put `*` in front of a pointer, this is known as dereferencing and will access the data that the pointer points to 
* types help the compiler know how much memory to assign a pointer/variable
* if you put `**` that initialises a pointer to a pointer (double pointer)

### References
* in short, a reference is just a pointer (albeit with some syntactical sugar)
* eg making a reference to point to an already existing variable doesnt create a new variable for the reference -> its simply an alias for the variable ie. from a high level just another name for it
* you cannot change a reference to point to another variable (you can with pointers though)
* references must be assigned a value when initialised

### Classes
* help to encapsulate data into a type
* class is an object from which you instantiate instances of that object eg. `Player player;`
* by default all data/members of a class are private, meaning the class itself can access the data
* if you want to access/modify data from outside the class you have to use public
* in summary classes allow us to group variables together and add functionality (methods) to form a type
* important note: classes are for programmers - they dont add any new functionality we could do without them - just a way for us to structure and better maintain our code

### Structs
* a struct (structure) is literally a class but with one key difference -> its members/data is public by default, not private
* when to use class vs struct? there is technically no right way, but typically use class for more complex objects with lots of data/functionality and needs other features like inheritance etc and struct for more simple data eg vec storing 2 coordinates

### Static
* static keyword can have 2 meanings depending on the context
* first one is if its used outside a class/struct then that symbol declared as static will only be visible to that file you have defined it in
* whereas inside class/struct makes attributes/methods belong to class/struct itself instead of instances of the class/struct -> the attribute/method is shared between all instances of the class/struct 
* extern keyword helps to declare a variable but tell the linker that its value is stored in another file
* just think of static outside a class as marking that variable/function as private to that file
* typically things should be marked as static unless you need them to be global, as otherwise it could introduce some bad bugs
* static within classes/structs for variables means those variables are shared across all instances so they point to the same memory
* you also have to declare those static variables eg. `int Entity::x;`
* important to note that static methods cannot access non static variables within a class/struct -> its the same as if you defined the method outside the class -> they dont have access (a parameter) to the class instance

### Enums
* Enum (short for enumeration) is just a set of values that you want to group together
* once you declare an enum you can use the enum name as the actual type
* if you dont specify the values by default the first one will start with 0 and increment up eg. `A=0, B=1, C=2`
* you can also specify which type of integer you want an enum to be eg. `enum Example : unsigned char`
* enums by default are 32-bit integers, however if you specify a type then you can use less memory like 8 bits for unsigned char
* at the end of the day, enums are just integers -> whenever you have a set of values you want to represent numerically, use enums

### Constructors
* constructor is a special type of method which runs everytime we instantiate an object
* constructors must match the name of the class -> note they dont have a return type
* if you dont specify a constructor, it will provide a default constructor which is empty and doesnt do anything -> important! you must manually initialize all your primitive types otherwise they will be set to whatever was leftover in that memory (which is usually not a good thing!)

### Destructors
* evil twin of constructors -> basically does the opposite so called whenever you destroy an object (ie. goes out of scope) -> cleans up variables and frees up memory
* use the tilde `~` before the destructor name eg. `~Entity() {}` to declare a destructor

### Inheritance
* allows us to create sub classes from a base class -> avoid code duplication and allows us to create extended functionality
* just use colon followed by class name to inherit from another class eg. `class Player : public Entity` and the Player class will inherit all public features from the base Entity class

### Virtual Functions
* allow us to overwrite methods within subclasses
* virtual functions do something called dynamic dispatch which is implemented by a vtable -> contains a mapping for all the virtual functions in our base class so that we can map them to the correct overwritten function at runtime
* to override a base function in the base class, just put the `virtual` keyword in front of it, eg. `virtual std::string GetName()`
* its also good practice to mark the overriden function using `override` keyword, eg. `std::string GetName() override {return m_Name;}`
* note virtual functions come with runtime costs -> first extra memory from storing vtable and second from actually searching the vtable for the virtual function to map to

### Interfaces (Pure Virtual Functions)
* pure virtual function is a virtual function (base function in a base class) for which we do not have an implementation 
* this means it has to be implemented in a subclass if you want to be able to instantiate that class
* to declare a pure virtual function set it to 0, eg. `virtual std::string GetName() = 0;`
* note in C++ interfaces are just implemented as classes (other languages have interface keyword but c++ does not)
* useful for guaranteeing a class has a certain function so you can use it elsewhere

### Visibility
* refers to how visible certain members or methods of a class actually are ie. who can see them, call them etc.
* 3 basic visibility modifiers -> `public`, `private` and `protected`
* remember classes are private by default meaning neither subclasses nor anything outside the class can access, whereas structs are by default public meaning they can be accessed from anywhere
* `protected` provides a middle ground -> means you can access from subclasses but not anywhere outside the class or subclasses
* remember that visibility does not affect functionality or performance -> it is simply for developers to help readability and understanding your code and for others to understand your code

### Arrays
* collection of variables
* stored contiguously in memory
* an array is just an integer pointer to some memory block
* indexing an array is just offsetting from the start of this integer pointer, eg. example[2] will access an offset of 8 bytes from the pointer
* you can also declare arrays on the heap, eg. `int* example = new int[5];`
* difference between stack and heap is the lifetime and also the pointers in memory (heap contains pointers in the memory instead of the actual data)
* note with std::array in C++11 you get more features like bounds checking and functions like size ->whereas with raw arrays on the stack you can use `sizeof()` but it returns the number of bytes not the number of elements in the array 

### Strings
* group of characters -> text
* more specifically in c++ a string is just an array of characters
* in memory there is a null termination character eg. 00 that indicates the end of the string in memory
* characters are defined by single quotes `'` in C++ and double quotes `"` indicate a char pointer
* whenever you pass a string to a function pass it by const reference eg. `const std::string& str` so it doesnt get copied or modified

### String Literals
* series of characters inbetween double quotes `"..."`
* note that string literals are stored in a read only section of memory
* trying to modify a char pointer string is undefined behaviour 

### Const
* for defining visibility of variables to developers -> makes code cleaner
* a promise that something is going to be constant (ie wont change) -> but remember this is not a hard rule as the promise can be broken!
* you can use const with pointers to indicate that the contents at that pointer should not be changed
* you can also specify class methods to be const which means they cant modify any data within the class eg. getters, other read-only methods etc.
