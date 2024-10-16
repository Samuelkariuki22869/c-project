//2D ARRAY
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
  int marks[2][3]={{30,60,90},{120,150,180}};
  for(i=0;i<2;i++){
  for(j=0;j<3;j++){

   printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
  }
  }
    return 0;
}
