#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

int main()
{

    int opcion,comprobar=1;
    char r;
    int n = rand();

    while(comprobar==1)
    {
        comprobar = 0;

        system("clear");
        printf("\033[1;34m");
        printf("\n\n\n\t\t\t     BIENVENIDO A TRIVIARAMA");
        printf("\033[1;33m");
        printf("\n\n\n\n\t\t\t     ¿QUÉ TEMA QUIERE JUGAR?");
        printf("\033[1;32m");
        printf("\n\n\t\t\t\t1. VIDEOJUEGOS");
        printf("\033[1;32m");
        printf("\n\t\t\t\t2. MÚSICA");
        printf("\033[1;32m");
        printf("\n\t\t\t\t3. PELÍCULAS");
        printf("\033[1;32m");
        printf("\n\t\t\t\t4. MATEMÁTICAS");
        printf("\033[1;32m");
        printf("\n\t\t\t\t5. CULTURA GENERAL");
        printf("\033[1;32m");
        printf("\n\t\t\t\t6. SALIR");
        printf("\033[1;36m");
        printf("\n\n\n\n\t\t\t       SELECCIONA UNA OPCIÓN: ");
        printf("\033[0m");
        scanf("%d",&opcion);
        system("clear");

        switch (opcion)
        {
        case 1: printf("\n");
                int i=1;
                while(i<=5)
                {
                    printf("\033[1;32m");
                    printf("\n\n\n\t\t\t\t 1.VIDEOJUEGOS\n\n\n\n\n");
                    printf("\033[1;32m");
                    char *videojuegos[] = {"\t\t¿A QUIÉN SE LE CONOCE COMO EL HÉROE DEL TIEMPO?", "\t\t   ¿CÓMO SE LLAMA EL HERMANO DE MARIO BROS?", "\t\t\t  ¿QUÉ ES EL CÓDIGO KONAMI?", "\t\t      ¿CUÁL JUEGO FUE LANZADO PRIMERO?", "\t\t    ¿CUÁL CONSOLA DE VIDEOJUEGOS NO EXISTE?"};
                    srand(time(NULL));
                    n=rand()%5;
                    printf("%s\n", videojuegos[n]);
                    switch(n)
                    {
                        case 0: printf("\n\t\t\t\tA) LINK\n\t\t\t\tB) ZELDA\n\t\t\t\tC) KRATOS\n\t\t\t\tD) NATHAN DRAKE\n\n");
                                printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n\t\t\t\t¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\n\t\t\t\tINCORRECTO :(\n\n\t\t      LA RESPUESTA CORRECTA ES: A) LINK\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 1: printf("\n\t\t\t\tA) LUIGI\n\t\t\t\tB) BOWSER\n\t\t\t\tC) PEACH\n\t\t\t\tD) TOAD\n\n");
                                printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n\t\t\t\t¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\n\t\t\t\tINCORRECTO :(\n\n\t\t      LA RESPUESTA CORRECTA ES: A) LUIGI\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 2: printf("\nA) ▲ ▲ ▼ ▼ ◄ ► ◄ ► A B START\nB) MANTENER PRESIONADO START Y SELECT AL INICIO DEL JUEGO\nC) GOLPEAR LA CONSOLA\nD) CÓDIGO FUENTE DE LOS VIDEOJUEGOS\n\n");
                                printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n\t\t\t\t¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\n\t\t\t\tINCORRECTO :(\n\n\t      LA RESPUESTA CORRECTA ES: A) ▲ ▲ ▼ ▼ ◄ ► ◄ ► A B START\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 3: printf("\nA) PONG\nB) PAC-MAN\nC) SONIC\nD) MARIO BROS\n\n");
                                printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n\t\t\t\t¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\n\t\t\t\tINCORRECTO :(\n\n\t\t      LA RESPUESTA CORRECTA ES: A) PONG\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 4: printf("\nA) PLAYSTATION\nB) XBOX\nC) ATARI 2600\nD) KFCONSOLE\n\n");
                                printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='d' || r=='D')
                                {
                                    printf("\n\t\t\t\t¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\n\t\t\t\tINCORRECTO :(\n\n\t\t    LA RESPUESTA CORRECTA ES: D) KFCONSOLE\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                    }
                }
                if(i>=10)
                {
                    printf("LO SIENTO, PERDISTE :(\n\n");
                    printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
                    scanf("%i",&comprobar);
                }
                else
                {
                    printf("¡FELICIDADES! GANASTE\n\n");
                }
            break;
        case 2: printf("\n");
                int i=1;
                while(i<=5)
                {
                    printf("\033[1;32m");
                    printf("\n\t\t\t\t2. MÚSICA\n\n");
                    printf("\033[1;32m");
                    char *musica[] = {"¿CUÁL ES EL ÁLBUM NO RECOPILATORIO MÁS VENDIDO DE TODA LA HISTORIA?", "¿CUÁL FUE EL ARTISTA MÁS ESCUCHADO DEL 2020?", "¿CUÁL ES LA CANCIÓN CON MÁS REPRODUCCIONES EN YOUTUBE?", "¿QUIÉN ES EL REY DEL ROCK & ROLL?", "¿CUÁL BANDA NO ES BRITÁNICA?"};
                    srand(time(NULL));
                    n=rand()%5;
                    printf("%s\n", musica[n]);
                    switch(n)
                    {
                        case 0: printf("A) THE DARK SIDE OF THE MOON - PINK FLOYD\nB) BACK IN BLACK - AC/DC\nC) THRILLER - MICHAEL JACKSON\nD) THEIR GREATEST HITS - THE EAGLES\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO:(\nLA RESPUESTA CORRECTA ES: C) THRILLER - MICHAEL JACKSON\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 1: printf("A) BILLIE EILISH\nB) BAD BUNNY\nC) BTS\nD) THE WEEKND\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='b' || r=='B')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: B) BAD BUNNY\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 2: printf("A) BABY SHARK\nB) DESPACITO\nC) SHAPE OF YOU\nD) SEE YOU AGAIN\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) BABY SHARK\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 3: printf("A) MICHAEL JACKSON\nB) MICK JAGGER\nC) JIM MORRISON\nD) ELVIS PRESLEY\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='d' || r=='D')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nIINCORRECTO :(\nLA RESPUESTA CORRECTA ES: D) ELVIS PRESLEY\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 4: printf("A) THE BEATLES\nB) THE ROLLING STONES\nC) GUNS N' ROSES\nD) QUEEN\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) GUNS N' ROSES\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                    }
                }
                if(i>=10)
                {
                    printf("LO SIENTO, PERDISTE :(\n\n");
                    printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
                    scanf("%i",&comprobar);
                }
                else
                {
                    printf("¡FELICIDADES! GANASTE\n\n");
                }
            break;
        case 3: printf("\n");
                int i=1;
                while(i<=5)
                {
                    printf("\033[1;32m");
                    printf("\n\t\t\t\t3. PELÍCULAS\n\n");
                    printf("\033[1;32m");
                    char *peliculas[] = {"¿QUÉ ACTOR INTERPRETÓ AL MAGO GANDALF EN LA TRILOGÍA DE EL SEÑOR DE LOS ANILLOS?", "¿POR CUÁL PELÍCULA LEONARDO DICAPRIO GANÓ SU PRIMER ÓSCAR?", "¿EN QUÉ PELÍCULA PODEMOS ENCONTRAR A MUFASA Y A SIMBA?", "¿QUÉ ACTOR INTERPRETA A FREDDIE MERCURY EN LA PELÍCULA BOHEMIAN RHAPSODY?", "¿CUÁL ES LA PELICULA MÁS TAQUILLERA DE TODOS LOS TIEMPOS?"};
                    srand(time(NULL));
                    n=rand()%5;
                    printf("%s\n", peliculas[n]);
                    switch(n)
                    {
                        case 0: printf("A) ALFRED HITCHCOCK\nB) TOM CRUISE\nC) ORLANDO BLOOM\nD) IAN MCKELLEN\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='d' || r=='D')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: D) IAN MCKELLEN\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 1: printf("A) THE REVENANT\nB) THE WOLF OF WALL STREET\nC) CATCH ME IF YOU CAN\nD) THE GREAT GATSBY\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) THE REVENANT\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 2: printf("A) THE LION KING\nB) ONWARD\nC) BAO\nD) INSIDE OUT\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) THE LION KING\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 3: printf("A) BEN HARDY\nB) RAMI MALEK\nC) TOM HANKS\nD) TOBEY MAGUIRE\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='b' || r=='B')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: B) RAMI MALEK\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 4: printf("A) AVATAR\nB) TITANIC\nC) AVENGERS: ENDGAME\nd) STAR WARS: THE FORCE AWAKENS\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) AVENGERS: EN\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                    }
                }
                if(i>=10)
                {
                    printf("LO SIENTO, PERDISTE :(\n\n");
                    printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
                    scanf("%i",&comprobar);
                }
                else
                {
                    printf("¡FELICIDADES! GANASTE\n\n");
                }
            break;
        case 4: printf("\n");
                int i=1;
                while(i<=5)
                {
                    printf("\033[1;32m");
                    printf("\n\t\t\t\t4. MATEMÁTICAS\n\n");
                    printf("\033[1;32m");
                    char *matematicas[] = {"¿CUÁNTO ES 8/2(2+2)?", "¿CUÁL SERIA UNA EXPRESIÓN EQUIVALENTE PARA (a+b)²?", "¿CÓMO SE LE CONOCE ESTA FÓRMULA?\nx = (-b ± √b²-4ac)/2a", "¿CUÁL ES LA EXPRESIÓN PARA EL TEOREMA DE PITÁGORAS?", "¿QUIÉN ES CONSIDERADO COMO EL PADRE DEL CÁLCULO?"};
                    srand(time(NULL));
                    n=rand()%5;
                    printf("%s\n", matematicas[n]);
                    switch(n)
                    {
                        case 0: printf("A) 16\nB) 1\nC) 4\nD) 8\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) 16\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 1: printf("A) a²+b²\n B) 2a+2b\nC) a²+2ab+b²\nD) a+ab+b\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) a²+2ab+b²\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 2: printf("A) LA CHICHARRONERA\nB) FÓRMULA DE LA ECUACIÓN DE SEGUNDO GRADO\nC) A Y B SON CORRECTAS\nD) NINGUNA DE LAS ANTERIORES\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) A Y B SON CORRECTAS\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 3: printf("A) c² = a² + b²\nB) c = a + b\nC) x = (-b ± √b²-4ac)/2a\nD) AB² = BH * BC\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) c² = a² + b²\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 4: printf("a) PITÁGORAS\nb) BALDOR\nc) NEWTON\nd) GAUSS\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) NEWTON\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                    }
                }  
                if(i>=10)
                {
                    printf("LO SIENTO, PERDISTE :(\n\n");
                    printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
                    scanf("%i",&comprobar);
                }
                else
                {
                    printf("¡FELICIDADES! GANASTE\n\n");
                }
            break;
        case 5: printf("\n");
                int i=1;
                while(i<=5)
                {
                    printf("\033[1;32m");
                    printf("\n\t\t\t\t5. CULTURA GENERAL\n\n");
                    printf("\033[1;32m");
                    char *cultura_general[] = {"¿QUIÉN ES EL CREADOR DEL LENGUAJE C?", "¿CUÁNDO FINALIZÓ LA SEGUNDA GUERRA MUNDIAL?", "¿CUÁNTO DURÓ LA GUERRA DE LOS 100 AÑOS?", "¿CUÁNTO SE DESCUBRIÓ AMÉRICA?", "¿QUÉ ES UN PALINDROMO?"};
                    srand(time(NULL));
                    n=rand()%5;
                    printf("%s\n", cultura_general[n]);
                    switch(n)
                    {
                        case 0: printf("A) DENNIS RITCHIE\nB) RICHARD STALLMAN\nC) ALAN TURING\nD) ALAN COOPER\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='a' || r=='A')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: A) DENNIS RITCHIE\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 1: printf("A) 1918\nB) 1945\nC) 1939\nD) 1914\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='b' || r=='B')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: B) 1945\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 2: printf("A) 107 AÑOS\nB) 106 AÑOS\nC) 99 AÑOS\nD) 116 AÑOS\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='d' || r=='D')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA ES: D) 116 AÑOS\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 3: printf("A) 1482\nB) 1492\nC) 1484\nD) 1494\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='b' || r=='B')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: B) 1492\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                        case 4: printf("A) UNA PALABRA QUE SE ESCRIBRE DIFERENTE PERO SIGNIFICA LO MISMO QUE OTRA PALABRA\nB) UNA PALABRA QUE TIENE UN SIGNIFICADO APUESTO A OTRA PALABRA\nC) UNA PALABRA QUE SE ESCRIBE Y SE LEE IGUAL AL DERECHO Y AL REVÉS\nD) UN AVE EN PELIGRO DE EXTINCIÓN\n\n");
                                printf("ELIGE UN INCISO: ");
                                scanf("%s",&r);
                                if(r=='c' || r=='C')
                                {
                                    printf("\n¡CORRECTO! :D\n\n");
                                    i++;
                                    sleep(2);
                                }
                                else
                                {
                                    printf("\nINCORRECTO :(\nLA RESPUESTA CORRECTA ES: C) UNA PALABRA QUE SE ESCRIBE Y SE LEE IGUAL AL DERECHO Y AL REVÉS\n\n");
                                    i+=10;
                                    sleep(2);
                                }
                            break;
                    }
                }
                if(i>=10)
                {
                    printf("LO SIENTO, PERDISTE :(\n\n");
                    printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
                    scanf("%i",&comprobar);
                }
                else
                {
                    printf("¡FELICIDADES! GANASTE\n\n");
                }    
            break;
        case 6: printf("\033[1;35m");
                printf("\n\t\t\t\tVUELVA PRONTO :)\n\n");
                printf("\033[1;35m");
            break;
        default: printf("\033[1;31m");
                 printf("\n\t\t\tOPCIÓN INVÁLIDA, INTENTE DE NUEVO\n\n");
                 printf("\033[1;31m");
            break;
        }
    }

    if(comprobar==2)
    {
        system("clear");
        printf("\033[1;35m");
        printf("\n\t\t\t\tVUELVA PRONTO :)\n\n");
        printf("\033[1;35m");
    }
    else if(comprobar==0){}
    else
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\t\t\tOPCIÓN INVÁLIDA, INTENTE DE NUEVO\n\n");
        printf("\033[1;31m");
    }
    
	return 0;
}