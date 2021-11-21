#include "modules.h"
#include "functions.h"
#include "colors.h"


int main(){
    system("mode con:cols=100 lines=45");
    
    titleInit();

    menuGame();

    system("pause");
        
}