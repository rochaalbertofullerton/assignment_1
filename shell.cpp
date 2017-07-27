/*

Alberto Rocha berto323@csu.fullerton.edu

Shell

files needed: NONE

July 25, 2017


*/
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <paths.h>
using namespace std;

 int main() {


        string cmdBuff;          // comment buffer
        pid_t pid;              // ID of child process

        do{

               // ask the user for the command and store it in cmdBuff
                cerr << "cmd>";
                cin >> cmdBuff;
         
                // check if the user wants to continue or exit the program
                if(cmdBuff != "exit"){

                        pid = fork();

                        
                        if(pid <  0){

                                cout << "child could not fork()" << endl;
                                exit(1);

                        }
                        else if(pid == 0){

                                // check if the command the user entered was found or valid
                                if(execlp(cmdBuff.c_str(), cmdBuff.c_str() , NULL)== -1){

                                        cout << " cmd not found" << endl;
                                }
                        }
                        else{

                                wait(NULL);

                        }
                }
        }
        while(cmdBuff != "exit");

        return 0;
}                        
