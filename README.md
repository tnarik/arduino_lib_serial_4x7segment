# Use
Use as ```SPI7Segment```.

# To compile/check/test this project

In order to be able to compile/check this project with the minimal ammount of code possible, follow these steps:

1. Create a wrapper Arduino project (named ```<lib project name>_wrapper```, for instance, in Eclipse).
2. Import this project directly onto the wrapper as a folder (```./<lib project name>```).
3. Import the Arduino libraries used by this project into the wrapper. Currently these libraries are:
    * ```SPI```
    
# To use this library
You have several ways of installation:

* Directly into the Arduino IDE private libraries.
* As a direct project in your Eclipse workspace with a link created in the Arduino IDE private libraries.
* As a wrapper project in your Eclipse workspace with a link created in the Arduino IDE private libraries.

In any case, for consistency, create the link or the container folder as ```SPI7Segment```.
