#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void personalinfo();
void logo();
void mainmenu();
void mainmenucl();
void reportcheque();
void cbctest();
void timedate();
void more();
void bmi();
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    gotoxy(100,60);
    //printf("MMMMMMMM");
    timedate();
    system("color f0");
    //personalinfo();
    mainmenu();
    return 0;
}

void logo(){
printf("==========================================\n");
printf("                IIIcIIII  CCCCCC         =\n");
printf("                   IcI     C             =\n");
printf("                   IcI     C             =\n");
printf("                   IcI     C             =\n");
printf("                   IcI     C             =\n");
printf("                IIIIcIIII  CCCCCC        =\n");
printf("==========================================\n");
printf("                >>Instant Care<<\n");
printf("\n");

}
void personalinfo(){
char name[100] ;
scanf("%s");
printf("%c",name);

}
void mainmenu(){

int n;
logo();
printf("            Welcome to Instant Care\n");
printf("       =====<<<<| HOME MENU |>>>>=====\n\n");
printf("            01. New syntom.\n");
printf("            02. Daily Cheque.\n");
printf("            03. Report Cheque.\n");
printf("            04. More.\n");
printf("            Plz select a number(1-4): ");
scanf("%d",&n);

if(n == 3){
    reportcheque();
}

if(n == 4){
    more();
}


}

void reportcheque(){
system("color 30");
int n;
system("cls");
logo();
printf("            Report Cheque\n");
printf("            01. CBC Test Report.\n");
printf("            02. Diabatis\n");
printf("            03. Report Cheque.\n");
printf("            Plz select a number(1-3):\n");
scanf("%d",&n);

if(n == 1){
    cbctest();
}




}
void cbctest(){

system("cls");
logo();
printf("       =====<<<<| CBC TEST REPORT CHEQUE |>>>>=====\n\n");
int rbc,wbc,platilate,hg;
printf("                =>>>Enter your Haemoglobin value: ");
scanf("%d",&hg);
printf("                =>>>Enter your RBC value        : ");
scanf("%d",&rbc);

printf("                =>>>Enter your WBC value        : ");
scanf("%d",&wbc);

printf("                =>>>Enter your Platilate value  : ");
scanf("%d",&platilate);
}

void timedate(){
    time_t t;
    t = time(NULL);
    struct tm tm;
	tm = *localtime(&t);
	printf(" \n Time: ");
	 if(tm.tm_hour>=12)
    {
        if(tm.tm_hour==12)
            printf("12");
        else
            printf("%d", tm.tm_hour-12);
        printf("\n:%d:%d PM", tm.tm_min, tm.tm_sec);
    }
    else
        printf("%d:%d:%d AM", tm.tm_hour, tm.tm_min, tm.tm_sec);
    //printf("\n  Current Time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    printf("  Current Date: %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);

}
void more(){
system("cls");
logo();
printf("       =====<<<<| MORE |>>>>=====\n\n");
system("color 30");
int n;
system("cls");

logo();
printf("       =====<<<<| MORE |>>>>=====\n\n");

printf("            01. BMI Cheque.\n");
printf("            02. Diabatis\n");
printf("            03. About Medichine.\n");
printf("            Plz select a number(1-3):\n");
scanf("%d",&n);

if(n == 1){
    bmi();
}
else printf("Plz vaild number (1-3)");
}

void bmi(){

system("cls");

int i;

double h,w,b;

int g ;
printf("       =====<<<<| BMI |>>>>=====\n\n");

printf("01.Male\n");
printf("02.Female\n");
printf("Select your gender(1-2): ");
scanf("%d",&g);



if(g == 1){
system("cls");
printf("       =====<<<<|  BMI  |>>>>=====\n\n");
printf("==>>MALE\n");
printf("Enter your height(inches): ");
scanf("%lf",&h);
printf("Enter your weight(kg): ");
scanf("%lf",&w);

h = h*0.0254;

b = w/(h*h);
printf("Your BMI is: %0.1lf\n",b);
    if(b<18.5){
        printf("Under Weight!\n>>>Eat healthy food for gain weight\n");
    }else if(b>=18.5 && b<=24.9){
        printf("Normal.\n>>>Continue your diet list\n");
    }else if(b>=25.0 && b<=29.9){
        printf("Over Weight!!\n>>>Walk daily atleast 30min\n>>>Avoid all types of junck food ");
    }else if(b>=30.0 && b<=34.9){
    printf("OBESE!!!\n>>>Walk daily atleast 1hour\n>>>Avoid all types of junck food ");
    }else if(b>34.9){
     printf("EXTREMLY OBESE!!!!\n>>>Walk daily atleast 2hour must.\n>>>Avoid all types of junck food ");
    }
}else if(g == 2){
system("cls");
printf("       =====<<<<|  BMI  |>>>>=====\n\n");
printf("==>>MALE\n");
printf("Enter your height(inches): ");
scanf("%lf",&h);
printf("Enter your weight(kg): ");
scanf("%lf",&w);

h = h*0.0254;

b = w/(h*h);
printf("Your BMI is: %0.1lf\n",b);
    if(b<18.5){
        printf("Under Weight!\n>>>Eat healthy food for gain weight\n");
    }else if(b>=18.5 && b<=24.9){
        printf("Normal.\n>>>Continue your diet list\n");
    }else if(b>=25.0 && b<=29.9){
        printf("Over Weight!!\n>>>Walk daily atleast 30min\n>>>Avoid all types of junck food ");
    }else if(b>=30.0 && b<=34.9){
    printf("OBESE!!!\n>>>Walk daily atleast 1hour\n>>>Avoid all types of junck food ");
    }else if(b>34.9){
     printf("EXTREMLY OBESE!!!!\n>>>Walk daily atleast 2hour must.\n>>>Avoid all types of junck food ");
    }


}else {
    printf("Plz enter vaild input (1-2)");



}
int key;
printf("\npress enter key to return home");
key = getch();
system("cls");
switch(key){
    case 13: mainmenu();
    break;

    case 27:
    break;
}
}




