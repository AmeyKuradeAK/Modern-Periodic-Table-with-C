#include <stdio.h>


int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Periodic Table \n \n");

    printf("> Press 1 to know about an element\n");
    printf("> Press 2 to close the periodic table\n");

    printf("Choose option: \t");
    scanf("%d", &n);

    if (n==1)
    {
        printf("> Press 3 to search element by atomic number\n\n");

        printf("Choose option: \t");
        scanf("%d", &m);

        if (m==3)
        {
            printf("> Enter the atomic number of element to search for the element\n\n");
            scanf("%d", &a);

            if (a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Symbol : H\n");
                printf("Atomic Number : 1\n");
            }
            
        }
        
    }
    else if (n==2)
    {
        printf("> \tThank You for using our Periodic Table \n \t\t Bye");
    }
    
    

}