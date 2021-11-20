#include "modules.h"

void centerPrintf(char*string){

    int character = 0;
    int size = (100 - strlen(string)) / 2;

    char print[100];

    for (int i = 0; i < 100; i++)
    {
        if (i > size && i <= size + strlen(string))
        {
            print[i] = string[character++];
        }else{
            print[i] = ' ';
        }
    }

    printf("%s", print);


}

int main(){
    int i = 0;
    int x, y;

    
    system("mode con:cols=100 lines=45");

    

    

    centerPrintf("BEM VINDO AO MEU JOGO");
        


    system("pause");
}