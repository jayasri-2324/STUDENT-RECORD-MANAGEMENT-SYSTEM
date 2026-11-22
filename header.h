#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>

typedef struct student
{
    int roll;
    char name[50];
    float percentage;
    struct student *next;
}NODE;

extern NODE *hptr ;


void Index_fn();
void student_Dload();
void student_add();
int  roll_no();
void student_delete();
void student_delroll();
void student_del(int n);
void student_delname();
void student_show();
void student_save();
void student_modify();
NODE *Roll_Modify(int roll);
void student_sort();
void student_Exit();
