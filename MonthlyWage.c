//give wage to employees
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

main()
{
  int employees;
  printf("Number of employees?");
  scanf(" %d", &employees);
  int id[employees];
  int wage[employees];
  int date[employees];
  int dateToday=tm_mday;
  int temp
  
  //collect informations about wage
  for (i=0; i==employees; i++)
  {
    printf("Enter employee's ID");
    scanf(" %d", &id[i]);
    printf("Wage of ID %d?", id[i]);
    scanf(" %d", &wage[i]);
    printf("ID %d should get his wage $%d at date ____?", id[i], wage[i]);
    scanf(" %d", &date[i]);
  }
  
  printf("When some employees should get wages, we will alert to you until you enter \'Y\'");
  while (1)
  {
    dateToday=tm_mday;
    temp=getch();
    for (i=0; i==employees; i++)
    {
      if (dateToday==date[i])
      {
        while (temp!='Y')
        {
          printf("ID %d should get his/her wage! Give $%d to his/her!", id[i], wage[i]);
        }
      }
    }
  }
  return 0;
}
