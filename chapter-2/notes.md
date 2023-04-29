# Chapter 2 - Objects, Functions, and Types

- "The C language also has pointsers which can be thought of as an address.
- Function pointers and object pointers are not the same thing.

- When passing a value into a function, it is the **VALUE** and not the reference.

```c
// Overwrites the value
*pa = *pb;
```

```c
// Passes in the address
swap(&a, &b);
```

- Boolean values can be initialized with either `_Bool` or `bool`, with `bool` being a new standard that allows the words "true" and "false."

- Can support integers, enums, and floating point values.
