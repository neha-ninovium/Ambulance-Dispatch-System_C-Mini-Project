/*
git remote add origin https://github.com/neha-ninovium/Ambulance-Dispatch-System_C-Mini-Project.git
git branch -M main
git push -u origin main*/

/*Set_severity(char choice[], Severity *sev) – converts the menu choice 1 to 3 into the
severity enumeration; returns 0 for an invalid choice.

typedef enum { SEV_MINOR, SEV_SERIOUS, SEV_CRITICAL } Severity;*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef enum
{
    SEV_MINOR,
    SEV_SERIOUS,
    SEV_CRITICAL
} Severity;

int main()
{
    char choice[10];
    Severity sev;


    printf("Severity (Minor, Serious, Critical): ");
    fgets(choice,sizeof(choice),stdin);

    choice[strcspn(choice,"\n")]='\0'; //Removes the newline by finding the first index posn of \n

    for(int i=0;i<strlen(choice);i++)
    {
        choice[i]=tolower(choice[i]);
    }

    if (strcmp(choice,"minor")==0)
    {
        sev=SEV_MINOR;
    }
    else if(strcmp(choice,"serious")==0)
    {
        sev=SEV_SERIOUS;
    }
    else if(strcmp(choice,"critical")==0)
    {
        sev=SEV_CRITICAL;
    }
    else
    {
        return 0;
    }

    return 1;
}
