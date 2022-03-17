#include<stdio.h>

/*******************************************************************
*                                                                  *
*                   Task#2 (Displaying Calendars)                  *
*                                                                  *
*******************************************************************/

int main(){

    int h,m,y,q=1,month,year,i,j,k; //variable declaration

    printf("Enter year: "); //prompt
    scanf("%d",&y); //year input

    printf("Enter month (1-12): "); //prompt
    scanf("%d",&m); //month input

    printf("\n");

    month=m;
    year=y;

    if(m==1 || m==2){
        m=m+12;
        y=y-1;
    }

    h = (q + (int)floor(26*(m+1)/10) + y + (int)floor(y/4) + (6*(int)floor(y/100)) + (int)floor(y/400))%7; //formula

    if(h==0){
        h=7;
    }

    printf("Calendar for:\n\n");

    switch(m){

        case 13:
            printf("JANUARY, %d\n\n",year);
            break;

        case 14:
            printf("FEBRUARY, %d\n\n",year);
            break;

        case 3:
            printf("MARCH, %d\n\n",year);
            break;

        case 4:
            printf("APRIL, %d\n\n",year);
            break;

        case 5:
            printf("MAY, %d\n\n",year);
            break;

        case 6:
            printf("JUNE, %d\n\n",year);
            break;

        case 7:
            printf("JULY, %d\n\n",year);
            break;

        case 8:
            printf("AUGUST, %d\n\n",year);
            break;

        case 9:
            printf("SEPTEMBER, %d\n\n",year);
            break;

        case 10:
            printf("OCTOBER, %d\n\n",year);
            break;

        case 11:
            printf("NOVEMBER, %d\n\n",year);
            break;

        case 12:
            printf("DECEMBER, %d\n\n",year);
            break;

        default:
            printf("Invalid input ");

    }

    printf("SUN  MON  TUE  WED  THU  FRI  SAT\n");

        for(j=1;j<=7;j++){

            if(h>j){
                printf("     ");
            }
            else{
                printf("%d    ",q);
                q++;
            }


        }

        printf("\n");

        for(i=0;i<4;i++){

                for(k=1;k<=7;k++){

                        if(q<10){
                            printf("%d    ",q);
                        }
                        else{
                            printf("%d   ",q);
                        }
                    q++;

                    if(q>31 && (m==13 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)){
                        break;
                    }
                    else if(q>30 && (m==4 || m==6 || m==9 || m==11)){
                        break;
                    }
                    else if(q>28 && m==14 && year%4!=0){
                        break;
                    }
                    else if(q>28 && m==14 && year%100==0 && year%400!=0){
                        break;
                    }
                    else if(q>29 && m==14 && ((year%4==0 && year%100!=0) || year%400==0)){
                        break;
                    }

                }

        printf("\n");


    }

    return 0;

}
