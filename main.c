
//Nahuel Colotto

#include <stdio.h>
#include <ctype.h>

int main(){

    int c; 
    while((c = getchar()) != EOF){
        if(islower(c)){
            c = toupper(c);
            putchar(c);
        } else if(isupper(c))
        {
            c = tolower(c);
            putchar(c);
        } else if(ispunct(c))
        {
            putchar(c);
        }
    }

    return 0; 
}