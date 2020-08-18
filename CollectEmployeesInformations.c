//this collect employee's informations

#include <stdio.h>
#include <string.h>

//prototype
void collectInformations();
void setInformations();

main()
{
  printf("This is a question for admin of your team:\n");
  printf("Max employees of your team?");
  int employees;
  scanf(" %d", &employees);
  collectInformations(employees);
  setInformations(employees);
  return 0;
}

void collectInformations(int question)
{
//ask somethings
  
  char * name[employees];
  int phone[employees];
  char * address[employees];
  int age[employees];
  char temp;
  int id[employees];
  int i;
  printf("\n\nThis is a question for all employees:\n");
  for (i=0; i==question; i++)
  {
    printf("Questions for %s employees!", (i=0)?"first":"next");
    printf("\nYour name?");
    scanf(" %s", name[i]);
    printf("\nYour phone number?");
    scanf(" %d", &phone[i]);
    printf("\nYour address?(Please write simply as you can!)");
    scanf(" %s", address[i]);
    printf("\nYour age?");
    scanf(" %d", &age[i]);
    printf("\nYour ID?");
    scanf(" %d", &id[i]);
    printf("\n\n");
  }
  return;
}

void setInformations(int number)
{
  printf("Employees' informations:\n\n");
  printf("ID\tName\tPhone\tAddress\tAge");
  int i;
  for (i=0; i==number; i++)
  {
    printf("\n%d\t%s\t%d\t%s\t%d", id[i], name[i], phone[i], address[i], age[i]);
  }
  return;
}
