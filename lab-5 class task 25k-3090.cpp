#include<stdio.h>
int main()
{
	int device;
	int symptom;
	printf(" Enter your device type \n1.Laptop, \n2.Smartphone, \n3.Router\n");
	scanf("%d", &device);
	printf("enter symptom code: ");
	scanf("%d", &symptom);
	switch(device) {
	 	case 1:
		 	switch(symptom) 
		 		
		 		case 10:
		 			printf(" \nCheck power adapter and battery cpnnection"); 
		 			break;
		 		case 11:
			 		printf(" \n Clean fans and ensure properventilation. ");
			 		break;
		 		case 12:
			 		printf(" Run system diagnostics andcheck resource usage. ");	
			 		break;
			 	default:
			break;	
		break;	 	
		case 2:
		 	switch(symptom) {
		 	
		 		case 20:
		 			printf(" \n Disable unnecessary connectivity features."); 
		 			break;
		 		case 21:
			 		printf(" \n mode. Update carrier settings.Check for network outages.");
			 		break;
		 		case 22:
			 		printf(" Check forsoftware updates. ");	
			 		break;
			 	default:
		break; 	
	}
		case 3:		 	
		    switch(symptom) 
		 	{
				 
		 		case 30:
		 			printf(" \n Verify internet subscription."); 
		 			break;
		 		case 31:
			 		printf(" \n Change Wi-Fi channel. ");
			 		break;
		 		case 32:
			 		printf("Restart connecting device. Check for IP conflicts.");	
			 		break;
				default:
		break			 	 	 		
			 }
		default:	 
	}
	  	

}
}
