/*

Alberto Rocha berto323@csu.fullerton.edu

Parallel Downloader

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
#include <vector>
using namespace std;

int main() {


        pid_t pid;
        vector<string> list;

        string temp; // temp will be used to hold the current line that was read
        ifstream file; // createing the varible to read the file
        file.open("url.txt"); // open the file

        if (!file){

                cout << "Could not open file" << endl;
                exit(0);

        }

        while( file >> temp ){

                list.push_back(temp);
        }



        for(int i = 0 ; i < list.size() ; i++){

                pid = fork();

                if( pid <  0 ){

                        cout << " A child could not be fork()" << endl;
                        exit(1);

                }

                else if(pid == 0){

                                                                                                              
                        execlp("wget", "wget", list.at(i).c_str(), NULL);
              }
       }

       file.close();

       for(int i = 0 ; i < list.size() ; i++){

                wait(NULL);

       }

       return 0;
}