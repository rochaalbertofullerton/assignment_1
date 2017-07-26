/*

Alberto Rocha berto323@csu.fullerton.edu

Serial Downloader

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

                /* Prompt the user to enter the command */

                cerr << "cmd>";
                cin >> cmdBuff;

                /* If the user wants to exit */

                if(cmdBuff != "exit"){

                        /* TODO: Create a child */
                        pid = fork();

                        if(pid <  0){

                                cout << "child could not fork()" << endl;
                                exit(1);

                        }
                        else if(pid == 0){


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