#include <stdio.h>
void printsensordata(char label,void *ptr){
    switch (label){
        case 'f':{
            float temp= *(float *)ptr;
            printf("Temperature: %.2f*C\n",temp);
            break;
        }
        case 'i':{
            int motion = *(int *)ptr;
            if (motion==1){
                printf("Motion Status: Motion Detected\n");
            }else{
                printf("Motion Status: No Motion\n");
            }
            break;
        }
        case'c'{
            char door= *(char *)ptr
            if (door=='O'){
                printf("Door Status: Door Open\n");
            }else{
                printf("Door Status: Door Closed\n");
            }
            break;
        }
    default:
        printf("Invalid data type provided\n")
        break;
    }
}




main(){
    float temp=29.3;
    int motion=1;
    char lock='C';
    printsensordata('f',&temp);
    printsensordata('i',&motion);
    printsensordata('c',&lock);
}