/*
day 25-26 - bank management system
Author -Uma
Date - 25-10-2026 and 26-10-2026
*/

#include <stdio.h>

struct account{
    char name[50];
    int accountnumber;
    float balance;    
};

void displayaccount(struct account a){
    printf("-----ACCOUNT DETAILS------\n");
    printf("name : %s \n",a.name);
    printf("account number : %d \n",a.accountnumber);
    printf("balance : %f \n",a.balance);
}

void deposit(struct account *a){
    float amount;

    printf("enter deposit amount : rs.");
    if(scanf("%f", &amount)!=1){
        printf("invalid amount! \n");
        while(getchar()!= '\n');
        return;
    }

    if(amount<=0){
        printf("amount must be positive \n");
        return;
    }

    a->balance += amount;
    printf("deposit successful \n");
    printf("updated balance : rs.",a->balance);
}

void withdraw(struct account *a){
    float amount ;

    printf("enter withdrawl amount : rs.");
    if(scanf("%f",&amount)!=1){
        printf("invalid amount \n");
        while(getchar()!= '\n');
        return ;
    }

    if(amount <= 0){
        printf("amount must be positive \n");
    }
    else if(amount> a->balance){
        printf("insufficient balance \n");
    }
    else{
        a->balance -= amount;
        printf("withdrawl successful \n");
        printf("remaining balance : rs.",a->balance);
    }

}

int main(){
    struct account account;
    int choice;

    printf("---------CREATE BANK ACCOUNT--------\n");

    printf("enter account holders name : ");
    scanf("%49s",account.name);

    printf("enter account number : ");
    if(scanf("%d",&account.accountnumber)!=1){
        printf("invalid account number \n");
        return;
    }

    printf("enter opening balance : rs.");
    if(scanf("%f",&account.balance)!=1 || account.balance <0){
        printf("invalid opening balance \n");
        return 1;
    }

    do{
        printf("------BANK MANAGEMENT SYSTEM------- \n");
        printf("1. display account \n");
        printf("2. deposit money \n");
        printf("3. withdraw money \n");
        printf("4. check balance \n");
        printf("5. exit \n");
        printf("enter your choice : \n");

        if(scanf("%d", &choice)!=1){
            printf("invalid menu choice \n");
            while(getchar()!='\n');
            choice = 0;
            continue;
        }

        switch(choice){
            case 1:
                displayaccount(account);
                break;

            case 2:
                deposit(&account);
                break;

            case 3:
                withdraw(&account);
                break;

            case 4:
                printf("current balance : rs. %f \n",account.balance);
                break;

            case 5:
                printf("thank you for using our bank system \n");
                break;

            default:
                printf("invalid choice! try again \n");
        }

    }

    while(choice != 5);
    return 0;
}