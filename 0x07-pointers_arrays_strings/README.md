# Even More Pointers, Arrays, and Strings in C #


## Introduction ##

Welcome to the "C - Even more pointers, arrays and strings" project! This project builds on the concepts covered in the "C - Pointers, arrays and strings" project and dives deeper into the world of pointers, arrays, and strings in C programming language. In this project, you will learn about multidimensional arrays, pointers to pointers, dynamic memory allocation, and advanced string handling techniques.

## Prerequisites ##

Before you begin this project, you should have a good understanding of the following concepts:

* Pointers and memory management in C

* Arrays and strings in C

* Basic C programming constructs such as loops, conditional statements, functions, and structures


# TASK 0 #

### Welcome to the "Fill Memory with Constant Byte "project"  ###

* This is a function in C programming language that fills a block of memory with a constant byte

* This can be useful in many applications, such as initializing arrays or clearing memory before reuse.

## Function Signature ##

### The function signature for the "fill memory with constant byte" function is as follows:

* This function takes a pointer to the memory block to be filled,

* the value of the constant byte to be used, 

* And the number of bytes to be filled.

# TASK 1

## Memory Copying Function

The memory copying function is used to copy a specified number of bytes from one memory location to another.

This function takes three arguments:

## Parameters ##

* dest: Pointer to the memory location where the copied data will be stored.

* src: Pointer to the memory location from which the data will be copied.

* n: Number of bytes to be copied.

### Return Value ###

This function does not return a value.


# TASK 2 #

## locate-character ##

* This function takes in a string and a character as inputs and searches for the first occurrence of the character in the string. 

* It does so by looping through each character in the string and checking if it matches the input character. 

* If a match is found, the function returns the index of that character. 

* If no match is found, the function returns -1 to indicate that the character was not found in the string.


# TASK 3

## prefix-length ##

* This function takes in a string and a prefix substring as inputs and returns the length of the prefix substring in the input string. 

* It does so by checking if the input string starts with the prefix substring. 

* If it does, the function returns the length of the prefix substring. 

* If it doesn't, the function returns 0 to indicate that the prefix was not found in the input string.

_Input: A string (input_str) and a prefix substring (prefix)_

_Output: The length of the prefix substring in the input string. If the prefix is not found in the input string, return 0._



# TASK 4 ##



## search-bytes-in-string ##

* The search_bytes-in-string function takes a string and a set of bytes as inputs. 

* It searches the string for any byte in the byte-set and returns True if at least one byte is found, otherwise it returns False. 

* The function uses the built-in Python function 'any' to check if any byte in the byte-set is present in the string.

## Function inputs: ##

* string: A string to search for a set of bytes (string)
* byte-set: A set of bytes to search for in the string (set of bytes)

## Function output: ##

* boolean: Returns True if any of the bytes in the byte-set are found in the string, otherwise False


# TASK 5

##  locate-substring ##

* The locate-substring function takes two string inputs: a main-string to search for a sub-string within, and the sub-string to locate within the main-string. 

* The function uses the built-in Python string method 'find' to search for the sub-string in the main-string, 

* which returns the index of the first occurrence of the substring, or -1 if the substring is not found.

## Function inputs: ##

* main-string: A string to search for a substring (string)

* sub-string: The substring to locate within the main-string (string)

## Function output: ##

* integer: Returns the index of the first character of the substring in the main-string, or -1 if the substring is not found.



# TASK 6 #


## print-chessboard ##

* The print-chessboard function prints an 8x8 chessboard to the console using ASCII characters. 

* The board is printed with alternating black and white squares, represented by the characters " " (space) and "#" respectively. 

* The function uses a nested loop to print each row and column of the chessboard.

# TASK 7 #

## print-diagonal-sums ##

* The print-diagonal-sums function takes a square matrix of integers as input and calculates the sum of the two diagonals of the matrix. 

* The function uses two variables, one for each diagonal, to keep track of the running sum of the values on each diagonal. 

* The function then prints the sum of the two diagonals to the console.


# TASK 8 #

## set-char-pointer ##

* The set-char-pointer function takes in a pointer to a char and a value to be set, and sets the value of the pointer to the given value

## Function input: ##

* Pointer to a char (char *)

* Value to be set (char)

## Function output: ##

* None


