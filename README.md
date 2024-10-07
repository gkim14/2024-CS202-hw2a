# Box Classes

These series of classes will create a string of characters that can be printed as a box. The classes `HollowBox`, `FilledBox`, and `FancyBox` are all derived from the abstract class `Box`. 

## Class Structure

![UML class](https://github.com/user-attachments/assets/e3e693b5-d9d3-4f8c-8fad-c9cfcb0b7b9d)


`Box` has a constructor that takes two parameters, `int width` and `int height`, which all the other classes inherit. `HollowBox` also takes an additional parameter, `char border`, that `FilledBox` inherits from it, which it will use to draw the box. 



## Examples

Below are examples of various initializations of each box and the string their `asString()` generates.

```
HollowBox box(10,5,'*');

**********
*        *
*        *
*        *
**********
```

```
FilledBox box(5,5,'x');

xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
```

```
FancyBox box(20,5);

╓──────────────────╖
║                  ║
║                  ║
║                  ║
╙──────────────────╜
```
