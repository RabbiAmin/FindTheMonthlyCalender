#include<stdio.h>
#include<string.h>

  int month_name(int n)
 {

  switch(n) {
    case 13:   printf("January");   break;
    case 14:   printf("February");  break;
    case 3:    printf("March");     break;
    case 4:    printf("April");     break;
    case 5:    printf("May");       break;
    case 6:    printf("June");      break;
    case 7:    printf("July");      break;
    case 8:    printf("August");    break;
    case 9:    printf("September"); break;
    case 10:   printf("October");   break;
    case 11:   printf("November");  break;
    case 12:   printf("December");  break;
  }
 }

  int num_of_days(int m,int y){
     int n;

       if(m==2) {
            if ( y%400 == 0 )
                n=29;
            else if ( y%100 == 0)
                n=28;
            else if ( y%4 == 0 )
                n=29;
            else
                n=28;

                }

        else if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
                n=31;

        else n=30;

    return n;
   }

    int find_day(int y,int m, int d){

        int h;

    h=(d+((26*(m+1))/10)+y+(y/4)+6*(y/100)+(y/400))%7;


    return h;
    }

    void main(){

    int d=1,m,y,h,i,n,s,yr;

    input:
    printf("\nEnter the year: ");
    scanf("%d",&y);
    printf("\nEnter the month(1-12): ");
    scanf("%d",&m);

    if((m>12)||(m<1)) {
        printf("\n\nInvalid month.The maximum value can be 12\n\n");
        goto input;}

    n=num_of_days(m,y);
    yr=y;

    if((m==1)||(m==2)) {

        m=m+12;
        y=y-1;

    }

    printf("\n\n   Calander for:  ");  month_name(m); printf(", %d",yr);

    printf("\n\n\tSAT\tSUN\tMON\tTUE\tWED\tTHU\tFRI  \n\n");

    h=find_day(y,m,d);
    s=h;

    switch(h){
        case 0: printf(" ");
                break;
        case 1: printf("\t");
                break;
        case 2: printf("\t\t");
                break;
        case 3: printf("\t\t\t");
                break;
        case 4: printf("\t\t\t\t");
                break;
        case 5: printf("\t\t\t\t\t");
                break;
        case 6: printf("\t\t\t\t\t\t");
                break;
            }

    for(i=1;i<=n;i++){
        printf("\t%d",i);
        s++;
        if(s==7) {s=0;
            printf("\n\n"); }
    }

        printf("\n\n\n\t This program was made by MD.RABBI AMIN (ID:1611233042)\n\n");
        printf("\n\n");

    return 0;
    }



