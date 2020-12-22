#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
//void booking();

void process();
void Login();
void Register();
void bus_details();
void boarding_points();
void bus_type(int );
void buses_list();
char str[1000][1000];
void member_details();	
void date();
int main(){

	process();
	//date();
}
void process(){
	int s,n;
	char ch;
	system("cls");
	printf("===============================Do you want signup or login?===============================\nEnter 1 for Login\nEnter 2 for Signup\n");
	scanf("%d",&s);
	if(s==1){
		Login();
		printf("\n");
		printf("Do you want to book a seat\nEnter 1 for booking ticket\n Enter 2  for just to see the details of the bus\n");
		scanf("%d",&n);
		if(n==2)
		{

		bus_details();
		}
		else if(n==1){
			bus_details();
			printf("\nshivajo@ybl this is our UPI id for payments");
			printf("\nAre you sure you want to book the ticket?\nEnter1forbooking\n");
		scanf("%d",&n);
			if(n==1){
			printf("your ticket booked successfully\n");
			}
			else{
				printf("Sorry your bus seat is not booked\n");
		}
		}
	}
	else if(s==2){
		Register();
		//member_details();
		//date();
		bus_details();
	}
	else{
		printf("Please enter the correct number:\n");
		process();
	}
}
void bus_details(){
	FILE *ptr;
    int i,k=0,m=0,n;
    char temp[1000],t[1000],from[1000],to[1000];
    ptr=fopen("PLACES.txt","r");
    printf("Please enter the from address:\n");
    scanf("%s",from);
     printf("Please enter the to address:\n");
    scanf("%s",to);
    while(fgets(temp,sizeof(temp),ptr)){
           // printf("%s",)
            n=strlen(temp);
                for(i=0;i<n;i++){
                    if(temp[i]==' '){
                        strcpy(str[k],t);
                        k++;
                        m=0;
                        memset(t,0,strlen(t));
                    }
                    else if(temp[i]=='\n'){

                    }
                    else{
                    t[m]=temp[i];
                    m++;
                    }
                }
        if(strcmp(str[0],from)==0){
        if(strcmp(str[1],to)==0){
            // printf("entered");
            break;
        }
        }
m=0;
k=0;
    }
    if(ptr==EOF){
        printf("Enter the correct address\n");
    }
    fclose(ptr);
        printf("from:%s\n",str[0]);
         printf("to:%s\n",str[1]);
          printf("distance:%s\n",str[2]);
         // n=atoi(str[2]);
          //cost=n*6;
           printf("time:%s\n\n",str[3]);
         printf("BOARDING %s\n",str[5]);
          printf("from:%s\n",str[6]);
           printf("distance:%s\n",str[7]);
           printf("time:%s\n",str[8]);
           //printf("time:%s\n",str[8]);
            printf("from:%s\n",str[9]);
           printf("distance:%s\n",str[10]);
           printf("time:%s\n\n",str[11]);
            printf("from:%s\n",str[12]);
           printf("distance:%s\n",str[13]);
           printf("time:%s\n",str[14]);
		   printf("from:%s\n",str[15]);
           printf("distance:%s\n",str[16]);
           printf("time:%s\n\n",str[17]);
		   boarding_points();
}
void boarding_points()
{
	int a,n1;
	//char str[1000][1000];
		   printf("Select one boarding point:\n");
		   scanf("%d",&a);
		   switch(a)
		   {
			   case 1: printf("from:%s\n",str[6]);
					printf("distance:%s\n",str[7]);
					printf("time:%s\n",str[8]);
					n1=atoi(str[7]);
					getch();
					bus_type(n1);
					break;
				case 2:printf("from:%s\n",str[9]);
					printf("distance:%s\n",str[10]);
					printf("time:%s\n",str[11]);
					int cost2,n2;
					n2=atoi(str[10]);
					bus_type(n2);
					break;
				case 3:printf("from:%s\n",str[12]);
					printf("distance:%s\n",str[13]);
					printf("time:%s\n",str[14]);
					int cost3,n3;
					n3=atoi(str[13]);
					bus_type(n3);
					break;
				case 4:printf("from:%s\n",str[15]);
					printf("distance:%s\n",str[16]);
					printf("time:%s\n",str[17]);
					int cost4,n4;
					n4=atoi(str[16]);
					bus_type(n4);
					/*cost4=(n4/5)*10;
					printf("Amount to be paid for the journey is:%d",cost4);*/
					break;
				default:printf("INVALID CHOICE\n");
					break;
		   }
}
void buses_list()
{
	system("cls");
	system("cls");
    printf("\n\n\n");
    printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    printf("\t\t\t\t\t[1]  =>  SUPER LUXURY \n");
    printf("\n");
    printf("\t\t\t\t\t[2]  =>  EXPRESS\n");
    printf("\n");
	printf("\t\t\t\t\t[3]  =>  METRO DELUXE\n");
    printf("\n");
	printf("\t\t\t\t\t[4]  =>  GARUDA PLUS\n");
    printf("\n");
	printf("\t\t\t\t\t[5]  =>  RAJDHANI\n");
	printf("================================================================================================================");
	printf("\n");
	date();
}
void bus_type(int n1)
{
	system("cls");
	buses_list();
	int type;
	float c1,c2,c3,c4,c5;
float tickets;
	//printf("%d\n",n1);
	printf("Enter number of ticket:\n");
	scanf("%f",&tickets);
	//date();
	printf("Enter the bus type:\n");
	scanf("%d",&type);
	switch(type)
	{
		case 1:
				c1=tickets*(((float)n1/5)*10)*2;
				printf("Amount to be paid for the journey is:%f",c1);
				break;
		case 2: c2=tickets*((n1/5)*10)*1;
				printf("Amount to be paid for the journey is : %f",c2);
				break;
		case 3: c3=tickets*((n1/5)*10)*1.5;
				printf("Amount to be paid for the journey is:%f",c3);
				break;
		case 4:c4=tickets*((n1/5)*10)*2.5;
				printf("Amount to be paid for the journey is:%f",c4);
				break;
		case 5:c5=tickets*((n1/5)*10)*3;
				printf("Amount to be paid for the journey is:%f",c5);
				break;
		default:printf("Invalid option");
				break;

	}
}

void Register(){
     char name[100],pass[100],t[100];

    FILE *ptr,*tptr;
	printf ("Enter your name") ;
	scanf("%s", name);
	printf("Enter password");
	scanf("%s",pass);
	 ptr = fopen("usernames.txt", "a");
        fprintf(ptr,"%s\n",name);
          fprintf(ptr,"%s\n",pass);
        printf("Your account entered successfully\n");

}

void Login()
{
        char name[100],pass[100],temp[100];
        int flag=0;
         FILE *ptr;
        printf("Enter username:");
        scanf("%s",name);
        strcat(name,"\n");
        printf("Enter Password:");
        scanf("%s",pass);
         strcat(pass,"\n");
	 ptr = fopen("usernames.txt", "r");
	 while(fgets(temp,sizeof(temp),ptr)){
        if(strcmp(temp,name)==0){
            fgets(temp,sizeof(temp),ptr);
             if(strcmp(temp,pass)==0){
                flag=1;
                 break;
             }
        }
	 }
	 if(flag==0){
        printf("Please register first and then login again\n");
        Login();
	 }

}
void member_details()
{
    char a[30],d[20];
    long int b,c;
	
    FILE *ptr;
    ptr = fopen("date.txt", "a");
	printf("Enter your full name\n");
	scanf("%s",a);
    printf("Enter your age\n");
    scanf("%d",&b);
    printf("Enter mobile number\n");
    scanf("%d",&c);
    printf("Enter gmail\n");
    scanf("%s",d);
    fprintf(ptr,"%s\n",a);
    fprintf(ptr,"%d\n",b);
    fprintf(ptr,"%d\n",c);
    fprintf(ptr,"%s\n",d);
    fclose(ptr);
}

void date()
{
    int d,m,y,x;
	char a;
	FILE *fp;
    printf("ENTER DATE OF JOURNEY:\n");
    x=scanf("%d-%d-%d",&d,&m,&y);
	//printf("%d-%d-%d",d,m,y);
	if(m>12)
		printf("Enter correct month\n");
    fp=fopen("date.txt","a");
	//fprintf(fp,"%d-%d-%d",d,m,y);
    fprintf(fp,"%d-",d);
	fprintf(fp,"%d-",m);
	fprintf(fp,"%d",y);
	fprintf(fp,"\n",a);
	member_details();
	//strcat(x,"\n");
	fclose(fp);

}