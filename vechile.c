#include<stdio.h>
#include<stdlib.h>
#include"vechile.h"
system2_t system2; 
static char G_F=1;
int main()
{
	printf("*********************************************************************\n");
	printf("************* hello to vechile system2 *******************************\n");
	
  
	
	while(G_F)
	{
		printf("*********************************************************************\n");
		printf("***** Turn on    1 *****\n");
	    printf("***** Turn off   2 *****\n");
	    printf("***** Quit       3 *****\n");
	    printf("enter the status\n");
		scanf("%d",&system2.status);
        system("cls");
		switch(system2.status)
	    {
		   case QUIT:
		   G_F=0;
		   printf("*********************************************************************\n");
	       printf("************* thanks for using vechile system ***********************\n");
		   printf("*********************************************************************\n");
		   break;
		   case TURNOFF1:
		   break;
		   break;
		   case TURNON1:
		  // printf("turn off the engine\n");
		    system("cls");
		   printf("*****************************************************\n");
	       printf("************* turn on  system ***********************\n");
		   printf("*****************************************************\n");
		   system2.engine_s=turnoff;
		   printf("************* trafficlight **************************\n");
		   printf("green  1\n");
	       printf("orange 2\n"); 
	       printf("red    3\n");
		   scanf("%d",&system2.color);
		   printf("*****************************************************\n");
	       printf("************* temp sensor of room *******************\n");
		   scanf("%d",&system2.temp_room);
		   printf("*****************************************************\n");
	       printf("************* temp sensor of enginr *******************\n");
		   scanf("%d",&system2.temp_engine);
		   switch(system2.color)
		   {
			   case g:
			   system2.vechile_speed=100;
			  //printf("the vechile speed is 100km/h\n");
			   break;
			   case o:
			   system2.vechile_speed=30;
			  // printf("the vechile speed is 30km/h\n");
			   break;
			   case r:
			   system2.vechile_speed=0;
			   //printf("the vechile speed is 0km/h\n");
			   break;
		   }
		   if(system2.temp_room<10||system2.temp_room>30)
		   {
			   system2.temp_room=20;
			  // printf("Turn AC ON\n");
			   system2.ac_s=turnon;
		   }
		   else
		   {
			     //printf("Turn AC OFF\n");
				 system2.ac_s=turnoff;
		   }
		   
		  
		   if(system2.temp_engine<100||system2.temp_engine>150)
		   {
			  system2.temp_engine=125;
			  // printf("Turn engine temp controller ON\n");
			   system2.engine_temp_controller=turnon;
		   }
		   else
		   {
			     // printf("Turn engine temp controller Off\n");
				  system2.engine_temp_controller=turnoff;
		   }
		   if(system2.vechile_speed==30)
		   {
			   if(system2.ac_s==turnoff||system2.engine_temp_controller==turnoff)
			   {
				   system2.ac_s=turnon;
			       //printf("Turn AC ON\n");
				   system2.temp_room=((system2.temp_room*5/4)+1);
			   }
			   
			   
		   }
		    system("cls");
		   printf("*****************************************************\n");
	       printf("************* state of all system ***********************\n");
		   printf("*****************************************************\n");
		   if(system2.engine_s==turnon)
		   {
			   printf("1- turn on the engine\n");
		   }
		   else
		   {
			   printf("1- turn off the engine\n");
		   }
		   if(system2.ac_s==turnon)
		   {
			    printf("2- Turn AC ON\n");
		   }
		   else
		   {
			    printf("2- Turn AC Off\n");
		   }
		   printf("3- vechile_speed=%dkm\n",system2.vechile_speed);
		   printf("4- room temperature=%d\n",system2.temp_room);
		   if(system2.engine_temp_controller==turnon)
		   {
			   printf("5- Turn engine temp controller ON\n");
		   }
		   else{
			   printf("5- Turn engine temp controller Off\n");
		   }
		   printf("6- enginr temperature=%d\n",system2.temp_engine);
		
		
	   }
		
	}
	
	
	
	
}