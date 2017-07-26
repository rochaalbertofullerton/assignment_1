/*

Alberto Rocha berto323@csu.fullerton.edu

Serial Downloader

files needed: url.txt

July 25, 2017


*/
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {


        pid_t pid = -1 ;


        string temp; // temp will be used to hold the current line that was read
        ifstream file; // createing the varible to read the file
        file.open("url.txt"); // open the file

        if (!file){

                cout << "Could not open file" << endl;
                exit(1);

        }


        while( file >> temp ){

                pid = fork();
                if(pid < 0){

                        cout << "child could not ne fork() " << endl;
                        exit(1);

                }
                else if(pid == 0){


                        execlp("wget", "wget", temp.c_str(), NULL);

                }
                else{

                        wait(NULL);
                }
        }
        file.close();                                                                                         

        return 0;
}
