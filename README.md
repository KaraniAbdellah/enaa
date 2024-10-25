# 📌 0. Introduction & Setup

## Definition
A Makefile is a script that helps automate the process of compiling code. 
It sets rules for building and linking your code files, 
making it easy to compile a program by just running `make`.

## Setup
- **In Linux:** Run `sudo apt install make`
- **In Windows:** MinGW already includes `make`.

## Create File
You should create a file named `makefile` or `Makefile` in your project.


# 📌 1. Basic Makefile Structure
each makefile has this structure:
	
```bash
target: dependencies
	commands
```
	
<b>Example</b>

``` bash
build: test
gcc main.c -o main
test: 
echo "Hello World"
```

<b>Output</b>

```bash
$ make
echo "Hello World"
Hello Worlds
gcc main.c -o main
```

Note: for <code>target</code> can be label like "build" or filies

	
# 📌 2. Variables in Makefile
variables store values, and we call it using $(varName).

<b>Exemple</b>

```bash
NAME = main
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = main.c test.c 
OBJ = $(SRC:%.c=%.o)


build: $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
```

<b>Output</b>

```bash
gcc -Werror -Wextra -Wall   -c -o test.o test.c
gcc -Werror -Wextra -Wall main.c test.c  -o main
```

# 📌 3. Pattern Rules

each pattern start with `%`, and allow you to define 
implicit rules for building targets based on thier names


<b>Example</b>

``` bash
%.o: %.c
echo "Hello World"
```

`%.o:` represents any file with the .o extension (object file).
`%.c:` represents any file with the .c extension (C source file).	 


# 📌 4. Automatic Variables

Here are a few automatic variables often used in Makefiles:

<ul>
	<li>`$@`: The target name.</li>
	<li>`$<`: The first dependency.</li>
	<li>`$^`: All dependencies.</li>
</ul>

<b>Exemple</b>

``` bash
my_program: main.o utils.o
gcc -o $@ $^
```

In this case, `$@` expands to my_program, and `$^` expands to main.o utils.o.

"The Power of make file he compile just the changed filies"














