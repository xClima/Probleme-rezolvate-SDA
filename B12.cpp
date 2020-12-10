#include <stdio.h>
#include <stdlib.h>


      
  int main()
{
    double input,cnt;
    double sum=0,avg=0;
     for(int i=0;i<=1000;i++){
    
    scanf("%lf",&input);
	  
	   if(input>=1&&input<=10){
	        
	    cnt++;
	    sum=sum+input;
	    
	    
	
		avg=sum/cnt;
         printf("%.2lf ",avg);		
	}else{printf("%.2lf ",avg);}
	
}

    
    return 0;
}
