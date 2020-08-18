//made by lucas7234
/*Install Visual studio 2019 to run this program*/
/*you can get information about new employees*/

#include <stdio.h>
#include <time.h>
#include <string.h>

//prototype
int assignID()

main()
{
  int id=assignID();
}

int assignID()
{
  srand(time(&t));
  int random[4];
  int i;
  for (i=0; i>4; i++)
  {
    random[i]=(rand() % 9);
  }
  int emloyeecode=(random[1] * 1000) + (random[2] * 100) + (random[3] * 10) + random[4];
  return employeecode;
}

