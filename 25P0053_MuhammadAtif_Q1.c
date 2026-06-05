#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_STUD 50
#define MAX_COURSE 10

char stud[MAX_STUD][2][50];
char course[MAX_COURSE][4][50];
int mark[MAX_STUD][MAX_COURSE];
float attend[MAX_STUD][MAX_COURSE];
char enrolled[MAX_STUD][MAX_COURSE][50];
float gp[MAX_STUD][MAX_COURSE];
float cgpa[MAX_STUD];

int studCount = 0;   // counting number of students
int courseCount = 0;  // counting number of courses
// 1,2,3,4,6,7
int findCourse(char id[])
{
    for(int i=0;i<courseCount;i++)
      if(!strcmp(course[i][0],id))
        return i;
    return -1;
}
// 2,3,4,7
int findStudent(char id[]) 
{
    for(int i=0;i<studCount;i++)
      if(!strcmp(stud[i][0],id))
       return i;
    return -1;
}
// 1
void addCourse() 
{
    if(courseCount == MAX_COURSE) 
      return;

    char id[10];
    printf("\nEnter course ID: ");
    scanf("%s", id);

    if(findCourse(id) != -1) 
    {
        printf("This course is already enrolled!\n");
        return;
    }

    strcpy(course[courseCount][0], id);

    printf("Enter course Name: ");
    scanf("%s", course[courseCount][1]);

    printf("Enter max marks: ");
    scanf("%s", course[courseCount][2]);

    printf("Enter credit hours: ");
    scanf("%s", course[courseCount][3]);

    courseCount++;
}
// 2
void addStudent()
{
    if(studCount == MAX_STUD) return;

    char id[10];
    printf("\nEnter student ID: ");
    scanf("%s", id);

    if(findStudent(id) != -1)
    {
        printf("Student already exists!\n");
        return;
    }

    strcpy(stud[studCount][0], id);

    printf("Enter student name: ");
    scanf("%s", stud[studCount][1]);

    int totalEnroll;
    printf("Courses already enrolled in: ");
    scanf("%d", &totalEnroll);

    char cid[10];
    for(int i=0;i<totalEnroll;i++) 
    {
        printf("Enter course %d ID: ", i+1);
        scanf("%s", cid);

        if(findCourse(cid) == -1) 
        {
            printf("Course not found!\n");
            i--;
            continue;
        }
        strcpy(enrolled[studCount][i], cid);
    }

    studCount++;
}
// 3
void updateMarks() {
    char sid[10], cid[10];

    printf("\nEnter student ID: ");
    scanf("%s", sid);

    int s = findStudent(sid);
    if(s == -1)
     { 
        printf("Student not found!"); return; 
     }

    printf("Enter course ID: ");
    scanf("%s", cid);

    int c = findCourse(cid);
    if(c == -1) 
     {
        printf("Course not found!\n"); return; 
     }

    int m;
    printf("Enter the marks you got : ");
    scanf("%d", &m);

    if(m < 0 || m > atoi(course[c][2])) 
    {
        printf("Invalid marks are entered bro");
        return;
    }

    mark[s][c] = m;
}
// 4
void updateAttendance() 
{
    char sid[10], cid[10];

    printf("\nEnter student ID: ");
    scanf("%s", sid);

    int s = findStudent(sid);
    if(s == -1)
     {
        printf("Student not found!"); return; 
     }

    printf("Enter course ID: ");
    scanf("%s", cid);

    int c = findCourse(cid);
    if(c == -1)
     { 
        printf("Course Not Found!\n"); return; 
     }

    int a;
    printf("Enter attendance: ");
    scanf("%d", &a);

    if(a < 0 || a > 100) 
    {
        printf("Invalid attendance!\n");
        return;
    }

    attend[s][c] = a;
}
// 5
void calcGPA() {
    for(int i=0;i<studCount;i++) 
    {
        float sum = 0;
        int chSum = 0;

        for(int j=0;j<courseCount;j++) 
        {
            int mx = atoi(course[j][2]);
            int ch = atoi(course[j][3]);

            gp[i][j] = (mark[i][j] / (float)mx) * 4.0;

            sum += gp[i][j] * ch;
            chSum += ch;
        }

        cgpa[i] = (chSum == 0 ? 0 : sum / chSum);
    }

    printf("\nGPAs Calculated Successfully...");
}
// 6
void courseReport()
{
    char cid[10];
    printf("\nEnter course ID: ");
    scanf("%s", cid);

    int c = findCourse(cid);
    if(c == -1) 
     {
        printf("Course not found!\n"); 
        return; 
     }

    int high = mark[0][c], low = mark[0][c];
    int sum = 0, aSum = 0;

    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("%s : %s", course[c][1], course[c][0]);
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("ID          MARKS        ATTENDENCE      GPA");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");

    for(int i=0;i<studCount;i++) 
    {
        printf("%s%15d%15.0f%20.1f\n",
            stud[i][0], mark[i][c], attend[i][c], gp[i][c]);

        sum += mark[i][c];
        if(mark[i][c] > high) high = mark[i][c];
        if(mark[i][c] < low) low = mark[i][c];
        aSum += attend[i][c];
    }

    printf("~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("HIGH: %d  LOW: %d  AVG: %.1f  ATTENDENCE AVG: %.1f\n",
           high, low, (float)sum/studCount, (float)aSum/studCount);
    printf("~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
}
// 7
void studentReport() {
    char sid[10];
    printf("\nEnter student ID: ");
    scanf("%s", sid);

    int s = findStudent(sid);
    if(s == -1) 
     { 
        printf("Student not found!\n"); 
        return; 
     }

    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("%s : %s\n", stud[s][1], stud[s][0]);
    printf("~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("COURSE     MARKS     ATTENDENCE     GPA     STATUS\n");
    printf("~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");

    for(int i=0;i<courseCount;i++) 
    {
        if(strlen(enrolled[s][i]) == 0) continue;

        int c = findCourse(enrolled[s][i]);
        char status = (mark[s][c] < 50 || attend[s][c] < 75) ? 'F' : 'P';

        printf("%s%12d%12.0f%15.1f%10s\n",
               enrolled[s][i],
               mark[s][c],
               attend[s][c],
               gp[s][c],
               status=='F'?"Faiiil bro":"Paaaash bro");
    }

    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("CGPA : %.1f", cgpa[s]);
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
}
// 8
void topStudent() 
{
    float maxGPA = 0;
    for(int i=0;i<studCount;i++)
        if(cgpa[i] > maxGPA)
            maxGPA = cgpa[i];

    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("Toppers:");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");

    for(int i=0;i<studCount;i++)
        if(cgpa[i] == maxGPA)
            printf("%s%2s%2.1f\n",
                   stud[i][0], stud[i][1], cgpa[i]);

    printf("\n--------------------------------------------------------\n");
}
// 9
void warnAttendance() 
{
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
    printf("\t\tAttendance warnings (<75%%)");
    printf("\n~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");

    for(int i=0;i<studCount;i++)
        for(int j=0;j<courseCount;j++)
            if(attend[i][j] < 75)
                printf("%s%2s%2.1f\n",
                       stud[i][0], course[j][0], attend[i][j]);

    printf("\n--------------------------------------------------------\n");
}
// main 
void main() 
{
    char choice;
    while(1) 
    {
        printf("\n\n~`~`~`~`~`~`~`~`~`~`~`~`~`FAST NUCES~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");
        printf("1---->Register course\n");
        printf("2---->Register student\n");
        printf("3---->Update marks\n");
        printf("4---->Update attendance\n");
        printf("5---->Calculate GPA\n");
        printf("6---->Course report\n");
        printf("7---->Student report\n");
        printf("8---->Top student\n");
        printf("9---->Attendance warnings\n");
        printf("0---->Exit\n");
        printf("Enter your choice : ");
        scanf(" %c",&choice);

        switch(choice)
        {
            case '1':
             addCourse(); 
             break;
            case '2':
             addStudent(); 
             break;
            case '3':
             updateMarks(); 
             break;
            case '4':
             updateAttendance(); 
             break;
            case '5':
              calcGPA();
             break;
            case '6':
             courseReport(); 
             break;
            case '7':
             studentReport(); 
             break;
            case '8':
             topStudent(); 
             break;
            case '9':
             warnAttendance(); 
             break;
            case '0':
             return;
            default:
             printf("\nInvalid choice, enter number according to your choice(0-9).\n");
        }
    }
}
