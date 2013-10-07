#include <stdio.h>
#include <string.h>
#define size 30  


typedef struct students{
		char name[30], surname[50];
		int id[10];
		double midterm, fnal;
}Students;	


void write(){
	Students stdlist[size];
	

	for(int i = 0;i < size; i++){
		printf("Please enter student id:");
		scanf("%d" ,&stdlist[i].id);
		printf("Please enter student name:");
		scanf("%s" ,&stdlist[i].name);
		printf("Please enter student surname:");
		scanf("%s" ,&stdlist[i].surname);	
		printf("Please enter mitderm result:");
		scanf("%lf" ,&stdlist[i].midterm);
		printf("Please enter final result:");
		scanf("%lf" ,&stdlist[i].fnal);
		
	}
	FILE *infp;
	infp=fopen("students.txt", "wb");
	fwrite(stdlist, sizeof(Students), size,infp);
	fclose(infp);
}	


void print(){
	Students stdlist[size];
    FILE *outpf;
	outpf=fopen("students.txt","rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	int i;
    for (i = 0; i < size; ++i){
		printf("%d\t %s\t %s %lf %lf \n", stdlist[i].id, stdlist[i].name, stdlist[i].surname, stdlist[i].midterm, stdlist[i].fnal);
    }
}


void calculate(int x){
	double sum = 0.0;
	Students stdlist[size];
	FILE *outpf;
	outpf=fopen("students.txt", "rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	if (x == 0){
		for(int i=0; i<size; i++){
			sum = sum + stdlist[i].midterm;
		}	
	sum=sum/size;
	printf("%lf\n", sum);
	}
	else if (x == 1){
		for(int j=0; j<size; j++){
			sum = sum + stdlist[j].fnal;
		}	
	sum=sum/size;
	printf("%lf\n", sum);
	}
}
	
void search(){
	Students stdlist[size];
	int stdid;
	FILE *outpf;
	outpf=fopen("students.txt", "rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	printf("Please enter student id");
	scanf("%d", &stdid);
	
	for (int i=0; i<size;i++){
		printf("%d", *stdlist[i].id);
		int id = *stdlist[i].id;
		if (id == stdid ){
			printf("%d\t %s\t %s %lf %lf \n", stdlist[i].id, stdlist[i].name, stdlist[i].surname, stdlist[i].midterm, stdlist[i].fnal);


		}
	}
}	


void menu(){
	
int choice;
 
do{
 printf("Menu\n\n");
 printf("1- List all student \n");
 printf("2- Search the student according to student ID number \n");
 printf("3- Calculate the average of midterm \n");
 printf("4- Calculate the average of final\n");
 printf("5- Exit\n");
 scanf("%d",&choice);
   
switch (choice) {
	case 1: print();
		break;
	case 2: search();
		break;
	case 3: calculate(0);
		break;
	case 4: calculate(1);
		break;
    case 5: printf("Goodbye\n"); 
		break;
    default: printf("Wrong Choice enter again\n");
		break;
 } 
  
} while (choice != 5);
}

int main(){
	write();
	menu();

	return 0;
	}#include <stdio.h>
#include <string.h>
#define size 30  


typedef struct students{
		char name[30], surname[50];
		int id[10];
		double midterm, fnal;
}Students;	


void write(){
	Students stdlist[size];
	

	for(int i = 0;i < size; i++){
		printf("Please enter student id:");
		scanf("%d" ,&stdlist[i].id);
		printf("Please enter student name:");
		scanf("%s" ,&stdlist[i].name);
		printf("Please enter student surname:");
		scanf("%s" ,&stdlist[i].surname);	
		printf("Please enter mitderm result:");
		scanf("%lf" ,&stdlist[i].midterm);
		printf("Please enter final result:");
		scanf("%lf" ,&stdlist[i].fnal);
		
	}
	FILE *infp;
	infp=fopen("students.txt", "wb");
	fwrite(stdlist, sizeof(Students), size,infp);
	fclose(infp);
}	


void print(){
	Students stdlist[size];
    FILE *outpf;
	outpf=fopen("students.txt","rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	int i;
    for (i = 0; i < size; ++i){
		printf("%d\t %s\t %s %lf %lf \n", stdlist[i].id, stdlist[i].name, stdlist[i].surname, stdlist[i].midterm, stdlist[i].fnal);
    }
}


void calculate(int x){
	double sum = 0.0;
	Students stdlist[size];
	FILE *outpf;
	outpf=fopen("students.txt", "rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	if (x == 0){
		for(int i=0; i<size; i++){
			sum = sum + stdlist[i].midterm;
		}	
	sum=sum/size;
	printf("%lf\n", sum);
	}
	else if (x == 1){
		for(int j=0; j<size; j++){
			sum = sum + stdlist[j].fnal;
		}	
	sum=sum/size;
	printf("%lf\n", sum);
	}
}
	
void search(){
	Students stdlist[size];
	int stdid;
	FILE *outpf;
	outpf=fopen("students.txt", "rb");
	fread(stdlist,sizeof(Students),size,outpf);
	fclose(outpf);
	printf("Please enter student id");
	scanf("%d", &stdid);
	
	for (int i=0; i<size;i++){
		printf("%d", *stdlist[i].id);
		int id = *stdlist[i].id;
		if (id == stdid ){
			printf("%d\t %s\t %s %lf %lf \n", stdlist[i].id, stdlist[i].name, stdlist[i].surname, stdlist[i].midterm, stdlist[i].fnal);


		}
	}
}	


void menu(){
	
int choice;
 
do{
 printf("Menu\n\n");
 printf("1- List all student \n");
 printf("2- Search the student according to student ID number \n");
 printf("3- Calculate the average of midterm \n");
 printf("4- Calculate the average of final\n");
 printf("5- Exit\n");
 scanf("%d",&choice);
   
switch (choice) {
	case 1: print();
		break;
	case 2: search();
		break;
	case 3: calculate(0);
		break;
	case 4: calculate(1);
		break;
    case 5: printf("Goodbye\n"); 
		break;
    default: printf("Wrong Choice enter again\n");
		break;
 } 
  
} while (choice != 5);
}

int main(){
	write();
	menu();

	return 0;
	}
