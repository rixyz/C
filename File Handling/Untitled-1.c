#include <stdio.h>
int main(){
    FILE *fileptr;
    char var[]="a";
    char var2[]="b";
    char ch[]={'c', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'}; 
    printf("a");

    printf("%s %s %c",var,var2,ch[0]);
    fileptr = fopen("testb.dat","r");

    
    if(fileptr==NULL){
        printf("Failed");
    } else {
        // fprintf(fileptr,"%s %s %c\n",var,var2,ch[0]);
        // fclose(fileptr);
        printf("%s %s %c",var,var2,ch[0]);
        while(fscanf(fileptr, "%s %s %c",var,var2,ch[0]) != EOF){
            printf("%s %s %c",var,var2,ch[0]);
        }
    }
    return 0;
}