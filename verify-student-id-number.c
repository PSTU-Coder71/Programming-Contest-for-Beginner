#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ID[8];
    scanf("%s",&ID);
    if(ID[2]=='0' && (ID[3]>='1' && ID[3]<='8')){
        if (ID[0]=='9' && ID[1]=='9'){
            printf("Session: 20%c%c-00\n",ID[0],ID[1]);
            }
        else if (ID[1]=='9'){
            printf("Session: 20%c%c-%c0\n",ID[0],ID[1],ID[0]+1);
        }

        else
            printf("Session: 20%c%c-%c%c\n",ID[0],ID[1],ID[0],ID[1]+1);
        printf("Faculty: ");
        if (ID[3]=='1')
            printf("Agriculture\n");
        else if (ID[3]=='2')
            printf("Computer Science and Engineering\n");
        else if (ID[3]=='3')
            printf("Business Administration and Management\n");
        else if (ID[3]=='4')
            printf("Animal Science and Veterinary Medicine\n");
        else if (ID[3]=='5')
            printf("Fisheries\n");
        else if (ID[3]=='6')
            printf("Disaster Management\n");
        else if (ID[3]=='7')
            printf("Nutrition and Food Science\n");
        else if (ID[3]=='8')
            printf("Land Management and Administration\n");
    }
    else
        printf("Invalid ID!\n");

    return 0;
}
