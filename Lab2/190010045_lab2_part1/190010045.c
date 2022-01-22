#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
int main(){
    char word[]="Hello World";//Word
    for(int i=0;i<strlen(word);i++){
        int pid=fork();
        if(pid>0){
            printf("%c %d\n",word[i],pid);//print
            int ra_num=rand()%3+1;
            sleep(ra_num);
        }
        else{
            break;//To end the process
        }
    }
    return 0;
}
