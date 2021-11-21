#include "modules.h"
#include "colors.h"

//Center texts

void centerPrintf(char*string, boolean bool){

    int space = (100 - strlen(string)) / 2;

    char print[99];

    if(bool == TRUE){
        for (int i = 0; i < 100; i++){
        print[i] = i >= space && i < space + strlen(string) ? string[i - space] : '=';
    } 
    }else{
        for (int i = 0; i < 100; i++){
        print[i] = i >= space && i < space + strlen(string) ? string[i - space] : ' ';
    }
    }

    for(int c = 0; c < 100; c++){
        if(print[c] != ' '){
            Sleep(40);
            printf("%c", print[c]);
        }else{
            printf("%c", print[c]);
        }
    }
    printf("\n");

}
// Home screen function
void titleInit(){
    
    printf("\n\n\n\n\n\n\n\n\n\n");

    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Educational game in C", FALSE);
    printf(ANSI_COLOR_GRAY );

    centerPrintf("By: Angelo Menti, Artur Martins, Fernando Pimmel", FALSE);

    

    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Have fun!", FALSE);
    printf(ANSI_COLOR_GRAY);

    Sleep(1500);
    system("cls");

}

void menuGame(){

}