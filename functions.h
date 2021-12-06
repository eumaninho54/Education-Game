//Roles have been organized into internal roles and external roles.

#include "modules.h"
#include "colors.h"

//Global var
int order = 0;
int accerts[9];

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

void levelTwo(){
    gotoxy(23, 1);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(16);

    gotoxy(21, 2);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(5);

    gotoxy(35, 2);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(6);

    gotoxy(21, 3);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(3);

    gotoxy(37, 3);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(34, 4);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(31, 5);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(28, 6);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(25, 7);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(22, 8);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(4);

    gotoxy(20, 9);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(5);

    gotoxy(37, 9);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(3);

    gotoxy(20, 10);
    printf(ANSI_COLOR_YELLOW_BG);
    menuLetsPlay(19);

    printf("\n\n\n");

    printf(ANSI_COLOR_GRAY);
}

    void levelThree(){
    gotoxy(27, 1);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(12);

    gotoxy(24, 2);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(17);

    gotoxy(24, 3);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(37, 3);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(37, 4);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(33, 5);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(6);

    gotoxy(33, 6);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(6);

    gotoxy(37, 7);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(24, 8);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(37, 8);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(4);

    gotoxy(24, 9);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(17);

    gotoxy(27, 10);
    printf(ANSI_COLOR_MAGENTA_BG);
    menuLetsPlay(12);

    printf("\n\n\n");

    printf(ANSI_COLOR_GRAY);
}

void worldOne(){
    int alternative;
    int error = 0;
    bool paramater = true;

    resizeScreen();
    levelOne();

    centerPrintf("In this world you will have simple logic questions", FALSE);
    printf(ANSI_COLOR_BLUE_INTEN);
    centerPrintf("Good luck", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");

    levelOne();

    centerPrintf("A)Look at the number sequence below and check the", FALSE);
    centerPrintf("that has a number that correctly replaces the X.", FALSE);
    centerPrintf("9   27   29   87   89   267   269   X", FALSE);

    centerPrintf("[1]- 900", FALSE);
    centerPrintf("[2]- 807", FALSE);
    centerPrintf("[3]- 717", FALSE);
    centerPrintf("[4]- 655", FALSE);

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [2]- 807"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[0] = 0;
            break;
        
        case 50:
            printf(ANSI_COLOR_GREEN_INTEN"[2] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[0] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[0] = 0;
                
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("B)Pedro stated: 'On that same day last year my son's", FALSE);
    centerPrintf("age was one third of my age and, in 12 years' time, i will", FALSE);
    centerPrintf("be twice his age. The day Peter made this statement, he had:", FALSE);

    centerPrintf("[1]- 38 anos", FALSE);
    centerPrintf("[2]- 39 anos", FALSE);
    centerPrintf("[3]- 40 anos", FALSE);
    centerPrintf("[4]- 41 anos", FALSE);

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [3]- 40 anos"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[1] = 0;
            break;
        
        case 51:
            printf(ANSI_COLOR_GREEN_INTEN"[3] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[1] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[1] = 0;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("C)Some consider that the city of Florianopolis was", FALSE);
    centerPrintf("founded on March 23, which fell on a Saturday.", FALSE);
    centerPrintf("After 90 days on June 21 a piece of data signaled", FALSE);
    centerPrintf("the beginning of winter when the night is the", FALSE);
    centerPrintf("longest of the year. That day fell into one:", FALSE);
    

    centerPrintf("[1]- Tuesday", FALSE);
    centerPrintf("  [2]- Wednesday", FALSE);
    centerPrintf("  [3]- Thursday", FALSE);
    centerPrintf("[4]- Friday", FALSE);

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 51:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- Friday"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[2] = 0;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[2] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[2] = 0;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");

    centerPrintf("Congratulations, you have completed all questions!", FALSE);
    centerPrintf("Now you advance the world and the questions", FALSE);
    centerPrintf("will be more difficult", FALSE);
    printf(ANSI_COLOR_BLUE);
    centerPrintf("welcome to world 2", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");
    
}

void worldTwo(){
    int alternative;
    int error = 0;
    bool paramater = true;

    levelTwo();

    centerPrintf("in this world you will have questions about", FALSE);
    centerPrintf("programming logic", FALSE);
    printf(ANSI_COLOR_YELLOW_INTEN);
    centerPrintf("Good luck", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");

    levelTwo();

    centerPrintf("A)Which of the following statements about", FALSE);
    centerPrintf("arrays (vectors) is true?", FALSE);
    printf("\n");
    
    centerPrintf("   [1]- An array is a structure that can store a series", FALSE);
    centerPrintf("of data elements of the same type.", FALSE);
    centerPrintf("     [2]- We can access the individual elements of an array", FALSE);
    centerPrintf("through an index position, starting at A.", FALSE);
    centerPrintf("  [3]- An array is a structure that can store a series", FALSE);
    centerPrintf("of data elements of different types.", FALSE);
    centerPrintf("[4]- We can access all the individual elements of", FALSE);
    centerPrintf("an array through an index position, starting at 1", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 50: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [1]- An array is a structure that can store a series of data elements of the same type."ANSI_COLOR_GRAY);
            paramater = false;
            accerts[3] = 0;
            break;
        
        case 49:
            printf(ANSI_COLOR_GREEN_INTEN"[1] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[3] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[3] = 0;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelTwo();

    centerPrintf("B)What are the possible states that a logical", FALSE);
    centerPrintf("type can assume?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- Doubtful, True       ", FALSE);
    centerPrintf("[2]- False, Doubtful, True", FALSE);
    centerPrintf("[3]- Right, Wrong         ", FALSE);
    centerPrintf("[4]- True, False          ", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 51:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- True, False."ANSI_COLOR_GRAY);
            paramater = false;
            accerts[4] = 0;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[4] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[4] = 0;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");
    
    resizeScreen();
    levelTwo();

    centerPrintf("B)Which of the following is a valid string", FALSE);
    centerPrintf("concatenation operator?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- + ", FALSE);
    centerPrintf("[2]- * ", FALSE);
    centerPrintf("[3]- ->", FALSE);
    centerPrintf("[4]- \" \"", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 50: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [1]- +"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[5] = 0;
            break;
        
        case 49:
            printf(ANSI_COLOR_GREEN_INTEN"[1] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            accerts[5] = 1;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                accerts[5] = 0;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");

    centerPrintf("Congratulations, you have completed all questions!", FALSE);
    centerPrintf("Now you advance the world and the questions", FALSE);
    centerPrintf("will be more difficult", FALSE);
    printf(ANSI_COLOR_YELLOW);
    centerPrintf("welcome to world 3", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");

}

void worldThree(){
    int alternative;
    int error = 0;
    bool paramater = true;

    resizeScreen();
    levelThree();

    centerPrintf("In this world you will test your knowledge of C lenguage", FALSE);
    //printf(ANSI_COLOR_BLUE_INTEN);
    centerPrintf("Good luck", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");
}

void newGame(){
    resizeScreen();

    printf("\n\n\n\n\n\n\n\n\n\n");
    centerPrintf("Welcome, the game is divided into 3 worlds", FALSE);
    centerPrintf("as you progress through the worlds the level", FALSE);
    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Lets go", FALSE);

    getch();
    system("cls");

    worldOne();
    resizeScreen();

    worldTwo();
    resizeScreen();

    worldThree();
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
        Sleep(2000);
        system("start https://github.com/ymaninho54");
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