#include<bits/stdc++.h>
#include<dirent.h>

using namespace std;
struct dirent* dptr;

int main(){

    char buffer_Directory[100];
    DIR *myDir;

    cout << "Enter the directory name : ";
    cin >> buffer_Directory;

    myDir = opendir(buffer_Directory);
    
    if(myDir == NULL){
    
        printf("The entered Directory Does not exist :( \n");
        return 0;
    }
    else{

        printf("Directory OPENED Succesfully :) \n");
    }
    //PRINTING

    while(dptr = readdir(myDir)){
        cout << dptr->d_name <<endl;
    }



    return 0;
}