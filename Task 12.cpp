#include<stdio.h>
int main() {

        char units_in_type;
        float units_in_value;

        float faren, celcius, kelvin;
	 printf("Please Enter Your Choice, \n C for Celsius Conversion \n F for farenheit conversion");
        
        scanf("%f",&units_in_value
		);
        scanf(" %c",&units_in_type);
       

        switch (units_in_type) {
    
        case 'C':
                celcius = (units_in_value -32.0) / 9.0 * 5.0;
                printf("%f",celcius);
                break;
        case 'F':
        	faren = units_in_value * 9.0 / 5.0 + 32.0;
        	printf("%f",faren);
        case 'E':
        	printf("EXIT");
        	
    
    }

        return 0;

        }

