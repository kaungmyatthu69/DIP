#include "stdio.h"
#include "stdlib.h"
int db[100];
int main(){
    srand(17);
    int key=10;
    int userage;
    int option;
    int userloginid;
    int flag=0;
    int userId;
    int indexId=0;
    int userconId;
    int flag1=0;
    int flag2=0;

    int  showMoney;
    int gnum;
    int inputmoney=0;
    int sMoney=0;
    int userdecided=0;


    while (key<=10){
        printf("Welcome from Game\n");
        printf("enter your age :");
        scanf("%d",&userage);

        if (userage>=18){
            printf("You can play game\n");
            while (true)
            {
                printf("press 1 to login: \npress 2 to register: \n press 3 to exit : \npress 4 to complete exit :");
                scanf("%d", &option);
                if (option == 1) {
                    printf("This is login page\n");
                    printf("enter your ID : ");
                    scanf("%d",&userloginid);
                    for (int i = 0; i <100 ; ++i) {
                        if (db[i]==userloginid){
                            flag=1;
                            printf("login successful \n");
                            printf("You can play game ");
                        }

                    }

                    if (flag==0){
                        printf("your id is invalid !\n");
                        printf("Plz first register !\n");
                        break;
                    }
                    printf("enter your show money :");
                    scanf("%d",&showMoney);
                    while (showMoney>1000){
                        printf("enter your guess number :");
                        scanf("%d",&gnum);
                        printf("enter your input money :");
                        scanf("%d",&inputmoney);

                        if (gnum==55){
                            sMoney=inputmoney*3;
                            showMoney+=sMoney;
                            printf("Congratulatiom ! you won %d \n",sMoney);
                            printf("Now your money :%d \n",showMoney);
                            printf("If you want continue play press (1) or to exit press(2) :");
                            scanf("%d",&userdecided);
                            if(userdecided==2){
                                exit(1);

                            } else if (userdecided==1){
                                continue;
                            } else{
                                printf("invalid decision plz press 1 or 2");
                            }

                        } else{
                            showMoney=showMoney-inputmoney;
                            printf("Sorry ! plz try again ! \n");
                            printf("Now you have :%d \n",showMoney);
                            printf("If you want continue play press (1) or to exit press(2) :");
                            scanf("%d",&userdecided);
                            if(userdecided==2){
                                printf("Bye Bye !");
                                exit(1);

                            } else if (userdecided==1){
                                continue;
                            } else{
                                printf("invalid decision plz press 1 or 2");
                            }

                        }

                    }

                    printf("not enough money plz more money \n");

                } else if (option == 2) {
                    printf("This is register page\n");
                    while (true) {

                        printf("Enter your id :");
                        scanf("%d", &userId);
                        for (int i = 0; i < 100; ++i) {
                            if (db[i] == userId) {
                                flag1 = 1;
                            }
                        }
                        if (flag1 == 1) {
                            printf("your id is already taken !\n");
                            printf("plz try again! \n");
                            continue;
                        } else {
                            printf("confirm your id :");
                            scanf("%d", &userconId);
                            if (userId==userconId){
                                flag2=1;
                                break;
                            }else{
                                printf("plz try again: \n");
                            }



                        }

                    }
                    if (flag2==1){
                        indexId++;
                        db[indexId]=userId;
                        printf("successful register !\n");

                    }






                } else if (option == 3) {
                    break;

                }else if (option==4){
                    exit(1);
                } else {
                    printf("ivalid option \n");
                }
            }

        } else{
            printf("You cannot play game ");
        }
    }
    return 0;
}
