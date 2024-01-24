#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <string.h>

struct Transition{
int source;
char c;
char command;
int target;
};

    FILE *fin;
    char inputfilename[30],input[255],ans;
    struct  Transition *transitions;
    int n,i;
    int nTrasitions;
    int initial;
    int inputHeader;

int check_input(char *s,struct Transition *transitions,int header,int initial){
     /*initialize  the current state of the machine*/
     int currentPos=initial;
     /*check the position of the header before the machine starts
     if(input[inputHeader]!='#'){
        printf("Wrong input!Please try again!\n");
        return 0;
     }*/
     while(currentPos>-1 && input[inputHeader]!='\0'){

             for(i=0; i<nTrasitions; i++){
                if(transitions[i].source==currentPos && input[inputHeader]==transitions[i].c){
                   if(transitions[i].command=='R'){
                           inputHeader++;
                           if(inputHeader>=strlen(input))return 0;
                   currentPos = transitions[i].target;
                   break;
                   }
                   else if(transitions[i].command=='L'){
                            inputHeader--;
                            /*check the header if by moving LEFT moves through  the first # of the string(input)*/
                            if(inputHeader<0)return 0;
                            currentPos = transitions[i].target;
                            break;
                   }
                   /*read/write  on the tape*/
                   else if(input[inputHeader]==transitions[i].c){
                             input[inputHeader] = transitions[i].command;
                             currentPos = transitions[i].target;
                   }
                   else return 0;
                }
                /*if currentPos=-1 we are in the final state and the machine stops*/
                if(currentPos==-1){
                    return -1;
                }
             }
     }
    return currentPos;
}


int main(){
     /*read from file*/
     while (TRUE){
              printf("Give input file name: ");
              gets(inputfilename);
              fin = fopen(inputfilename, "r");

              if (fin!='\0')break;
              printf("cannot open input file %s. Try again.\n", inputfilename);
       }

     fscanf(fin,"%d",&n);
     fscanf(fin,"%d",&initial);
     initial--;

     fscanf(fin,"%d",&nTrasitions);
     struct Transition  *transitions =malloc(nTrasitions*sizeof(struct Transition));

     for(i=0; i<nTrasitions; i++){
       fscanf(fin,"%d",&transitions[i].source);
       fscanf(fin,"%c",&transitions[i].c);
       fscanf(fin,"%c",&transitions[i].command);
       fscanf(fin,"%d",&transitions[i].target);
       transitions[i].source--;
       transitions[i].target--;
     }
     fclose(fin);

do{

     printf("Give the input:");
     scanf("%s",input);
     printf("Give the position of the header:");
     scanf("%d",&inputHeader);
     inputHeader--;

     /*print results*/
     if(check_input(input,transitions,inputHeader,initial)==-1){
        printf("Output:%s",input);
        printf("\n");
     }
     else{
        printf("The machine has stopped!");
        printf("\n");
        printf("Output:%s",input);
        printf("\n");
        printf("Header:%d",inputHeader);
        printf("\n");
        printf("Position:%d\n",check_input(input,transitions,inputHeader,initial)+1);
        printf("Out of bounds!");
        printf("\n");
     }
     printf("You want to give another input?(Y/N)");
     do{
        scanf("%c", &ans);
     }while (toupper(ans)!= 'N' && toupper(ans)!= 'Y');
    } while (toupper(ans)!='N');
return 1;}

