#include <unistd.h>

void ft_print_alphabet(void){

    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
    for(int i=0;i<26;i++){
        write(1, &alph[i], 1);
    }
}
