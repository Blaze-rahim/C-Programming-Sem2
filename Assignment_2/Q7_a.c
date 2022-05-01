// WAP to store and display the name, marks in three subjects and roll no 
// of n students using structure. Display the output in tabular form.
#include <stdio.h>
struct student{
    char name[20];
    int sub1, sub2, sub3, rollno;
} s ;

int main(){
    struct student s[50];
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
        printf("Name : ");
        scanf("%s",&s[i].name);

        printf("\nMarks of sub1 : ");
        scanf("%d",&s[i].sub1);

        printf("\nMarks of sub2 : ");
        scanf("%d",&s[i].sub2);

        printf("\nMarks of sub3: ");
        scanf("%d",&s[i].sub3);

        printf("\nRoll No. : ");
        scanf("%d",&s[i].rollno);
    }

    printf("\nDisplaying info of %d students\n",n);
    printf("Rollno. Name\t Marks1\t Marks2\t Marks3\t \n");
    
    for(int j = 0; j<n; j++)
        printf("%d\t%s\t %d\t %d\t %d\t\n", s[j].rollno,s[j].name,s[j].sub1,s[j].sub2,s[j].sub3);
    return 0;
}