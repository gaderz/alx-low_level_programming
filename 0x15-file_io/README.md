# C FILE INPUT AND OUTPUT (I/O)

* File I/O in C allows you to work with files on your computer. You can read from a file, write to a file, and modify the contents of a file. This is useful for a variety of tasks, such as processing data stored in files or generating reports

* There are two main types of file I/O in C: text file I/O and binary file I/O. Text file I/O is used to read and write text files, which consist of human-readable characters. Binary file I/O is used to read and write binary files, which consist of machine-readable data.

* To perform file I/O in C, you first need to open the file. This is done using the fopen() function, which takes two arguments: the name of the file to open, and the mode in which to open the file. The mode can be "r" for reading, "w" for writing, or "a" for appending. You can also use other flags to specify additional options, such as whether to create a new file or whether to truncate an existing file.

* Once you have opened the file, you can use various functions to read or write data. For example, to read data from a file, you can use the fscanf() or fgets() functions. To write data to a file, you can use the fprintf() or fputs() functions.

*  When you are finished working with a file, you should close it using the fclose() function. This ensures that any changes you have made to the file are saved and that the resources associated with the file are released.

* Overall, file I/O in C provides a powerful and flexible way to work with files on your computer. It is a fundamental skill for many programming tasks, and is essential for tasks such as data processing and report generation.
