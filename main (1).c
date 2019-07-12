#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
int waiting(int waitingtime,int czas)
{
	printf("Czekam na u¿ytkownika \n");
unsigned char znak;
	int wait=waitingtime;
	for(wait;wait>0;wait--)
	{
	printf("czekam \n");
	delay(1);
	znak=kbhit();
	if(znak==1)
	{
		printf("Uzytkownik wrocil ! \n");
		return 1;
	}
	}
	return 0;
}
int healtcheck(int healt)
{
	printf("Sprawdzam stan zdrowia uzytkownika \n");
	unsigned char znak;
	int wait=healt;
	for(wait;wait>0;wait--)
	{
		printf("Sprawdzanie \n");
	delay(1);
	znak=kbhit();
	if(znak==1)
	{
		printf("Uzytkownik wrocil ! \n");
		return 1;
	}
	}
	return 0;
}
int sprawdzenie(int er,int wa)
{ 



	if(er>5)
	{
		
		printf("Silnik sprawny\n");
		if(er>8)
		{
			printf("Wszystkie uklady w normie\n");
			return 1;
		}
		else
		{
			printf("Wymagana naprawa ukladow dodatkowych prosze czekac\n");
			int wait=wa;
			int procent=wait/8;
			int zaklocenia=rand()%30;
		if(zaklocenia>10)
		{
			
			printf("Naprawa niemozliwa do wykonania przez robota \n");
			return 0;
		}
		else
		{
						
	while(procent<100)
	{
		
		printf("Naprawa wykonana w %d % \n",procent);
		delay(1);
		procent=procent+rand()%10;
		
	}
}
printf("Naprawa wykonana!\n ");
	return 1;
	
	}

	
	
}
else
{
	printf("Wymagana naprawa prosze czekac\n");
			int wait=wa;
			int procent=wait/8;
			int zaklocenia=rand()%30;
		if(zaklocenia>10)
		{
			
			printf("Naprawa niemozliwa do wykonania przez robota \n");
			return 0;
		}	
else
{
		
	while(procent<100)
	{
		
		printf("Naprawa wykonana w %d % \n",procent);
		delay(1);

		procent=procent+rand()%5;
		
	}
	printf("Naprawa wykonana!\n ");
	return 1;
}
	
	
}
}

int czyzrobil(int stan)
{
	if(stan==1)
	{
		printf("silnik naprawiony, uklady dzialajo \n");
		return 1;
	}
	else
	{
		printf("potrzeba pomocy \n");
		return 0;	
	}
}
void adjustpart(int adjustpar)
{
		int e=adjustpar;
		for(e;e>0;e--)
	{
		delay(1);
		printf("Reguluje czesci, wyznaczam trase \n");
	}	
}
int running(int heh)
{
		printf("Podroz \n");
unsigned char znak;
	int wait=heh;
	for(wait;wait>0;wait--)
	{
		printf(".. \n");
	delay(1);
	znak=kbhit();
	if(znak==1)
	{
		printf("Uzytkownik wrocil ! \n");
		return 1;
	}
	
	}
	return 0;
}
	

int main(int argc, char** argv) {

printf("ustawianie parametrow \n");
int wt=10,hc=10,ap=10,wait=10;
int b=rand()%10;
int c=0;
int cnt=0;
delay(1);
int stan;
int eg=wait;
printf("%d sekund\n",eg);
int er=rand()%10;
int r=0;
stan=waiting(wait,ap);
while ( stan==0)
{

if( stan==0)
	{
	stan=healtcheck(hc);
	
if(stan==0)
		{
	r=czyzrobil(c);
	if( r==0)
			{
	
	c=sprawdzenie(er,wait);
	cnt=cnt+1;
	if(cnt>1)
				{
	printf("Oczekuje na pomoc, nie moge sie ruszyc, wysylam sygnal \n");
		int sygnal=rand()%100;
		if(sygnal>25)
					{
			printf("Sygnal wyslany pomyslnie!\n ");
		
					}
		else
					{
			
			printf("Uklady uszkodzone w zbyt duzym stopniu by wyslac sygnal \n");
			
					}
				}
			}
	else
			{
		
		printf("Sprawdzenie wykonane \n");
		}
if(stan==0)
	{
if( cnt>1)
		{
printf("nie moge sie poruszac\n");
		}
else
		{
	
adjustpart(ap);

stan=running(wt);
		}	
	}	


		}
	}
}
printf("Uzytkownik wrocil!\n");
}
