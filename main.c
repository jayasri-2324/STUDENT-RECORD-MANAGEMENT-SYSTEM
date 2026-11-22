#include"header.h"

NODE *hptr=NULL;
int main()
{
        student_Dload();
        while(1)
        {
                char op;
                Index_fn();
		printf("Enter the choice : ");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A':
                        case 'a':
                                printf("\n\t\t**ADD NEW RECORD**\n\n");
                                student_add();
                                break;
                        case 'D':
                        case 'd':
                                printf("\n\t\t**DELETE A RECORD**\n\n");
                                student_delete();
                                break;
                        case 'S':
                        case 's':
                                printf("\n\t\t**SHOW THE STUDENT LIST**\n\n");
                                student_show();
                                break;
                        case 'M':
                        case 'm':
                                printf("\n\t\t**MODIFY A RECORD**\n\n");
                                student_modify();
                                break;
                        case 'V':
                        case 'v':
                                printf("\n\t\t**SAVE THE RECORD**\n\n");
                                student_save();
                                break;
                        case 'T':
                        case 't':
                                printf("\n\t\t**SORT THE RECORD**\n\n");
                                student_sort();
                                break;
                        case 'E':
                        case 'e':
                                printf("\n\t\t**EXIT**\n\n");
                                student_Exit();
                                break;
			default:
				printf("Invalid choice! Please try again.\n");
                }
        }
}

void Index_fn()
{

        printf("*----------------------------------------------------------------------------------------*\n");
        printf("|                            ****STUDENT RECORD MENU****                                 |\n");
        printf("*----------------------------------------------------------------------------------------*\n");
        printf("|                         1.   A/a: Add New Record                                       |\n");
        printf("|                         2.   D/d: Delete a Record                                      |\n");
        printf("|                         3.   S/s: Show The list                                        |\n");
        printf("|                         4.   M/m: Modify a Record                                      |\n");
        printf("|                         5.   V/v: Save The Record                                      |\n");
        printf("|                         6.   T/t: Sort The Record                                      |\n");
        printf("|                         7.   E/e: Exit !!!!                                            |\n");
        printf("*----------------------------------------------------------------------------------------*\n");
}
