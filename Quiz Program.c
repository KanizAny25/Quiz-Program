#include<stdio.h>
#include<string.h>
#include<Conio.h>
main() {
  char question [5][100];
  char optionl [3][20],option2 [3][20],
  option3 [3][20],option4 [3][20],
  option5 [3][20];
  int response[5], correct ans[5], option,i, marks;

  strcpy(question[0], "Name the capital of Bangladesh");
  strcpy (optionl [0],"1.Rajshahi");
  strcpy(optionl[1] ,"2.Dhaka");
  strcpy(optionl[2] ,"3.Munshigonj");
  correct_ans[0] = 1;
  strcpy(question[1], "Name the national bird of Bangladesh");
  strcpy(option2 [0],"1.Oriental magpie-robin");

  strcpy(option2[1], "2. Peacock");
  strcpy(option2[2],"3. Parrot");
  correct_ans[1]=0;
  strcpy(question[2], "Name the  Prime minister of Bangladesh");
  strcpy(option3 [0],"1.Sakib ");
  strcpy(option3[1] ,"2. Khaleda Zia");
  strcpy(option3 [2],"3. Sheikh Hasina");
  correct_ans[2]=2;
  strcpy(question[3], " Most Famous Distric of  of Bangladesh");
  strcpy(option4 [0],"l. Tangail");
  strcpy(option4[1] ,"2. Munshigonj");
  strcpy(option4[2] ,"3. Sirajgonj");
  correct_ans[3] = 0;
  strcpy(question[4], " Which one is our nation flag colour? ");
  strcpy(option5[0],"l.Green,Red ");
  strcpy(option5[1], "2.Blue,Red ");
  strcpy(option5[2],"3. Yellow,Green");
  correct ans[4] = 0;
  do {
    printf("\n\n\n\n QUIZ PROGRAM");
    printf("\n*******************");
    printf("\n 1. Display Questions");
    printf("\n 2. Display Correct Answers");
    printf("\n 3. Display Result");
    printf("\n 4. EXIT");
    printf ("\n *************************");
    printf("\n\n\n Enter your option: ");
    scanf("%d", &option);
    switch(option)  {
       case 1:
           printf ("\n %s \n", question [0]);
           for(i=0;i<3;i++)   {
              printf("\n %s", optionl[i]);
           }
           printf ("\n\n Enter your answer number: ");
           scanf("%d", &response[0]);
           printf ("\n %s \n", question [1]);
           for (i=0;i<3;i++)   {
             printf("\n %s", option2[i]);
           }
           printf("\n\n Enter your answer number: ");
           scanf("%d", &response[1]);
           printf("\n %s \n", question[2]);
           for(i=0;i<3;i++)  {
             printf("\n %s", option3[i]);
           }
           printf("\n\n Enter your answer number: ");
           scanf ("%d", &response [2]);
           printf("\n %s \n", question[3]);
           for (i=0;i<3;i++)  {
              printf("\n %s", option4[i]);
           }
           printf("\n\n Enter your answer number: ");
           scanf ("%d", &response [3]);
           printf("\n %s \n", question[4]);
           for (i=0;i<3;i++)  {
               printf("\n %s", option5[i]);
           }
           printf("\n\n Enter your answer number: ");
           scanf ("%d", &response [4] );
           break;
       case 2:
           printf("\n\n CHECK THE CORRECT ANSWERS");
           printf("\n ************************");
           printf("\n %s \n %s",question[0] ,optionl[correct_ans[0]]);
           printf("\n\n %s \n%s",question[1] ,option2[correct_ans[1]]);
           printf("\n\n %s \n%s",question[2] ,option3[correct_ans[2]]);
           printf("\n\n %s \n%s",question[3] ,option4[correct_ans[3]]);
           printf("\n\n %s \n%s",question[4] ,option5[correct_ans[4]]);
           break;
       case 3:
           marks = 0;
           for(i = 0;i <= 4;i++)  {
             if(correct ans[i]+1==response[i])   {
                marks++;
             }
           }
           printf ("\n Out of 5 you score %d",marks);
           break;

  }

  }
  while(option!=4);
getch();
return 0;
}
