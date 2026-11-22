miniproject: main.o student_add.o student_Dload.o student_delete.o student_modify.o student_show.o student_exit.o student_save.o student_sort.o
	cc  main.c student_add.c student_Dload.c student_delete.c student_modify.c student_show.c student_exit.c student_save.c student_sort.c -o miniproject

main.o: main.c
	cc -c main.c

student_add.o: student_add.c
	cc -c student_add.c

student_Dload.o: student_Dload.c
	cc -c student_Dload.c

student_delete.o: student_delete.c
	cc -c student_delete.c

student_modify.o: student_modify.c
	cc -c student_modify.c

student_show.o: student_show.c
	cc -c student_show.c

student_exit.o: student_exit.c
	cc -c student_exit.c

student_save.o: student_save.c
	cc -c student_save.c

student_sort.o: student_sort.c
	cc -c student_sort.c
