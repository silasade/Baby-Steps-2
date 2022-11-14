#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
    FILE *fp, *fo;
    fp =fopen(".AdamIn.txt", "r");
    fo=fopen(".AdamOut.txt","w");
    char step[100], ch;
    int count=0;
    int wordCOUNT=0;
    
    if (NULL ==fp){
        printf("File can't be opened");

    }
    while (fgets(step,100,fp)!=NULL){
        count++;
        if (count>1){
            for(int i=0; i<strlen(step); i++){
           if(step[i]=='U' && step[i]!='\n'){
            wordCOUNT=wordCOUNT+1;
           } 
           if (step[0]=='D'){
            wordCOUNT=0;
           }
           if (step[i]=='D')
           {
            break;
           }
           
        }
        fprintf(fo,"The number of steps for %s \n%d\n",step,wordCOUNT);
        }
        
    }
        
   
        
    fclose(fp);
    fclose(fo);
    
    return 0;
}