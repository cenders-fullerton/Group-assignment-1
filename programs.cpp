#include "programs.hpp"
#include <iostream>
#include <sys\stat.h>
#include <dirent.h>
#include <conio.h>
using namespace std;

void dir(){
    struct dirent *d;
    struct stat dst;

    DIR *dr;

    string path = ".\\";

    if (dr != NULL) {

        for (d = readdir(dr); d != NULL; d = readdir(dr)) {
            string type = d ->d_name;
            type = path + type;

            if (stat(type.c_str(), &dst) == 0){

                if( dst.st_mode & S_IFDIR){
                    type = "Is a folder";

                }

                else if (dst.st_mode & S_IFDIR){

                    type = "Is a file";
                }



            }





        }
        cout << d->d_name<<endl;
    }
    closedir(dr);


}

void help(){
	
	}

void vol(){
	
	}	
void path() {
	
	}

void tasklist(){
	
	}

void notepad(){
	
	}
void echo(){
	
	}

void color(){
	
	}
	
void ping(){
	
	}
