#include"header.h"
void student_Dload()
{
        FILE *f1=fopen("student.dat","r");
        if(f1==NULL)
        {
                printf("No Previous Data Found\n");
                return;
        }

        int roll;
        char name[50];
        float percentage;

        while(fscanf(f1,"%d %s %f",&roll,name,&percentage)!=EOF)
        {
                NODE *new=(NODE *)malloc(sizeof(NODE));
                new->roll=roll;
                strcpy(new->name,name);
                new->percentage=percentage;

                new->next=NULL;

                if(hptr==NULL)
                {
                        hptr=new;
                }
                else
                {
                        NODE *ptr=hptr;
                        while(ptr->next!=NULL)
                        {
                                ptr=ptr->next;
                        }
                        ptr->next=new;
                }
        }
        fclose(f1);
        printf("Data loaded successfully!!\n");
}
