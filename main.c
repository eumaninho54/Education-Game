#include "modules.h"
#include "functions.h"
#include "colors.h"


int main(){
    system("mode con:cols=60 lines=30");
    
    titleInit();

    resizeScreen();
    menuGame(0);

    menuSelector();

    getPanel();

    getch();
}