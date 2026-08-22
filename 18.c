#include<stdio.h>
#include<string.h>

int main(){
    FILE*fp1,*fp2;
    fp1=fopen("File.txt","r");
    if(fp1==NULL){
        return 1;
    }
    fp2=fopen("TextFile.txt","w");
    if(fp2==NULL){
        return 1;
    }
    char c;
    while((c=fgetc(fp1))!=EOF){
        if(c<='z'&&c>='a'){
            c-=32;
        }
        printf("%c",c);
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("TextFile.txt","r");
    if(fp2==NULL){
        return 1;
    }
    char ch[1000];
    int num=0;
    while(fscanf(fp2,"%s",ch)!=EOF){
        if(strcmp(ch,"THE")==0){
            num++;
        }
    }
    printf("%d",num);
    fclose(fp2);
}