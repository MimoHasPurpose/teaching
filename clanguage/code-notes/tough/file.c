#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    char name[20];
    char id[4];
    char rolln[4];
    fptr=fopen("smriti.txt","w");
    while(true)
    {
        printf("enter name, id roolno: \n");
        gets(name);
        gets(id);
        gets(age);
        if(fptr!=NULL)
        {
            fputs(name,fptr);
            fputs("\n", fptr);
            fputs(id,fptr);
            fputs("\n", fptr);
            fputs(rolln,fptr);
            fputs("\n", fptr);
        }
    }
    if(fptr==NULL)
    {
        printf("The file is not opened!\n");
    }
    fclose(fptr);
    return 0;
}