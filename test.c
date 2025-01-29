#include<stdio.h>

int findSize(char arr[]){
    int size=0;
    while(arr[size]!='\0'){
        size++;
    }


    return size;
}

int compare(char arr[], char arrTwo[]){
    int a=findSize(arr);
    int b=findSize(arrTwo);
    if(a!=b){
        return 0;
    }
    int ok=1;
    for(int i=0; i<a; i++){
        if(arr[i]!=arrTwo[i]){
            ok=0;
            break;
        }  
    }

    return ok;
}


int main(){
    char arr[]="shivam";
    char arrTwo[]="shivama";
    printf("%d",compare(arr, arrTwo));

    return 0;
}