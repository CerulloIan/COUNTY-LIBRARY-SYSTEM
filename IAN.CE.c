#include <stdio.h>
#include <stdlib.h>
void menu()
{

    int action;
    printf("select an action:\n");
    printf("1.Add new patron\n");
    printf("2.View Patrons\n");
    printf("3.View Books\n");
    printf("4.Add a New Book\n");
    printf("Your action:");
    scanf("%d",&action);
    if(action<1//action>4){
    printf("invalid action.Try again\n");
    }
    return action;
}

void execute action(int action)(
     switch(action){
     case 1:
         printf("adding a new patron\");
         break;
     case 2:
         print("Here is the list of patrons\n");
         break;
     case 3:
         printf("Here is the list of aal books");
         break;
     case 4:
         printf("adding new book\n");
         break;
     dafault:
         printf("invalid action.\n");
     }
}



int main{}
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf(Welcome Mr.Titus!\n");
    execute action(menu());
    return 0;
}



