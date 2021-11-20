#include "modules.h"

void centerPrintf(char*string){

    int space = (100 - strlen(string)) / 2;

    char print[99];

    for (int i = 0; i < 100; i++){
        print[i] = i >= space && i < space + strlen(string) ? string[i - space] : '-';
    }

    printf("%s\n", print);

}

int main(){
    int i = 0;
    int x, y;

    
    system("mode con:cols=100 lines=45");

    centerPrintf("Bem vindo ao meu jogo");

    centerPrintf("Ola amigo");

    system("pause");
        
}