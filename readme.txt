Alberto Rocha	berto323@csu.fullerton.edu
Kristi Chang	kristi.chang@csu.fullerton.edu
July 26, 2017

*****************************************************************************
Language:

	Programming Language C++

*****************************************************************************
How to Compile and Execute the programs:

	Things you need:
		- file: url.txt
		- g++ compiler
		- c++ knowledge
		- UNIX based system

	Compile the programs:

		1. open a terminal

		2. change to directory (if need to run command: cd [directory name]) where you have the serial.cpp, 
		parallel.cpp and shell.cpp files

		3. to compile the code run this command on the terminal
		example:		g++ [file name] -o [output file name without extension]
		run these commands:	g++ shell.cpp -o shell
					g++ serial.cpp -o serial
					g++ parallel.cpp -o parallel

	Execute the programs:
	
		 The files: 
			- shell
			- serial
			- parallel
   		should appear in the working directory without any extensions.
		
		Run the programs:
			example: ./[file]
			run these commands to run the programs
				./shell
				./serial
				./parallel

***************************************************************************
How do they work do:

	How does shell work:

		After you run the ./shell command you will get and "cmd>" will appear. You can enter 
		any UNIX based command.  

			cmd> [command]

     		If you get "cmd not found" then the command was not recognized by your system.
	
			cmd> [command
			 cmd not found
			 
		so long as you keep entering command the program will continue in a loop. 
		To end the program enter the command "exit"
		
			cmd> exit
	
   	How do serial and parallel work:
		
		File you need:
			- url.txt (contains url links)

		After you run the ./serial or ./parallel 

			There will be no user input for these two programs. All you need is the url.txt file.
			Both of these programs will read from url.txt and get the data from those urls. Both 
			programs will self terminate after they display information onto the console. 

			Edit url.txt
			
				add the complete link to the file and then press enter (newline "/n").
				Save it.
				
		The differnce between serial and parallel:
			
			serial and parallel do the same thing download files from the web; however,
			the method used to download the file is different.

		Time:
			
			you can run a command to look at the time it took the program to execute,
			user time and system time.
			
				example: 		time ./[file]
				run these commands:	time ./serial
							time ./parallel 
				example output:		real 0m26.054s
							user 0m0.278s
							sys  0m0.256s
							
****************************************************************************
The execution times(4 urls): 

		Serial:
		real 0m37.998s 
		user 0m0.287s
		sys  0m0.247s

		Parallel:
		real 0m26.054
		user 0m0.278s
		sys  0m0.256s

**************************************************************************
The execution times(10 urls): 
		
		Serial:
		real 1m3.367s
		user 0m0.654s
		sys  0m0.478s
		
		Parallel:
		real 0m28.487s
		user 0m0.680s
		sys  0m0.871s

**************************************************************************
Questions:

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
Presenting: NO

	We will NOT be volunteering  to presenting on the 27th

**************************************************************************
Anything Speical: YES
	
	-There are two files the url.txt file which contains the 4 url links
		this is the one that is hard code to the serial and parallel
	-There is also urls.txt which is not hard coded into serial and parallel
		that one has 10 links that was used for question 4
	

*************************************************************************
Hard Times: YES


	Alberto: 
		There were some hard times trying to understand fork(). I used the 
	 	manual to understand it. I also learned getpid() and getppid() to better 
		understand what was going in the system. 
		source:
			fork(): http://man7.org/linux/man-pages/man2/fork.2.html
			getpid(): http://man7.org/linux/man-pages/man2/getpid.2.html





