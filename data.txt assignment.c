#include <stdio.h>
#include <stdlib.h>

 void writetoafile(const char *filename){

    FILE*fptr;
    char sentence[101];

    //prompting a user to enter of 100 characters
    printf("enter a sentence of 100 characters:");
    fgets(sentence,101,stdin);



    fptr = fopen(filename,"w");
    if(fptr == NULL){
        perror("error in openning");
        exit(0);
    }
fprintf(fptr,"%s",sentence);
fclose(fptr);





}
    void readfile (const char *filename){
    FILE*fptr;
    char c;

    fptr = fopen(filename,"r");
    if (fptr == NULL){
        perror("error in opening");
        exit(0);
    }
    printf("Contents of %s:\n",filename);
    while((c = fgetc(fptr)) !=EOF){
    putchar(c);
    }
    fclose(fptr);
    }

    void appendtoafile(const char *filename){
        FILE*fptr;
        char sentence[101];
    printf("enter a sentence to append:");
    fgets(sentence,101,stdin);

    fptr = fopen(filename,"a");

    if(fptr == NULL){

        perror("error opening file");
        exit(0);
    }
    fprintf(fptr,"%s",sentence);
    fclose(fptr);


    }
    int main(){
    writetoafile("data.txt");
    read
	file("data.txt");
    appendtoafile("data.txt");
    readfile("data.txt");
    return(0);

    }
