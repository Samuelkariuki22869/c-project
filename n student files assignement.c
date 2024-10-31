#include <stdio.h>
#include <stdlib.h>

struct student{

char name[50];
int marks;

}student;

int main()
{int i,n;
FILE*fp;

printf("Enter number of students ");
scanf("%d",&n);

for(i=0;i<=n;i++){
 printf("Enter name and marks for the students");
 scanf("%s %d",student.name,&student.marks);

}

//open append mode
fp=fopen("student.txt","a");
if(fp==NULL){
    perror("Error in opening file");
    exit(0);
}
//student information
for(i=0;i<=n;i++);
fprintf(fp,"%s %d\n",student.name,student.marks);
fclose(fp);
printf("student information written to file.\n");

    return 0;
}
