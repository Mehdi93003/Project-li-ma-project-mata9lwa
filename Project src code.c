#include <stdio.h>
#include <stdlib.h>

int main() {                                                                                                       /*TKFAT MAMZYANCH*/

    write (1, "\t\t*WELCOME TO MY GREAT PROJECT V0.02 Beta*\n\n\n", 45);

   int current_year,age,birth_year,birth_month, birth_day;
   current_year=2021;

jump:

    printf("\n\n* Enter Your Birth Year Or Your Age\t: ");
    scanf("%u",&birth_year);

    age=current_year-birth_year;

    if(birth_year>current_year)
    {
        printf ("\n* Wait Your Birthday MF You Still Not Born Yet\n");
        goto jump;

    }                                                                                                                 /* MARAWAN BABLO*/

    else if (birth_year<=500)
    {
        printf ("\n* Your Birth Year Is\t\t\t: %u\n",age);
        goto jump;

    }

    else if (!(birth_year<=100)&& birth_year!=2021)
        {
            printf("\n* Your Age Is\t\t\t\t: %u\n",age);
            goto jump;
        }

    if (birth_year==current_year){                                                                 /* TIZNA KREM AKHAY CHOKRI*/
            do {

                printf("\n* Enter Your birth Month And Your Birth Day Respectively : ");
                scanf("%u%u",&birth_month,&birth_day);

                }while (birth_month<1||birth_month>12||birth_day<1||birth_day>31);

                if (birth_month<8&&birth_day<2)
                    {
                        printf("\n* Your Age Is Almost Six Months\n");
                        goto jump;

                    }

                        else
                        {
                            printf("\n* Wait Your Birthday MF You Still Not Born Yet\n");
                            goto jump;

                        }
                }

    getch ();

   return (0);
    }
