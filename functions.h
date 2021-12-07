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
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 

            order = 1;
            break;
        }

        if(order == 1){
            leftPrintf(" NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 

            order = 2;
            break;
        }


        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 
            break;
        }
        break;
    
    case 72: case 119:
        if(order == 0){
            leftPrintf(">> NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 1){
            leftPrintf(">> NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 

            order = 0;
            break;
        }

        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 

            order = 1;
            break;
        }
        break;
        
    case 0:
        leftPrintf(">> NEW GAME");
        leftPrintf(" CREDITS");
        leftPrintf(" EXIT"); 
        break;

    default:
        if(order == 0){
            leftPrintf(">> NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 1){
            leftPrintf(" NEW GAME");
            leftPrintf(">> CREDITS");
            leftPrintf(" EXIT"); 
            break;
        }

        if(order == 2){
            leftPrintf(" NEW GAME");
            leftPrintf(" CREDITS");
            leftPrintf(">> EXIT"); 
            break;
        }
    }
}

void levelOne(){

    gotoxy(24, 1);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(8);

    gotoxy(24, 2);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(8);

    gotoxy(27, 3);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(27, 4);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(27, 5);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(27, 6);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(27, 7);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(27, 8);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(5);

    gotoxy(21, 9);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(17);

    gotoxy(21, 10);
    printf(ANSI_COLOR_BLUE_BG);
    menuLetsPlay(17);

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
    menuLetsPlay(20);

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

    centerPrintf("A) Look at the number sequence below and check the", FALSE);
    centerPrintf("that has a number that correctly replaces the X.", FALSE);
    centerPrintf("9   27   29   87   89   267   269   X", FALSE);
    printf("\n");

    centerPrintf("[1]- 900", FALSE);
    centerPrintf("[2]- 807", FALSE);
    centerPrintf("[3]- 717", FALSE);
    centerPrintf("[4]- 655", FALSE);
    printf("\n\n");

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [2]- 807"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 50:
            printf(ANSI_COLOR_GREEN_INTEN"[2] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("B) Mark the correct alternative:", FALSE);
    printf("\n");
    centerPrintf("Jack goes to the wedding if Lili goes with him,", FALSE);
    centerPrintf("The bride will be sad if jack doesn't go,", FALSE);
    centerPrintf("Lili won't be able to go to the wedding.", FALSE);
    printf("\n");

    centerPrintf("[1]- Lili goes to the wedding             ", FALSE);
    centerPrintf("[2]- jack goes to the wedding             ", FALSE);
    centerPrintf("[3]- the bride will be sad                ", FALSE);
    centerPrintf("[4]- jack goes to the wedding without Lili", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [3]- the bride will be sad"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 51:
            printf(ANSI_COLOR_GREEN_INTEN"[3] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("C) Pedro stated: 'On that same day last year my son's", FALSE);
    centerPrintf("age was one third of my age and, in 12 years' time, i will", FALSE);
    centerPrintf("be twice his age. The day Peter made this statement, he had:", FALSE);
    printf("\n");

    centerPrintf("[1]- 38 years old", FALSE);
    centerPrintf("[2]- 39 years old", FALSE);
    centerPrintf("[3]- 40 years old", FALSE);
    centerPrintf("[4]- 41 years old", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [3]- 40 years old"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 51:
            printf(ANSI_COLOR_GREEN_INTEN"[3] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("D) Mark the correct alternative:", FALSE);
    printf("\n");
    centerPrintf("Steve goes to the bakery,", FALSE);
    centerPrintf("Andy will leave the house if he is alone,", FALSE);
    centerPrintf("Steve and Andy live together,", FALSE);
    centerPrintf("Marry went to visit Andy.", FALSE);
    printf("\n");

    centerPrintf("[1]- Marry was alone              ", FALSE);
    centerPrintf("[2]- Andy ran away from home      ", FALSE);
    centerPrintf("[3]- Steve took Andy to the bakery", FALSE);
    centerPrintf("[4]- Andy was not alone           ", FALSE);
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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- Andy was not alone"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
    
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelOne();

    centerPrintf("E) Mark the correct alternative:", FALSE);
    printf("\n");
    centerPrintf("If it rains, mark won't walk in the park,", FALSE);
    centerPrintf("Jenny will take her dog to the park,", FALSE);
    centerPrintf("It was a summer day, dry and rainless.", FALSE);
    printf("\n");
    
    centerPrintf("[1]- jenny didn't take her dog to the park", FALSE);
    centerPrintf("[2]- mark went for a walk in the park     ", FALSE);
    centerPrintf("[3]- it was a rainy day                   ", FALSE);
    centerPrintf("[4]- mark didn't go for a walk in the park", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [2]- mark went for a walk in the park"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 50:
            printf(ANSI_COLOR_GREEN_INTEN"[2] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
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

    centerPrintf("In this world you will have questions about", FALSE);
    centerPrintf("programming logic", FALSE);
    printf(ANSI_COLOR_YELLOW_INTEN);
    centerPrintf("Good luck", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");

    levelTwo();

    centerPrintf("A) Which of the following statements about", FALSE);
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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [1]- An array is a structure that can store a series of  data elements of the same type."ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 49:
            printf(ANSI_COLOR_GREEN_INTEN"[1] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelTwo();

    centerPrintf("B) A variable can store what types of data?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- Boolean                     ", FALSE);
    centerPrintf("[2]- Character                   ", FALSE);
    centerPrintf("[3]- Integer                     ", FALSE);
    centerPrintf("[4]- All alternatives are correct", FALSE);
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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- All alternatives are correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelTwo();

    centerPrintf("C) What are the possible states that a logical", FALSE);
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
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");
    
    resizeScreen();
    levelTwo();

    centerPrintf("D) In some cases, the switch command can", FALSE);
    centerPrintf(" override which structure?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- the repeating loop 'for'", FALSE);
    centerPrintf("[2]- the chained if command  ", FALSE);
    centerPrintf("[3]- a set of arrays         ", FALSE);
    centerPrintf("[4]- the repeating loop 'do' ", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [2]- the chained if command"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 50:
            printf(ANSI_COLOR_GREEN_INTEN"[2] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelTwo();

    centerPrintf("E) Which of the following is a valid string", FALSE);
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
            break;
        
        case 49:
            printf(ANSI_COLOR_GREEN_INTEN"[1] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
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

    levelThree();

    centerPrintf("A) Wich command we use to make the line", FALSE);
    centerPrintf(" break in C?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- linebreak()      ", FALSE);
    centerPrintf("[2]- // (Double bar)  ", FALSE);
    centerPrintf("[3]- /n (Bar + n)     ", FALSE);
    centerPrintf("[4]- \\n (Backslash)  ", FALSE);
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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- \\n (Backslash)"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelThree();

    centerPrintf("B) How can we store a string in a variable?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- string (var)                         ", FALSE);
    centerPrintf("[2]- strg (var)                           ", FALSE);
    centerPrintf("[3]- creating a array of type char        ", FALSE);
    centerPrintf("[4]- creating a variable for each letter  ", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 50: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [3]- creating a array of type char"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 51:
            printf(ANSI_COLOR_GREEN_INTEN"[3] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelThree();

    centerPrintf("C) How is a variable incremented in C?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- (var) <- var + 1", FALSE);
    centerPrintf("[2]- var + var       ", FALSE);
    centerPrintf("[3]- var = var + var ", FALSE);
    centerPrintf("[4]- var++           ", FALSE);
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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [4]- var++"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 52:
            printf(ANSI_COLOR_GREEN_INTEN"[4] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelThree();

    centerPrintf("D) What is the command used to print texts", FALSE);
    centerPrintf(" on the screen?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- printf()        ", FALSE);
    centerPrintf("[2]- print()         ", FALSE);
    centerPrintf("[3]- console.write() ", FALSE);
    centerPrintf("[4]- document.write()", FALSE);

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
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [1]- printf()"ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 49:
            printf(ANSI_COLOR_GREEN_INTEN"[1] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");

    resizeScreen();
    levelThree();

    centerPrintf("E) What is the difference relational", FALSE);
    centerPrintf(" operator in c?", FALSE);
    printf("\n");
    
    centerPrintf("[1]- !<   ", FALSE);
    centerPrintf("[2]- !=   ", FALSE);
    centerPrintf("[3]- ~    ", FALSE);
    centerPrintf("[4]- ||   ", FALSE);
    printf("\n\n");

    paramater = true;
    error = 0;

    while(paramater){
        gotoxy(0,22);
        printf("Your alternative: ");
        alternative = getch();

        switch (alternative)
        {
        case 49: case 51: case 52:
            printf(ANSI_COLOR_RED_INTEN"Sorry, incorrect alternative, the asnwer  is [2]- !="ANSI_COLOR_GRAY);
            paramater = false;
            break;
        
        case 50:
            printf(ANSI_COLOR_GREEN_INTEN"[2] Great, alternative correct"ANSI_COLOR_GRAY);
            paramater = false;
            break;

        default:
            printf("Error, enter alternative 1 to 5\n");
            error += 1;
            if(error == 3){
                paramater = false;
                printf(ANSI_COLOR_RED_INTEN"Question skipped because of excessive errors"ANSI_COLOR_GRAY);
            }
            break;
        }
    }
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n");

    centerPrintf("Congratulations, you have completed all questions!", FALSE);
    printf("\n");
    centerPrintf("Now, you have completed all available worlds", FALSE);
    centerPrintf("you are very smart!", FALSE);
    printf("\n");
    printf(ANSI_COLOR_MAGENTA);
    centerPrintf("We appreciate your attention and your time", FALSE);
    centerPrintf(" dedicated to our game", FALSE);
    printf(ANSI_COLOR_GRAY);
    printf("\n\n");
    centerPrintf("We hope to see you again", FALSE);
    printf("\n");
    printf(ANSI_COLOR_RED);
    centerPrintf("Coming son...", FALSE);
    printf(ANSI_COLOR_GRAY);

    getch();
    system("cls");

    resizeScreen();
    menuGame(0);

    menuSelector();

    getPanel();
    getch();
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


void credits(){
    printf("\n\n\n\n\n\n\n\n");
    printf(ANSI_COLOR_GREEN_INTEN);
    centerPrintf("Thanks homie", FALSE);
    printf(ANSI_COLOR_GRAY);
    centerPrintf("Here is the information of the devs", FALSE);
    centerPrintf("who built the program.", FALSE);

    printf("\n\n\n\n\n");
    printf(ANSI_COLOR_CIANO_INTEN);
    centerPrintf("Angelo Menti    -- Github = ymaninho54    ", FALSE);
    centerPrintf("LinkedIn = Angelo Menti", FALSE);
    printf("\n");
    printf(ANSI_COLOR_RED_INTEN);
    centerPrintf("Fernando Pimmel -- Github = FernandoPimmel", FALSE);
    centerPrintf("LinkedIn = FernandoPimmel", FALSE);
    printf("\n");
    printf(ANSI_COLOR_BLUE_INTEN);
    centerPrintf("Artur Martins     -- Github = ArturMartinssrs", FALSE);

    getch();

    system("cls");
    menuGame(1);

    menuSelector();

    getPanel();
    getch();
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
        credits();
        break;

    case 2:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n"ANSI_COLOR_RED);
        centerPrintf("Good bye, thanks!", FALSE);
        Sleep(2000);
        system("start https://github.com/ymaninho54/Education-Game");
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