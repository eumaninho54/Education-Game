//Roles have been organized into internal roles and external roles.

#include "modules.h"
#include "colors.h"

//Global var
int order = 0;

// Internal Functions //

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
void centerPrintf(char*string, bool boolean){

    int space = (60 - strlen(string)) / 2;

    char print[59];

    if(boolean == TRUE){
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

//Key options
void menuKeys(int key){
    printf("\n\n\n\n");

    switch (key){
    case 80: case 115:
        if(order == 0){
            leftPrintf(" NEW GAME");
            leftPrintf(">> RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 

            order = 1;
            break;
        }

        if(order == 1){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 

            order = 2;
            break;
        }

        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 

            order = 3;
            break;
        }

        if(order == 3){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 
            break;
        }
        break;
    
    case 72: case 119:
        if(order == 0){
            leftPrintf(">> NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 1){
            leftPrintf(">> NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 

            order = 0;
            break;
        }

        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(">> RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 

            order = 1;
            break;
        }

        if(order == 3){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 

            order = 2;
            break;
        }
        break;
        
    case 0:
        leftPrintf(">> NEW GAME");
        leftPrintf(" RECORD");
        leftPrintf(" CREDITS");
        leftPrintf(" EXIT"); 
        break;

    default:
        if(order == 0){
            leftPrintf(">> NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 1){
            leftPrintf(" NEW GAME");
            leftPrintf(">> RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 3){
            leftPrintf(" NEW GAME");
            leftPrintf(" RECORD");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 
            break;
        }
    }
}

void levelOne(){

    gotoxy(21, 1);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(13);

    gotoxy(21, 2);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(13);

    gotoxy(21, 3);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(13);

    gotoxy(28, 4);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(6);

    gotoxy(28, 5);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(6);

    gotoxy(28, 6);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(6);

    gotoxy(28, 7);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(6);

    gotoxy(21, 8);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(20);

    gotoxy(21, 9);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(20);

    gotoxy(21, 10);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(20);

    printf("\n\n\n");

    printf(ANSI_COLOR_GRAY);
}

void worldOne(){
    int alternative;
    int error = 0;
    bool paramater = true;
    int resultsList[3] = {2, 3, 3};

    resizeScreen();
    levelOne();

    centerPrintf("In this world you will have simple logic questions", FALSE);
    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Good luck", FALSE);
    printf(ANSI_COLOR_GRAY);

    Sleep(1000);
    system("cls");

    levelOne();

    centerPrintf("A)Look at the number sequence below and check the", FALSE);
    centerPrintf("that has a number that correctly replaces the X.", FALSE);
    centerPrintf("9   27   29   87   89   267   269   X", FALSE);

    centerPrintf("[1]- 900", FALSE);
    centerPrintf("[2]- 807", FALSE);
    centerPrintf("[3]- 717", FALSE);
    centerPrintf("[4]- 655", FALSE);
    centerPrintf("[5]- 529", FALSE);

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf("Sorry, incorrect alternative, the asnwer is [2]- 807");
            paramater = false;
            break;
        
        case 50:
            printf("Great, alternative correct");
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf("Question skipped because of excessive errors");
            }
            break;
        }
    }
    getch();
    system("cls");

    levelOne();

}

void newGame(){
    resizeScreen();

    printf("\n\n\n\n\n\n\n\n\n\n");
    centerPrintf("Welcome, the game is divided into 3 worlds", FALSE);
    centerPrintf("as you progress through the worlds the level", FALSE);
    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Lets go", FALSE);

    Sleep(1000);
    system("cls");

    worldOne();
}

void records(){

}

void credits(){

}

// External Functions //

//Build panel
void getPanel(){
    switch (order)
    {
    case 0:
        newGame();
        break;
    
    case 1:
        records();
        break;

    case 2:
        credits();
        break;

    case 3:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n"ANSI_COLOR_RED);
        centerPrintf("Good bye, thanks!", FALSE);
        system("start https://github.com/ymaninho54");
        Sleep(2000);
        exit(0);
        break;
    }

}

//Resize the terminal screen
void resizeScreen(){
    if(!system("mode con:cols=60 lines=30")){
        system("mode con:cols=60 lines=30");
    }
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

    getch();
    system("cls");

}
//Key Selector
void menuSelector(){
    int limit = 0;

    do{
        kbhit();
        int key = getch();

        resizeScreen();
        menuGame(key);
        limit = key;

        if(key == 13 || key == 32){
            system("cls");
            break;
        }
    }while(limit != 80 || limit != 72 || limit != 119 || limit != 115);
}

//Drawing on the terminal
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