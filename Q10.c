#include <stdio.h>
#include <math.h>


int main(){
    int accuracy,cs,datas,role,status;
    int value,v,t,tr,d;
    v=t=tr=d=0;
    float modelsc;
    printf("Enter the following:\n1.AI model Accuracy (Between 0 to 100)\n2.Confidence Score (Between 0 to 100)\n3.Dataset Size (Any Size)\n4.User Role\n   1 for Admin\n   2 for Developer\n   3 for Researcher\n5.Model Status\n  1 for Ready\n  2 for Testing\n  3 for Training\n");
    scanf("%i %i %i %i %i",&accuracy,&cs,&datas,&role,&status);
    printf("Enter the value for permissions (between 0 and 15): ");
    scanf("%i", &value);

    if (value & 1)
        v=1;
    if (value & 2)
        t=1;
    if (value & 4)
        tr=1;
    if (value & 8)
        d=1;

    modelsc=((accuracy+cs)/2.0);

    if (accuracy>=80){
        if (cs>=75){
            if(datas>=1000){
                if (status==1){
                    if (d){
                        if (modelsc>=77){
                            if (role==1){
                                printf("The Model is Ready for Deployment\n");
                            }else{
                                printf("The User is not an Administrator\n");}
                        }else{
                            printf("The Model Score is less then 77\n");}
                    }else{
                        printf("User Does not have deployment Permission\n");}
                }else{
                    printf("Model is not Ready for Deployment\n");}
            }else{
                printf("The Model was trained on a Dataset of less then 1000\n");}
        }else{
            printf("The Models confidence Score is less then 75%\n");}
    }else
        printf("The Models Accuracy is less then 80%\n");







    return 0;
}