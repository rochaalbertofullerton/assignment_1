Alberto Rocha	berto323@csu.fullerton.edu
Kristi Chang	kristi.chang@csu.fullerton.edu
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

The execution times: (4 urls)

	Serial
real> 0 min 37.998 sec
user> 0 min 00.287 sec
sys > 0 min 00.247 sec

	Parallel
real> 0 min 26.054 sec
user> 0 min 00.278 sec
sys > 0 min 00.256 sec

**************************************************************************
The execution times: (10 urls)
Parallel:
--------
real    0m28.487s
user    0m0.680s
sys     0m0.871s

Serial:
-------
real    1m3.367s
user    0m0.654s
sys     0m0.478s

**************************************************************************

Questions

1. In the output of time, what is the difference between real, user, and sys times?

Real time is the total elapsed time from the start to the termination of the call.

User time is the amount of CPU time spent executing the process in user mode.

Sys time is the amount of CPU time spent executing the process in the kernel.

2. Which is longer: user time or sys time? Use your knowledge to explain why.

The sys time is longer than user time, since the user starting a system call takes less time than it takes to process it.

3. When downloading the files above, which downloader finishes faster? Why? Please Explain.

The parallel downloader finishes faster since it uses a parallel structure to download multiple files simultaneously. The serial downloader downloads the files one at a time, which takes longer.

4. Repeat the experiment for 10 files (any reasonably large-sized les, e.g., 100 MB, will do). Is the downloader in the previous question still faster? If not so, why? Please Explain.

The parallel downloader is still faster since it runs multiple processes at the same time.

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





