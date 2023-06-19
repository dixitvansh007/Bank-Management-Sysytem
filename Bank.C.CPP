#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{

float draw,dep,transfer;
char name[24];
float balance=5000;
int account,account1,account2;
int type;
int transaction=1;
int i,j;
clrscr();
for(i=0;i<=138;i++)
{
gotoxy(1,1);
textcolor(i+BLINK);
printf("\n\n");
cprintf("    \x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03 R V INSTITUTE OF TECHNOLOGY, BIJNOR \x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03");
delay(i);
}
textcolor(12+BLINK);
printf("\n\n");
cprintf("                       WELCOME_IN_OUR_QUICK_BANK_SERVICE");
textcolor(10);
printf("\n\n");
cprintf("ENTER_YOUR_NAME: ");
scanf("%s",&name);
textcolor(10); //MAGNETA COLOR
printf("\n");
cprintf("PLEASE_ENTER_YOUR_ACCOUNTE_NO.: ");
scanf("%d",&type);
while(transaction == 1)
{
int option;
textcolor(10);
printf("\n");
cprintf("CHOOSE_WHAT_YOU_WANT_TO_DO:");
printf("\n");
textcolor(12);
cprintf("1 - Balance_Enquiry");
printf("\n");
cprintf("2 - Deposit");
printf("\n");
cprintf("3 - Withdraw");
printf("\n");
cprintf("4 - Transfer");
printf("\n");
scanf("%d",&option);
switch(option)
{
case 1:
textcolor(10);//10 Used for green color;
printf("\t\t\t");
cprintf("*BALANCE ENQUIRY*");
printf("\n\n");
textcolor(12);
cprintf("Your_current_balance_is: %.2fRs\n",balance);
break;
case 2:
textcolor(10);
printf("\n\t\t\t");
cprintf("*DEPOSIT AMMOUNT*");
printf("\n\n");
textcolor(12);
cprintf("How_much_money_do_you_want_to_deposit:");
scanf("%f",&dep);
if(dep > 0 && dep<=20000)
{
printf("\n");
textcolor(12);
cprintf("Your_%.2fRs._deposited_in_your_account.",dep);
printf("\n\n");
balance+=dep;
}
else if(dep>20000)
{
textcolor(12);
printf("\n");
cprintf("You_can't_deposit_that_much_ammount_in_one_time.");
printf("\n\n");
}
else
{
textcolor(10+BLINK);
printf("\n");
cprintf("Invalid_deposit_amount");
printf("\n");
}
break;
case 3:
printf("\n\t\t");
textcolor(10);
cprintf("*WITHDRAW AMMOUNT*");
printf("\n\n");
textcolor(12);
cprintf("How_much_money_do_you_want_to_withdraw:");
scanf("%f",&draw);
if(draw<=balance && draw<=20000)
{
printf("\n");
textcolor(12);
cprintf("You_just_withdraw %.2fRs. ",draw);
printf("\n\n");
balance-=draw;
}
else if(draw>20000)
{
textcolor(12);
printf("\n");
cprintf("You_can't_withdraw_that_much_amount_in_one_time.");
printf("\n\n");
}
else
{
printf("\nyou dont have enough money\n\n");
}
break;
case 4:
textcolor(10);
printf("\t\t\t");
cprintf("*TRANSFER AMMOUNT*");
printf("\n\n");
textcolor(12);
cprintf("Account_you_want_to_transfer: ");
scanf("%d",&account2);
printf("\n");
textcolor(12);
cprintf("How_much_ammount?: ");
scanf("%f",&transfer);
if(balance>=transfer)
{
printf("\n");
textcolor(12);
cprintf("Your %.2fRs successfully_transfered",transfer);
printf("\n\n");
balance-=transfer;
}
else
{
textcolor(12);
printf("\n");
cprintf("You_do't_have_sufficient_balance");
printf("\n\n");
}
break;
default:
textcolor(10+BLINK);
printf("\n\n\t\t\t     ");
cprintf("Invalid_Transaction");
printf("\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("\n\n");
textcolor(10);
cprintf("Do_you_want_to_do_another_transaction?");
printf("\n");
textcolor(12);
cprintf("1. Yes 2. No");
printf("\n");
scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{
textcolor(10+BLINK);
printf("Invalid no.\nchoose between 1 and 2 only\n");
}
}
}
clrscr();
printf("\n\t\t\t    -----------------------");
printf("\n\t\t\t      ");
textcolor(10+BLINK);
cprintf("QUICK_BANK_SERVICE");
printf("\n");
printf("\t\t\t    -----------------------\n\n");
printf("\t\t\t");
textcolor(12+BLINK);
cprintf("Date:17/11/2021");
printf("\t   ");
textcolor(12+BLINK);
cprintf("Time:10:20 Am");
printf("\n");
printf("\n\t\t\t ");
textcolor(12+BLINK);
cprintf("\4Your name: %s",name);
printf("\n\n");
printf("\t\t\t ");
textcolor(12+BLINK);
cprintf("\4Your account no: %d",type);
printf("\n\n");
if(dep >= 0 && dep < 20000)
{
textcolor(12+BLINK);
printf("\t\t\t ");
cprintf("\4You've deposited %.2fRs",dep);
printf("\n");
}
else
{
printf("\t\t\t ");
textcolor(12+BLINK);
cprintf("\4You've deposited 0Rs");
printf("\n");
}
if(draw>0 && draw<=20000 && draw<=balance)
{
printf("\t\t\t ");
textcolor(12+BLINK);
cprintf("\4You've withdraw %.2fRs",draw);
printf("\n");
}
else
{
printf("\t\t\t ");
textcolor(12+BLINK);
cprintf("\4You've withdraw 0Rs");
printf("\n");
}
if(transfer>0 && transfer<=20000 && transfer<=balance)
{
printf("\t\t\t ");
textcolor(12+BLINK);
cprintf("\4You've Transfered %.2fRs",transfer);
printf("\n");
}
else
{
textcolor(12+BLINK);
printf("\t\t\t ");
cprintf("\4You've Transfered 0Rs");
printf("\n ");
}
printf("\n\t\t\t\t    ");
textcolor(10+BLINK);
printf("\n\n\t\t\t");
cprintf("\x03\x03\x03\x03\x03\x03\x03\x03  Thank_You  \x03\x03\x03\x03\x03\x03\x03\x03");
printf("\n\t\t\t");
textcolor(10+BLINK);
printf("\n\t\t\t");
cprintf(" WELCOME_TO_QUICK_BANK_SERVICE");
printf("\n");
printf("\t\t\t      ");
textcolor(10+BLINK);
printf("\n\t\t\t");
cprintf("      www.rvit.ac.in");
printf("\n");
textcolor(10+BLINK);
printf("\n");
cprintf("Guided_By:");
printf("\t\t\t\t\t\t     ");
cprintf("Developed_By:");
textcolor(12+BLINK);
printf("\n");
cprintf("\4");
cprintf("Mr.Sumit_Singh");
printf("\t\t\t\t\t\t     ");
cprintf("\4Vicky_Giri");
printf("\n");
printf("\t\t\t\t\t\t\t     ");
cprintf("\4Vansh_Dixit");
printf("\n");
printf("\t\t\t\t\t\t\t     ");
cprintf("\4Divyansh_Sharma");



getch();
return 0;
}