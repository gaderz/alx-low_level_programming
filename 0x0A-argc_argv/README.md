# C - ARGC, ARGV #


## In the C programming language, argc and argv are two parameters typically used in the main function. ##

* argc is an integer that represents the number of command-line arguments passed to the program when it is executed.

* argv is an array of strings (i.e., an array of character pointers) that contains the actual arguments passed to the program. 
  The first element (argv[0]) is typically the name of the program itself, 
  while subsequent elements (argv[1], argv[2], etc.) are the arguments passed to the program.

* Together, argc and argv can be used to create command-line interfaces for C programs, 
  allowing users to pass information to the program when it is executed. By parsing the contents of argv, 
  a program can determine what actions to take or what information to display.
