#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<conio.h>
void advertising();
int createboard(char uname1[100],char uname2[100]);
int player1play(char arr[20][20],int oko,char unum1[100],char unum2[100],int cnt1,int cnt2,int cnt3,int cnt4,int cnt5,int cnt6,int cnt7,int cnt8,int cnt9);  
int player2play(char arr[20][20],int ok,int okoo,char num1[100],char num2[100],int cout1,int cout2,int cout3,int cout4,int cout5,int cout6,int cout7,int cout8,int cout9);
void lastadvertising(char usname1[100],char usname2[100]);
int main(){
  advertising();
  char username1[100];
  char username2[100];
  sleep(1);
  system("clear");
  printf("\n\n [+][+]....Enter the name of player1\n\t: ");
  scanf("%s",username1);
  sleep(1);
  printf("\n\n [+][+]....Enter the name of player2\n\t: ");
  scanf("%s",username2);
  createboard(username1,username2);
}
int createboard(char uname1[100],char uname2[100]){
  char arr[20][20];
  int i,j;
  //int count1,count2,count3;
  int k=1;
  int round=0;
  sleep(2);
  system("clear");
  printf("\n\n [+][+]...Here is your 'Tic Tac Toe game board'...[+][+]\n\n");
  sleep(3);
  for(i=0;i<=2;i++){
    printf(" ");
    for(j=0;j<=2;j++){
      arr[i][j]=(char )(k+48);
      printf("|   [%c]   ",arr[i][j]);
      k++;
    }
    printf("|");
    printf("\n");
  }
  sleep(2);
  system("clear");
  printf("\n\n [!][!]...How to play...[!][!]\n\n");
  sleep(1);
  printf(" [#]1.) Here in a Board have 1 to 9 numbers...\n");
  sleep(1);
  printf(" [#]2.) Here each player chose 1 to 9 numbers...\n");
  sleep(1);
  printf(" [#]3.) Please do not choose same number multiple times...\n");
  sleep(1);
  printf(" [#]4.) Here X give player1\n");
  sleep(1);
  printf(" [#]5.) Here O give player2\n");
  sleep(1);
  printf(" [#]6.) If player1 chose 1 so the number change into X..\n");
  sleep(1);
  printf(" [#]7.) as well as player2 chose any number it change into O..\n");
  sleep(1);
  printf(" [!][!]...Please read following instruction carefully\n");
  sleep(1);
  printf(" [^][^]...The game start after 6 second later....\n");
  sleep(5);
  system("clear");
  printf(" [#][#][@]...lets play...\n\n");
  sleep(2);
  
  for(i=0;i<=2;i++){
    printf(" ");
    for(j=0;j<=2;j++){
      
      printf("|   [%c]   ",arr[i][j]);
      
    }
    printf("|");
    printf("\n");
  }
  int jr=1;
  jr=player1play(arr,jr,uname1,uname2,1,1,1,1,1,1,1,1,1);
  if(1<jr<4){
    lastadvertising(uname1,uname2);
    exit(1);
  }

}
int player1play(char arr[20][20],int oko,char unum1[100],char unum2[100],int cnt1,int cnt2,int cnt3,int cnt4,int cnt5,int cnt6,int cnt7,int cnt8,int cnt9){
  int c=1;
  int ko=1;
  int count1=1;
  int i,j;
  int count2=1;
  int count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1;
  sleep(1);
   char p1;
  printf("\n [@][@]...%s lets choose any option 1 to 9...[$][$]\n\n\t:",unum1);
  fflush(stdin);
  scanf("%c",&p1);
  char *q1=&arr[0][0];
  char *q2=&arr[0][1];
  char *q3=&arr[0][2];
  char *q4=&arr[1][0];
  char *q5=&arr[1][1];
  char *q6=&arr[1][2];
  char *q7=&arr[2][0];
  char *q8=&arr[2][1];
  char *q9=&arr[2][2];
  if(p1==*q1&&cnt1==1){
    *q1='X';
    count1++;
  }else if(p1==*q2&&cnt2==1){
    *q2='X';
    count2++;
  }else if(p1==*q3&&cnt3==1){
    *q3='X';
    count3++;
  }else if(p1==*q4&&cnt4==1){
    *q4='X';
    count4++;
  }else if(p1==*q5&&cnt5==1){
    *q5='X';
    count5++;
  }else if(p1==*q6&&cnt6==1){
    *q6='X';
    count6++;
  }else if(p1==*q7&&cnt7==1){
    *q7='X';
    count7++;
  }else if(p1==*q8&&cnt8==1){
    *q8='X';
    count8++;
  }else if(p1==*q9&&cnt9==1){
    *q9='X';
    count9++;
  }
  sleep(1);  
  system("clear");
  printf("\n !!..The board is now..!!\n\n");
  for(i=0;i<3;i++){
    printf(" ");
    for(j=0;j<3;j++){
      
      printf("|   [%c]   ",arr[i][j]);
      
    }
    printf("|");
    printf("\n");
  }
  if(*q1=='X' && *q2=='X' && *q3=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                    
      if( i==0&&j==0 || i==0&&j==1 || i==0&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      //system("clear");
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q1=='X' && *q5=='X' && *q9=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){            
      if( i==0&&j==0 || i==1&&j==1 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
     
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q1=='X' && *q4=='X' && *q7=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                
      if( i==0&&j==0 || i==1&&j==0 || i==2&&j==0){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q2=='X' && *q5=='X' && *q8=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                    
      if( i==0&&j==1 || i==1&&j==1 || i==2&&j==1){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
        createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q3=='X' && *q6=='X' && *q9=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                
      if( i==0&&j==2 || i==1&&j==2 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q3=='X' && *q5=='X' && *q7=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                
      if( i==0&&j==2 || i==1&&j==1 || i==2&&j==0){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
  int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q4=='X' && *q5=='X' && *q6=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                
      if( i==1&&j==0 || i==1&&j==1 || i==1&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q7=='X' && *q8=='X' && *q9=='X'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",unum1);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){                
      if( i==2&&j==0 || i==2&&j==1 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else if(*q1!='1' && *q2!='2' && *q3!='3' && *q4!='4' && *q5!='5' & *q6!='6' && *q7!='7' && *q8!='8' && *q9!='9'){
    sleep(1);
    system("clear");
    printf("\n\n [!][!]~..Match is Draw..[!][!]\n\n");
    int again;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again);
    if(again==1){
      createboard(unum1,unum2);
    }else{
    return 2; 
    ko++;
  }
  }else{
    int v;
    fflush(stdin);
    v=player2play(arr,oko,ko,unum1,unum2,count1,count2,count3,count4,count5,count6,count7,count8,count9);
    if(v==4){
      return 3;
    }
    
  }

  }
  
  
int player2play(char arr[20][20],int ok,int okoo,char num1[100],char num2[100],int cout1,int cout2,int cout3,int cout4,int cout5,int cout6,int cout7,int cout8,int cout9){
  printf("\n [@][@]...%s lets choose any option 1 to 9...[$][$]\n\n\t:",num2);
  char p2;
  int round=1;
  int cou1=1;
  int cou2=1;
  int cou3=1,cou4=1,cou5=1,cou6=1,cou7=1,cou8=1,cou9=1;
  int ceo=1;
  cou1=cou2=cou3=1;
  fflush(stdin);
  scanf("%c",&p2);
  char *q1=&arr[0][0];
  char *q2=&arr[0][1];
  char *q3=&arr[0][2];
  char *q4=&arr[1][0];
  char *q5=&arr[1][1];
  char *q6=&arr[1][2];
  char *q7=&arr[2][0];
  char *q8=&arr[2][1];
  char *q9=&arr[2][2];  
  if(p2==arr[0][0]&&cout1==1){
    *q1='O';
    cou1++;
  }else if(p2==arr[0][1]&&cout2==1){
    *q2='O';
    cou2++;
  }else if(p2==arr[0][2]&&cout3==1){
    *q3='O';
    cou3++;
  }else if(p2==arr[1][0]&&cout4==1){
    *q4='O';
    cou4++;
  }else if(p2==arr[1][1]&&cout5==1){
    *q5='O';
    cou5++;
  }else if(p2==arr[1][2]&&cout6==1){
    *q6='O';
    cou6++;
  }else if(p2==arr[2][0]&&cout7==1){
    *q7='O';
    cou7++;
  }else if(p2==arr[2][1]&&cout8==1){
    *q8='O';
    cou8++;
  }else if(p2==arr[2][2]&&cout9==1){
    *q9='O';
    cou9++;
  }
  system("clear");
  int i,j;
  printf("\n\t!!..The board is now..!!\n\n");
  for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      
      printf("|   [%c]   ",arr[i][j]);
      
    }
    printf("|");
    printf("\n");
  }
    round++;
    printf(" [^]][^]%d round complete\n\n",round);
  
  if(*q1=='O' && *q2=='O' && *q3=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==0 || i==0&&j==1 || i==0&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q1=='O' && *q5=='O' && *q9=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==0 || i==1&&j==1 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q1=='O' && *q4=='O' && *q7=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==0 || i==1&&j==0 || i==2&&j==0){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }

}else if(*q2=='O' && *q5=='O' && *q8=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==1 || i==1&&j==1 || i==2&&j==1){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q3=='O' && *q6=='O' && *q9=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==2 || i==1&&j==2 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q3=='O' && *q5=='O' && *q7=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==0&&j==2 || i==1&&j==1 || i==2&&j==0){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q4=='O' && *q5=='O' && *q6=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==1&&j==0 || i==1&&j==1 || i==1&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      //system("clear");
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  }else if(*q7=='O' && *q8=='O' && *q9=='O'){
    system("clear");
    printf("\n [!] Please wait...");
    sleep(2);
    printf("\n\n [#][$]...Congrats!!!..%s win...[#][$]\n\n",num2);
    sleep(1);
    for(i=0;i<3;i++){
    printf("");
    for(j=0;j<3;j++){
      if( i==2&&j==0 || i==2&&j==1 || i==2&&j==2){
      printf("|---[%c]---",arr[i][j]);
      }else{
        printf("|   [%c]   ",arr[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
    int again2;
    sleep(1);
    printf("\n\n [#][#]..Do you want to play again??\n");
    sleep(1);
    printf(" [@][@]..Press 1 for play and 0 for quit\n\t:");
    scanf("%d",&again2);
    if(again2==1){
      createboard(num1,num2);
    }else{
    return 4; 
    ceo++;
  }
  
  }else{    
    player1play(arr,ok,num1,num2,cou1,cou2,cou3,cou4,cou5,cou6,cou7,cou8,cou9);
  }
}
void advertising(){
 // sleep(1);
  printf(" =======THIS GAME IS MADE BY=======\n\n\n");
  printf("*****   *   *   *   *   ****    *   *       *\n");
  printf("*       *   *   *   *   *   *   *   *      * *\n");
  printf("*****   *****   *   *   ****    *****     *****\n");
  printf("    *   *   *   *   *   *   *   *   *    *     *\n");
  printf("*****   *   *   *****   ****    *   *   *       *\n");
  
  
    
  
  printf("\n\n\n");
}
void lastadvertising(char usname1[100],char usname2[100]){
  system("clear");
  sleep(1);
  printf(" =====>>>>THANKS FOR PLAYING<<<=====\n\n");
  sleep(1);
  printf(" ====!!!! This project name !!!!<<<<<<\n\n");
  sleep(1);

  printf(" ++++++ (S+S) ++++++\n\n");
  sleep(1);                                                                    
  printf(" >>>>=== THIS PROJECT IS DEVELOP BY SHUBHADEEP ===<<<\n\n");
  sleep(2);
  printf(" ..This Game Is Tested On LINUX Terminal~\n ..~And Android Coding C app..~~\n\n");
  sleep(1);
  printf(" .. []..Thanks %s and %s For Playing This Game..[]\n\n",usname1,usname2);

  advertising();

}
