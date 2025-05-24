#include<stdio.h>
#include<string.h>
int main()
 {
    char a[40],b[20],c,d[]="loves",e[20];
    int i,p[50],j,l=0,s=0;
    printf("FIND LOVE PERCENTAGE USING YOUR NAMES \n");
    printf("Enter your name:");
    scanf("%s",&a);
    strcpy(e,a);
    printf("Enter the name of the person you love:");
    scanf("%s",&b);
    strcat(a,d); 
    strcat(a,b);
    strlwr(a);
    while(a[0]!='\0')
    {
        
        i=0;
        c=a[i];
        p[l]=0;
        j=0;
        while(a[i]!='\0')
        {
                
          if(a[i]==c)
           {
            p[l]++;
           }
           i++;
        }
        i=0;
        while(a[i]!='\0')
        {
            if(c!=a[i])
            {
                a[j]=a[i];
                j++;

            }
            i++;
        }
        a[j]='\0';
        if(c==a[0])
        {
            a[0]='\0';
        }
        l++;


    }
   while(l>2)
   {
   	s=0;
    if (l%2==0)
    {
        l=l/2;
      while(s<l)
     {
 	
          for(i=0;i<l;i++)
           {
                    p[s]=p[i]+p[2*l-1-i];
                     if(p[s]>9)
                    {
                    	s++;
                    	p[s]=p[s-1]%10;
                    	p[s-1]=p[s-1]/10;
                    	l=l+1;
					}
                   s++;
                  
                
            }
         }

    }
    else
    {
       l=l/2;
       j=l;
       
while(s<l)
{
	        for(i=0;i<j;i++)
              {
                
                    
                    p[s]=p[i]+p[2*l-i];
                    if(p[s]>9)
                    {
                    	s++;
                    	p[s+1]=p[s];
                    	p[s]=p[s-1]%10;
                    	p[s-1]=p[s-1]/10;
                    	l=l+1;
                    	
					}
                   s++;
                }
            
        
        
    }
   p[s]=p[l]; 
    l=l+1; 
    }
  
    
   }

   strupr(e);
   strupr(b);
   printf(" Love Percentage is ");
   for(i=0;i<l;i++)
   {
    printf("%d",p[i]);
   }
   printf(" percentage between %s and %s while comapiring their names.",e,b);
     return 0;
}