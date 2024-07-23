# examples-and-tasks

## Running C Projects (install gcc compiler first if you are on Windows)
_May slightly vary for different OS_

1. Clone the project to your computer from Github using the command:
```
git clone git@github.com:Anastasy-ya/small-examples-and-tasks.git
```
2. To run the program in the structure folder, navigate to the folder
```
cd .\c_lang\structure\
```
3. Build the project, the program will automatically create the Quest.exe file
```
make
```
4. Run the project:
```
.\Quest.exe
```
5. To compile files without a Makefile, use the gcc compiler, replacing the filename
```
gcc -Wall -Werror -Wextra .\ball_mass.c
```
6. Run the project:
```
.\a.exe
```
7. Enter the input values, press enter:
```
```

## Running Bash Script for Linux-like Operating Systems

Run the project, providing a text file for editing, a search string, and a replacement string:
```
./edit_text_file.sh ./text.txt old-text new-text
или 
sh edit_text_file.sh ./text.txt old-text new-text
```

