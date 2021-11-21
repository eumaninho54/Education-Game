#include "modules.h"
#include "colors.h"

//Global var
int order = 0;

//Resize the terminal screen
void resizeScreen(){
    if(!system("mode con:cols=60 lines=30")){
        system("mode con:cols=60 lines=30");
    }
}


//Take position at the terminal
void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

//Start menu text
void menuLetsPlay(int space){
    char print[60];

    for (int i = 0; i < space; i++){
        printf(" ");
    }
}

//Left texts
void leftPrintf(char*string){
    int space = 25;

    char print[59];

    for (int i = 0; i < 60; i++){
        print[i] = i >= space && i < space + strlen(string) ? string[i - space] : ' ';
    }

    for(int c = 0; c < 60; c++){
        if(print[c] != ' '){
            printf("%c", print[c]);
        }else{
            printf("%c", print[c]);
        }
    }
}

//Center texts
void centerPrintf(char*string, boolean bool){

    int space = (60 - strlen(string)) / 2;

    char print[59];

    if(bool == TRUE){
        for (int i = 0; i < 60; i++){
            print[i] = i >= space && i < space + strlen(string) ? string[i - space] : '=';
    } 
    }else{
        for (int i = 0; i < 60; i++){
            print[i] = i >= space && i < space + strlen(string) ? string[i - space] : ' ';
    }
    }

    for(int c = 0; c < 60; c++){
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
//Key Selector
void menuSelector(){
    int limit = 0;

    do{
        kbhit();
        int key = getch();

        printf("%d", key);

        resizeScreen();
        menuGame(key);
        limit = key;

        if(key == 13 || key == 32){
            system("cls");
            break;
        }
    }while(limit != 80 || limit != 72 || limit != 119 || limit != 115);
}


//Key options
void menuKeys(int key){
    printf("\n\n\n\n");

    switch (key){
    case 80: case 115:
        if(order == 0){
            leftPrintf(" NOVO JOGO");
            leftPrintf(">> RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 

            order = 1;
            break;
        }

        if(order == 1){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(">> CREDITOS");
            leftPrintf(" SAIR"); 

            order = 2;
            break;
        }

        if(order == 2){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(">> SAIR"); 

            order = 3;
            break;
        }

        if(order == 3){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(">> SAIR"); 
            break;
        }
        break;
    
    case 72: case 119:
        if(order == 0){
            leftPrintf(">> NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 
            break;
        }

        if(order == 1){
            leftPrintf(">> NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 

            order = 0;
            break;
        }

        if(order == 2){
            leftPrintf(" NOVO JOGO");
            leftPrintf(">> RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 

            order = 1;
            break;
        }

        if(order == 3){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(">> CREDITOS");
            leftPrintf(" SAIR"); 

            order = 2;
            break;
        }
        break;
        
    case 0:
        leftPrintf(">> NOVO JOGO");
        leftPrintf(" RECORDE");
        leftPrintf(" CREDITOS");
        leftPrintf(" SAIR"); 
        break;

    default:
        if(order == 0){
            leftPrintf(">> NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 
            break;
        }

        if(order == 1){
            leftPrintf(" NOVO JOGO");
            leftPrintf(">> RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(" SAIR"); 
            break;
        }

        if(order == 2){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(">> CREDITOS");
            leftPrintf(" SAIR"); 
            break;
        }

        if(order == 3){
            leftPrintf(" NOVO JOGO");
            leftPrintf(" RECORDE");
            leftPrintf(" CREDITOS");
            leftPrintf(">> SAIR"); 
            break;
        }
    }
}

//Game start menu
void menuGame(int key){

    
    // TOP
    gotoxy(6, 3);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(50);

    // LINE 1
    gotoxy(6, 4);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);
    
    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1); 

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2); 

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2); 

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    // LINE 2
    gotoxy(6, 5);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);
    
    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2); 

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 3
    gotoxy(6, 6);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(5);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(9);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2); 

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 4
    gotoxy(6, 7);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);
    
    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 5
    gotoxy(6, 8);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(5);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 6
    gotoxy(6, 9);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(5);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(5);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 7
    gotoxy(6, 10);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(5);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //LINE 8
    gotoxy(6, 11);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(6);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);
    
    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(4);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(1);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_WHITE_BG);
    menuLetsPlay(2);

    printf(ANSI_COLOR_GREEN_BG);
    menuLetsPlay(3);

    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(1);

    //BOTTOM
    gotoxy(6, 12);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(50);

    printf(ANSI_COLOR_GRAY);
    //MENU
    
    //CHOICE OF OPTION KEYS
    int keyy = key;
    menuKeys(keyy);
}