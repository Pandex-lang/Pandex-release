#include "comment.c"

#define LONG_MAX 1000*1000*1000

#ifndef level
#define level 0
#endif

void delChar(char*,char);

typedef struct {
    char*name;
    char*arg_name;
}corrent_fn;

typedef struct {
    corrent_fn fn;
    unsigned long int line;


}Info;

int main(int argc , char **argv){
    char str[LONG_MAX];
    Info info;

    char*tok = strtok(str,"\n");

    info.line = 1;

    while(tok != NULL){
        if(strstr(tok,"main:")){
            char string[LONG_MAX];
            delChar(string,' ');

            info.fn.name = "main";
            info.fn.arg_name = argv[1];
            // delete string
            remove(string);
        }
        info.line += 1;
        tok = strtok(NULL,"\n");
    }
    printf("%ld",info.line);
}

void delChar(char*str,char ch){
    for(int i=0; i < strlen(str); ++i){
        if(str[i] == ch)
            str[i] = 0x7F;
    }
}