#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void team()//This function is created to see the detailed information of every team
{
    int q;
    printf("Choose a team to know the detail about it\n");
    printf("1=Nepal\n2=India\n3=Pakistan\n4=Bhutan\n5=Maldives6=Bangladesh\n7=Srilanka");
    scanf("%d",&q);
    system("cls");
    if(q==1)
    {
        printf("Team Nepal\nPlayers\nGK\tKiran Chemjong\nGK\tBikesh Kuthu\nGK\tBishal Shrestha\nDF\tBiraj Maharjan (captain)\nDF\tAnanta Tamang\nDF\tKamal Shrestha\nDF\tJitendra Karki\nDF\tRohit Chand\nMF\tHemant Thapa Magar \nMF \tRajendra Rawal\nMF\tBishal Rai\nMF\tHeman Gurung\nMF\tBikram Lama\nMF\tAnjan Bista\nMF\tSujal Shrestha\nMF\tSunil Bal\nMF\tJagajeet Shrestha\nFW\tGeorge Prince Karki\nFW\tBimal Gharti Magar \nFW\tAnil Gurung RET \nFW \tNawayug Shrestha\nFW\tBharat Khawas 	");
    }
}
int Bet()//this function let you to start betting
{
    int n,r,l,k,match;
    int goal1,goal2;
    srand(time(NULL));
    goal1=rand()%9;//This is the random goal option
    goal2=rand()%9;
    printf("\n\n\t\t\t\tIn which game you want to keep Bet?");
    printf("\n\t\t\t\t1= Bangladesh Vs India\n");
    printf("\n\t\t\t\t2= Maldives Vs Bhutan\n");
    printf("\n\t\t\t\t3= Bhutan Vs Nepal\n");
    printf("\n\t\t\t\t4= Maldives Vs Pakistan\n");
    printf("\n\t\t\t\t5= Nepal Vs Pakistan\n");
    printf("\n\t\t\t\t6= India Vs Bhutan\n");
    printf("\n\t\t\t\t7= India Vs Maldives\n");
    printf("\n\t\t\t\t8= Bangladesh Vs Nepal\n");
    printf("\n\t\t\t\t9= Bhutan Vs Pakistan\n");
    printf("\n\t\t\t\t10= Nepal Vs India\n");
     scanf("%d",&match);
    //Here we select the upcoming match and choose the best team to start betting
    switch(match)
    {
        case 1:
            printf("Which Team you want to select? (\n1=Bangladesh\n2=India)\n");
            scanf("%d",&k);//user will choose the team
            printf("\n Bangladesh %d - %d India",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nBangladesh Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nIndia Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
        case 2:
            printf("Which Team you want to select? (\npress 1 for Maldives\n Press 2 for Bhutan)");
            scanf("%d",&k);
            printf("\n Maldives %d - %d Bhutan",goal1,goal2);
            if(goal1>goal2)
            {
                printf("\nMaldives Wins the match\n");
                if (k==1)
                    return 0;
                else
                    return 1;
            }
            else
                {printf("\nBhutan Wins the match ");
                if(k==2)
                    return 2;
                else
                    return 3;}
	case 3:
	printf("Which Team you want to select? (press 1 for Bhutan and Press 2 for Nepal)");
    scanf("%d",&k);
    printf("\n Bhutan %d - %d Nepal",goal1,goal2);
        if(goal1>goal2)
            {
                printf("\nBhutan Wins the match\n");
                if (k==1)
                    return 0;
                else
                    return 1;
            }
        else
            {printf("\nNepal Wins the match ");
             if(k==2)
                return 2;
            else
                return 3;}
    case 4:
    printf("Which Team you want to select? (press 1 for Maldives and Press 2 for Pakistan)");
    scanf("%d",&k);
    printf("\n Maldives %d - %d Pakistan",goal1,goal2);
        if(goal1>goal2)
            {
                printf("\nMaldives Wins the match\n");
                if (k==1)
                    return 0;
                else
                    return 1;
            }
        else
            {printf("\nPakistan Wins the match");
             if(k==2)
                return 2;
            else
                return 3;}

    case 5:
    printf("Which Team you want to select? (press 1 for Nepal and Press 2 for Pakistan)");
    scanf("%d",&k);
    printf("\n Nepal %d - %d Pakistan",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nNepal Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nPakistan Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
    case 6:
    printf("Which Team you want to select? (press 1 for India and Press 2 for Bhutan)");
    scanf("%d",&k);
    printf("\n India %d - %d Bhutan",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nIndia Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nBhutan Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
	case 7:
	printf("Which Team you want to select? (press 1 for India and Press 2 for Maldives)");
        scanf("%d",&k);
        printf("\n India  %d - %d Maldives",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nIndia Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nMaldives Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
   case 8:
    printf("Which Team you want to select? (press 1 for Bangladesh and Press 2 for Nepal)");
    scanf("%d",&k);
    printf("\n Bangladesh %d - %d Nepal",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nBangladesh Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nNepal Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
    case 9:
    printf("Which Team you want to select? (press 1 for Bhutan and Press 2 for Pakistan)");
    scanf("%d",&k);
    printf("\n Bhutan %d - %d Pakistan",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nBhutan Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nPakistan Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}
    case 10:
    printf("Which Team you want to select? (press 1 for Nepal and Press 2 for India)");
    scanf("%d",&k);
    printf("\n Nepal %d - %d India",goal1,goal2);
            if(goal1>goal2)
                {
                    printf("\nNepal Wins the match\n");
                    if (k==1)
                        return 0;
                    else
                        return 1;
                }
            else if(goal1==goal2)
            {
            printf("Match is draw\n");
            }
            else
                {printf("\nIndia Wins the match");
                if(k==2)
                    return 2;
                else
                    return 3;}

     printf("\n\n\n\t\t\t\t\tpress Q to return back the home page\n");
}
}
void fixtures()
{
    printf("\t\t\t\t\tUpcoming Fixtures");
    printf("\n\n\t\t\t\tSouth Asian Federation Football (SAFF) Game 2018\n");
    printf("On 2018/08/01\n");
    printf("Bangladesh Vs India\n");
    printf("Maldives Vs Bhutan");
    printf("\n\n On 2018/08/01\n");
    printf("Bhutan Vs Nepal\n");
    printf("Maldives Vs Pakistan\n");
    printf("\n\nOn 2018/08/15\n");
    printf("Nepal Vs Pakistan\n");
    printf("India Vs Bhutan");
    printf("\n\non 2018/08/16\n");
    printf("India Vs Maldives");
    printf("Bangladesh Vs Nepal");
    printf("\n\nOn 2018/08/20\n");
    printf("Bhutan Vs Pakistan");
    printf("Nepal Vs India");
}
int money()
{
    int sum=0;
    int r,nq[5],i,j,choice;
    time_t initialtime,finaltime;
   do{
   home:
       system("cls");
       initialtime=time(NULL);
       i=1;
    start:
        srand(time(NULL));
        r=rand()%10+1;
        nq[i]=r;
    for(j=0;j<i;j++)
        if(nq[j]==r)
            goto start;
    switch(r)
    {
    case 1:
        printf("\n\nSAFF stands for:\n");
        printf("\n\nA.South Asian Football Federation \nB.South Asian Federation Football\nC.South Africa Football Fanfest\nD. South Asian Football Foundation\n");

        if(toupper(getch())=='A')
        {
            sum=sum+50;
            printf("\n\nCorrect!!!"); printf("You earned \t 50");
            break;
        }
        else
            printf("\n\nWrong!!!");   printf("You earned \t0");
            break;

  case 2:
  printf("\n\n\nNumber of Team in SAFF games");
  printf("\n\nA.7\tB.6\n\nC.8\tD.9\n\n");
  if (toupper(getch())=='A')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!");printf("You earned \t 50");
       break;
   }
  else
         printf("\n\nWrong!!! The correct answer is A.7");   printf("You earned \t0");
  break;

  case 3:
  printf("\n\n\nWhen Afghanistan left the Association?");
  printf("\n\nA.2014\tB.2016\n\nC.2013\tD.2015n\n");
  if (toupper(getch())=='D')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!");printf("You earned \t 50"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.2015");   printf("You earned \t0");break;}


  case 4:
  printf("\n\n\nCaptain of Nepali Football Team?");
  printf("\n\nA.Biraj Maharjan\tB.Nirajan Rayamajhi\n\nC.Bimal Gharti Magar\tD.Navayug Shrestha\n\n");
  if (toupper(getch())=='A')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!"); printf("You earned\t50");break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Biraj Maharjan");break;}


  case 5:
  printf("\n\n\nFIFA ranking of Nepal current 2018??");
  printf("\n\nA.155\tB.165\n\nC.175\tD.185\n\n");
  if (toupper(getch())=='B')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!");   printf("You earned \t50"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.165");   printf("You earned \t0");break;}

  case 6:
  printf("\n\n\nIn september 26,1999 Nepal won the match against Bhutan By how many goals");
  printf("\n\nA.10\tB.5\n\nC.7\tD.6\n\n");
  if (toupper(getch())=='C' )
   {
       sum=sum+50;
       printf("\n\nCorrect!!!"); printf("You earned \t 50");break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.7");   printf("You earned \t0");break;}


  case 7:
  printf("\n\n\nIn 29 September 2003, Nepal lost the match against South Korea By how many goals");
  printf("\n\nA.18\tB.17\n\nC.15\tD.16\n\n");
  if (toupper(getch())=='D')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!"); printf("You earned \t 50"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.16");   printf("You earned \t0");break;}


  case 8:
  printf("\n\n\nBimal Gharti Magar joined one of the club of India?Name the Club?");
  printf("\n\nA.Mohun Bagan\tB.Kolkata FC\n\nC.Mumbai FC \tD.Hawer Qurry\n\n");
  if (toupper(getch())=='A')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!"); printf("You earned \t 50"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Mohun Bagan");   printf("You earned \t0");break;}


  case 9:
  printf("\n\n\n Navayug shrestha originally from which club?");
  printf("\n\nA.Nepal Army Club\tB.Nepal Police Club\n\nC. Manang Marshyangi\t\tD.Three Star\n\n");
  if (toupper(getch())=='A')
   {
       sum=sum+50;
       printf("\n\nCorrect!!!"); printf("You earned \t 50"); break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Nepal Army Club");
          printf("You earned \t0");
         break;}

}
printf("\n If you Want to play again press A otherwise \npress Enter");}while(toupper(getch())=='A');
return sum;

}

int main()
{
    int mum=0,r,paisa,amount,sum,psycho;
    char name[30],surname[100];
	char gender[100];
    char choose;
    printf("\n\n\t\t\t\t\tInput your Full Name\n\t\t\t\t\t \n");
    scanf("\t\t\t\t\t%s %s",&name, &surname);//Inputs the name of user
    printf("\n\n\t\t\t\t\tInput your Gender (m/f) \n\t\t\t\t\t \n");
    scanf("\t\t\t\t\t %s",&gender);//Inputs the gender
    system("cls");
    printf("\n\t\t\t\tWelcome To Nepali Bet house\n\n\t\t\t\t\tDeveloped by RCK Team\n");
    if(strcmp(gender,"m")==0)
    {
    printf("\n\t\t\t\t_____________ Mr.%s %s __________\n",name, surname);
	}
	if(strcmp(gender,"f")==0)
    {
    printf("\n\t\t\t\t_____________ Ms.%s %s __________\n",name, surname);
	}
	printf("\n\t\t\t\tYour Net worth=0\n");
    mainhome:/*This will redirects back to the Main page*/
    printf("\n\t\t\tChoose an option\t\t\t\t\t\t\n");
    printf("\n\t\t\tTo start betting press A\n");
    printf("\n\t\t\tTo earn money press M\n");
    printf("\n\t\t\tFor Help press H\n");
    printf("\n\t\t\tUpcoming Fixtures press F\n");
    printf("\n\t\t\tTo see the details about the team press T\n");
    choose=toupper(getch());
    system("cls");
    if(choose=='F')//Here user will see the upcoming Match Fixtures
       {
        fixtures();
        printf("\n\t\t\t\t\t\t\t\tPress Back to redirect to home page....\n");
        getch();
        system("cls");
        goto mainhome;
       }
        else if(choose=='M')
        {
            r=money();//sum is returning its value from the function money
            printf("\nPress Q to get back to Menu");
            if(toupper(getch())=='Q')
            {
                system("cls");
                r=r+mum;
                printf("\n\t\t\t\t\t\t\tYour Net worth=%d",r);
                psycho=r;
                goto mainhome;
            }
        }
        else if(choose=='A')//Here player will start betting
        {
           printf("Input the betting amount\n");
           scanf("%d",&amount);
           if(amount<=r)
            {
                paisa=Bet();
                if(paisa==0 || paisa==2)
                    {r=r+amount;printf("\n\nYou won the Bet\n");}
                else if(paisa==1 || paisa==3)
                     {r=r-amount;printf("\nYou lost the Bet");}
                printf("\n\n\t\t\t\t\t\t\tPress Q to redirect back to mainhome:\n");
                if(toupper(getch())=='Q')
                {
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t\tYour Net Worth=%d",r);
                     mum=r;
                    goto mainhome;

                }
            }
            else
            {printf("\nNot enough Balance");
            getch();
            system("cls");
             printf("\n\n\t\t\t\t\t\t\t\t\tYour Net Worth=%d",r);
             goto mainhome;
            }
        }
        else if(choose=='T')
        {
            team();
            printf("\n\n\t\t\t\tPress Q to redirect back to main home\n");
            scanf("%c",&choose);
            if(toupper(getch())=='Q')
            {
                system("cls");
                 printf("\n\n\t\t\t\t\t\t\t\t\tYour Net Worth=%d",r);
                goto mainhome;
            }
        }
}

