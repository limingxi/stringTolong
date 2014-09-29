1. Requirement:
	The makefile uses g++ as default compiler, if you want to use
	other compilers, you should change makefile or use the two source
	files to build another project.
2. Files:
	main.cpp: the main program to test the code.
	stringToLong.h: stringToLong() function implemented in this file.
	makefile: used for make
	README.txt: the readme file
3. Usage:
	In the command line, type in "make" and type enter.
	Now we have the file called "main" as an executable file.
	Either run "./main" or "make run" will start the program.
4. Additional:
	Since I used c++ as my programming language, I tested the long type
	on my machine and I found that long is int64 on my machine. Maybe
	this fact can vary due to compilers and machine types. So I added
	an instruction in the main program which can tell users the range
	of input. Also I added a "trim" function as a preprocessor on the
	input. And this program can handle the "+" or "-" at the beginning
	of input. However, any other charactors will make the input an
	invalid input
