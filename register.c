/*
int register_incident(Incident list[], int *count) – reads and validates the zone and
hour, calls set_severity(), takes the next ID from a static counter, stores the incident as Pending and
returns its ID (or −1 if the list is full).
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>


typedef enum
{
    SEV_MINOR,
    SEV_SERIOUS,
    SEV_CRITICAL
} Severity;

typedef enum 
{
    ST_PENDING,
    ST_DISPATCHED,
    ST_CLOSED
} IncidentStatus;

int Set_severity(char choice[], Severity *sev);
{
    choice[strcspn(choice,"\n")]='\0'; //Removes the newline by finding the first index posn of \n

    for(int i=0;i<strlen(choice);i++)
    {
        choice[i]=tolower(choice[i]);
    }

    if (strcmp(choice,"minor")==0)
    {
        *sev=SEV_MINOR;
    }
    else if(strcmp(choice,"serious")==0)
    {
        *sev=SEV_SERIOUS;
    }
    else if(strcmp(choice,"critical")==0)
    {
        *sev=SEV_CRITICAL;
    }
    else
    {
        return 0;
    }

    return 1;
}

int main()
{
    char choice[10];
    Severity sev;
    IncidentStatus status;
    int zone=-1,hour=-1,loop=1;
    int count=5000; //To be changed to fn input (pointer)
    
    while(loop!=0)
    {
        printf("Enter incident zone (0-7): ");

        if(scanf("%d",&zone)==1 && zone>=0 && zone<=7)
        {

            printf("Enter incident hour (0-23): ");

            if(scanf("%d",&hour)==1 && hour>=0 && hour<=24)
            {

                printf("Severity (Minor, Serious, Critical): ");
                fgets(choice,sizeof(choice),stdin);
                valid=Set_severity(choice[],&sev);
                if (valid==1)
                {
                    count++;
                    status
                    printf("Incident 5001 registered: Zone 2, Minor, 08:00
                }

            }

        }
    }

}