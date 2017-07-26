Alberto Rocha berto323@csu.fullerton.edu

July 26, 2017

Programming Language: C++

*****************************************************************************

How to execute program:
	THINGS YOU NEED
	- file: url.txt
	- g++ compiler
	- c++ knowledge
	- linux based

below are the steps to take to run the program

1. open a terminal

2. change to dirictory (if need to run command: cd [dirictory name])  where you have the serial.cpp, 
parallel.cpp and shell.cpp files

3. to compile the code run this command on the terminal
example:		g++ [file name] -o [output file name without extension]
run these commands:	g++ shell.cpp -o shell
			g++ serial.cpp -o serial
			g++ parallel.cpp -o parallel

4. The files: 
	shell
	serial
	parallel
   should appear without any extensions. To run the code run the following commands
example: ./[file]
run these commands to run the programs
	./shell
	./serial
	./parallel
and the programs will now execute

***************************************************************************

How does SHELL program work

After you run the ./shell command you will get

cmd> [enter a command like ls, du, df]

     [if you get you get "cmd not found" then the process could not
	be completed; however if it does work then it will output 
	the information you requested and then output cmd>]
cmd> [exit]
	
    [exit will end the program and return to the terminal]
 
How does SERIAL and PARALLEL work
	What is the url.txt : 
		containes urls links

After you run the ./serial or ./parallel 

There will be no user input for these two progarms all you need is the url.txt file.
Both of these programs will read from url.txt and get the data from those urls.

The url.txt file can be edited to add or remove url links.
	To add a link: add the complete link to the file and then press enter (newline "/n")
			then save it.

The difference between serial and parallel is the method used to download the data

you can run [time ./serial] or time [./parallel] to get the time it takes to run each program

****************************************************************************

The execution times:

	Serial
real> 0 min 37.998 sec
user> 0 min 00.287 sec
sys > 0 min 00.247 sec

	Parallel
real> 0 min 26.054 sec
user> 0 min 00.278 sec
sys > 0 min 00.256 sec

**************************************************************************

We will NOT be volunterring to presenting on the 27th

**************************************************************************

There is nothing specail our submission that needs to be noted

*************************************************************************

Hard Times and Drama:

Alberto: There were some hard times trying to understand fork(). I used the 
	 manual to understand it. I also learned getpid() and getppid() to better 
	understand what was going in the system. 
source:

fork(): http://man7.org/linux/man-pages/man2/fork.2.html
getpid(): http://man7.org/linux/man-pages/man2/getpid.2.html





