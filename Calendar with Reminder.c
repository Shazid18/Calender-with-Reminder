#include<stdio.h>

int d,m;
char test[20],s[100];
char m1[]= {"January"},m2[]= {"February"},m3[]= {"March"},m4[]= {"April"},m5[]= {"May"},m6[]= {"June"},m7[]= {"July"},m8[]= {"August"},m9[]= {"September"},m10[]= {"October"},m11[]= {"November"},m12[]= {"December"};

int getfirstdayoftheyear(int year)
{
    int day = (year*365 + ((year-1) / 4) - ((year-1) / 100)+ ((year-1) /400)) %7;
    return day;
}
int datecaller()
{
    printf("ENTER DATE(dd): ");

    scanf("%d", &d);

    printf("ENTER MONTH(mm): ");

    scanf("%d", &m);

}
int remindercaller(int year)
{
    fflush(stdin);
    if(m==1)
    {
        strcpy(test,m1);
    }
    else if(m==2)
    {
        strcpy(test,m2);
    }
    else if(m==3)
    {
        strcpy(test,m3);
    }
    else if(m==4)
    {
        strcpy(test,m4);
    }
    else if(m==5)
    {
        strcpy(test,m5);
    }
    else if(m==6)
    {
        strcpy(test,m6);
    }
    else if(m==7)
    {
        strcpy(test,m7);
    }
    else if(m==8)
    {
        strcpy(test,m8);
    }
    else if(m==9)
    {
        strcpy(test,m9);
    }
    else if(m==10)
    {
        strcpy(test,m10);
    }
    else if(m==11)
    {
        strcpy(test,m11);
    }
    else if(m==12)
    {
        strcpy(test,m12);
    }
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (d>0 && d<=29 && m==2)
        {
            {
                printf("\nPlease enter your desired reminder:\n\n");
                gets(s);

                printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
            }
        }
        else if ((m==1 || m==3 || m== 5 || m==7 || m==8 || m==10 || m==12) && (d>0 && d<=31))
        {
            printf("\nPlease enter your desired reminder:\n\n");
            gets(s);

            printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
        }
        else if ((m==4 || m==6 || m== 9 || m==11 && d>0 && d<=30) && (d>0 && d<=30))
        {
            printf("\nPlease enter your desired reminder:\n\n");
            gets(s);

            printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
        }
        else
        {
            printf("Invalid Entry\n\n");
            printf("Try Again\n\n");
            datecaller();
            remindercaller(year);
        }
    }
    else
    {
        if (d>0 && d<=28 && m==2)
        {
            {
                printf("\nPlease enter your desired reminder:\n\n");
                gets(s);

                printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
            }
        }
        else if ((m==1 || m==3 || m== 5 || m==7 || m==8 || m==10 || m==12) && (d>0 && d<=31))
        {
            printf("\nPlease enter your desired reminder:\n\n");
            gets(s);

            printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
        }
        else if ((m==4 || m==6 || m== 9 || m==11 && d>0 && d<=30) && (d>0 && d<=30))
        {
            printf("\nPlease enter your desired reminder:\n\n");
            gets(s);

            printf("\n\nYour reminder successfully added on %d %s.\n\n", d,test);
        }
        else
        {
            printf("Invalid Entry\n\n");
            printf("Try Again\n\n");
            datecaller();
            remindercaller(year);
        }
    }
}


int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Octobar", "November", "December"};
    int daysinmonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, j, totaldays, weekday = 0, spacecounter = 0, year;

    printf("Enter your desired year:\n");
    scanf("%d",&year);
    printf("\n\n*************** Welcome to %d ***************\n\n", year);

    // check if it is a leap year
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysinmonth[1] = 29;
    }

    // Get the First day of the yaer
    weekday = getfirstdayoftheyear(year);

    for(i = 0; i < 12; i++)
    {
        printf("\n\n\n--------------------- %s ----------------------\n", months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for(spacecounter = 1; spacecounter <= weekday; spacecounter++)
        {
            printf("      ");
        }
        totaldays = daysinmonth[i];
        for(j = 1; j<= totaldays; j++)
        {

            printf("%6d", j);
            weekday++;
            if(weekday > 6)
            {
                weekday = 0;
                printf("\n");

            }
        }
    }

    printf("\n\n\nDo you want to add a reminder?\n");

    printf("PRESS 1 IF YES\nPRESS 2 IF NO\n\n");

    printf("ENTER YOUR CHOICE : ");

    int conf;
    char a;

    scanf("%d",&conf);

    if(conf == 1)
    {
        printf("\n\nIn which day you want to add reminder?\n\n");

        datecaller();

        remindercaller(year);
    }


    else
    {
        printf("\nThank you.\n\n");
    }

    printf("Do you check if there is any reminder in your calendar?\n");
    printf("PRESS '1' IF YES\nPRESS '2' IF NO\n\n");

    printf("ENTER YOUR CHOICE : ");
    int rc;

    scanf("%d", &rc);

    if(rc == 1)
    {
        if(conf == 1)
        {

            printf("\n\nYour have a reminder '%s' is on %d %s\n\n.", s,d,test);
        }
        else
        {
            printf("You have no reminder\n\n");
        }
    }
    else
    {
        printf("\nThank you.\n\n");
    }



    printf("************* END *************\n\n");
    //main();
    return 0;
}
