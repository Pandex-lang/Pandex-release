#include "comment.c"

int main(int argc , char *argv[]){
    auto char str[1024];
    auto int i = 6; // in the puts statement
    fileToText(argv[1],str);
    //printf("%s",str);
    //char sl[1024];
    //char *dest = strstr(str, "main:\n");
    //int pos;
    //pos = dest - str;
    comment(str);
    char code[1024];
    //printf("%s",code);
    char*tok=strtok(str,"\n");
    while(tok!=NULL){
        if(tok[0]=='p'&&tok[1]=='u'&&tok[2]=='t')
            switch(tok[3]){
                case 'c':
                    printf("%c",tok[6]);
                    break;
                case 's':
                    while(token[i] != '"'){
                        printf("%c",tok[i]);
                        i+=1;
                    }
                    //printf("wil Support in later");
                    break;
                default:
                    printf("Undefined");
            }
        if(tok[0]=='v'&&tok[1]=='a'&&tok[2]=='r')
            switch(token[5]){
                case 0x7F:
                    printf("Unsupported");
                    break;
                default:
                    printf("UNSUPPORTED IN THIS VERSION");
            }
        tok=strtok(NULL,"\n");
    }
    return 0;
}