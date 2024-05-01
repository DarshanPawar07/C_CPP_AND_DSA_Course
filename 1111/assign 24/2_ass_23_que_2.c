
              /* Que - Write a function to trim a string (removing leading spaces from both the ends)*/

              #include<stdio.h>
              #include<string.h>
              char* trim(char a[])
              {  
                
                int i=0,j,k,count=0,l;
                l=strlen(a);

                for(k=strlen(a)-1 ; a[k]==' '; k--) //to count spaces on end of string 
                   count++;
                 while(a[i]==' ') // to count spaces on start of the string
                 i++;
                 for(j=0;a[i+j];j++)
                   a[j]=a[j+i];
                
                 a[l-count-i]='\0';
                   return a;

              }

              int main()
              {
                
                 char a[39] = "mysirg private limited  " ;
                 //printf("Enter A String ");
                 scanf("%s",a);

                 printf("Length Before Trimming = %d",strlen(a));
                 printf("\n");

                  trim(a); //calling trim fun

                 printf("%s",a);
                 printf("\n");

                 printf("Length Before Trimming = %d",strlen(a));
                 printf("\n");
                 
                 return 0;
              }





              /* int l;
                  l=strlen(a);
                  if(a[0]>='A' | a[0]<'Z')
                   a[0]=a[0]+32;
                  else
                  a[0]=a[0];

                  if(a[l]>='A' | a[0]<'Z')
                    a[l]=a[l]+ 32;
                  
                  else
                    a[l]=a[l];
                
                return 0;*/