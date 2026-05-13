#include <stdio.h>


int IsEmpty(char string[]){

    if(string[0] == '\0' || string[0] == '\n' || string[0] == ' ')
     return 1;
    else
     return 0;

}

int GetLenght(char string[]){

    int longitud = 0;

        for(longitud; string[longitud] != '\0'; longitud++)
         ;

        return longitud;


}

int AreEqual(char string1[], char string2[]){

    int contador = 0;
    

    for(contador; (string1[contador] != '\0' && string2[contador] != '\0'); contador++){

        if(string1[contador] != string2[contador])
         return 0;

    }
    
    
    return string1[contador] == string2[contador];


}

int AreDecimalDigits(char string[]){

    int contador = 0;

    while(string[contador] != '\0'){

        if((string[contador] >= '0') && (string[contador] <= '9'))
         contador++;
        else
         return 0;

    }




    return 1;

}

int Contains(char string[],char buscado,int i){


    if(string[i] == buscado)
        return 1;
    else{

        if(string[i] == '\0')
         return 0;
    }

    
    return Contains(string,buscado,i + 1);




}



int ToIntegrer(char string[]){


    int num = 0, contador = 0,val;

        while(string[contador] != '\0' && (string[contador] >= '0' && string[contador] <= '9')){

           val = string[contador] - '0';     
           num = num*10 + val;
           contador++;

        }

        return num;

}

int CuantosDeUnCaracter(char string[],char caracter){


    int contador = 0;


    for(int i = 0; string[i] != '\0'; i++){

        if(string[i] == caracter)
            contador++;



    }




    return contador;

}





int main(int argc, char *argv[]){

   char s[10];
    char s2[10];
    char c;
    int contador = 0;
    
    c = getchar();

    while(c != EOF && c != '\n' && contador < 10){
        

        s[contador] = c;
        contador++;
        c = getchar();


    }
   
    s[contador] = '\0';
     
    
    char c2 = getchar();

    printf("hay %d de el caracter buscado\n",CuantosDeUnCaracter(s,c2));




    return 0;


}





