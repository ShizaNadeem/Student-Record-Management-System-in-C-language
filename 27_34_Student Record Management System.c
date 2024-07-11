/* Final Semester Project
 Subject: Programming Fundamentals
 Group Participants: Shiza Nadeem, Zainab Mazhar
 Registration Numbers: FA20-BCE-082, FA20-BCE-093
 Serial Numbers: 27, 34
 Dated: June 6th, 2021*/
#include<stdio.h>
#include"27_34_Student Record Management System.h"
int main()
{
    int choice;
    printf("\t\t\t\t\t********************************************");
    printf("\t\t\t\t\t\t\t\t\tWelcome To Student Record Management System");
    printf("\t\t\t\t\t\t\t\t\t********************************************");

    printf("\n\n1.Login\n");
    printf("2.Student Record\n");
    printf("3.Mark Sheet\n");
    printf("4.Search Record\n");
    printf("5.Display List\n");
    printf("6.END\n");
    printf("\nPlease select choices(1-6): ");
    scanf("%d",&choice);

    if(choice==1)
        login();

    if(choice==2)
        Student_Record();

    if(choice==3)
        Mark_Sheet();

    if(choice==4)
        Search_Record();

    if(choice==5)
        Display_List();

    if(choice==6)
        End();
}

login()
{
    int pass;
    char user;

    printf("\n\t----LOGIN----- \n");
    printf("\nPlease enter the User name: ");
    scanf("%s",&user);

    printf("Please enter the Password: ");
    scanf("%d",&pass);
    printf("\nAccount Login Successful ! \n");
}

Student_Record()
{
    struct Student_Record
    {
        int RN,dd,mm,yy,CNIC,PN;
        char name,FN;
    };
    struct Student_Record S1;

    printf("\n\t----STUDENT RECORD----\n");

    printf("\nEnter Student's First Name only: ");
    scanf("%s",&S1.name);

    printf("Enter Registration Number: ");
    scanf("%d",&S1.RN);

    printf("Enter Father's Name: ");
    scanf("%s",&S1.FN);

    printf("Enter Date Of Birth: ");
    scanf("%d/%d/%d",&S1.dd,&S1.mm,&S1.yy);

    printf("Enter CNIC: ");
    scanf("%d",&S1.CNIC);

    printf("Enter Phone Number: ");
    scanf("%d",&S1.PN);

    printf("\nStudent Information saved successfully! \n");
}

Mark_Sheet()
{
    int i, j;
    int marks [3][3];

    printf("\nEnter student's marks in the following subjects:\n");
    printf( "\n  English\tChemistry\tPhysics");
    printf( "\n  Urdu\t\tMathematics\tPak-Studies");
    printf( "\n  Statistics\tHistory\t\tGeography\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("\nMarks[%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nMarks of students in table form are as follows: \n");

    for (i=0; i<3; i++ )
    {
        for (j=0; j<3; j++)
        {
            printf ("   %d", marks[i][j]);
        }

        printf("\n");
    }
    printf("\nMarks of the student are saved successfully! \n");
}

Search_Record()
{
    int ID[10]={223,193,224,204,214,170,184,194,202,300},x,i;

    printf("\n\t----SEARCH RECORD----\n");
    printf("\nEnter Student ID:- ");
    scanf("%d",&x);

    for(i=0;i<=9;i++)
        if(x==ID[i])
                printf("\nStudent Record Found !\n");
}

Display_List()
{
    printf("\n--CATEGORY === ID ==== NAME ===== COURSE ===== GPA--\n");

    printf("\n Student === 223 ==== Shiza Nadeem ===== BCE ===== 3.54 ");
    printf("\n Student === 193 ==== Zainab Mazhar ===== BCE ===== 3.6 ");
    printf("\n Student === 224 ==== Sarah Kayani ===== BCE ===== 3.6 ");
    printf("\n Student === 204 ==== Aleena Imran ===== BCE ===== 3.7 ");
    printf("\n Student === 214 ==== Ibrahim Yazdani ===== BCE ===== 3.0 ");
    printf("\n Student === 170 ==== Muhammad Hunzala ===== BCE ===== 3.6 ");
    printf("\n Student === 184 ==== Huzeyfa Aqeel ===== BCE ===== 3.8 ");
    printf("\n Student === 194 ==== Ameerah Wali ===== BCE ===== 3.3 ");
    printf("\n Student === 202 ==== Anayah Asgar ===== BCE ===== 3.0 ");
    printf("\n Student === 300 ==== Yusuf Abdullah ===== BCE ===== 3.4 \n ");
}

End()
{
    system("cls");
    printf("\t ----Project Made By %s & %s----",NAME1,NAME2);
}




