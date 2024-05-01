
             /* Que -Write a function to make first character of each word of the string capital. */

              #include<stdio.h>
              #include<string.h>
              
              char* capital_char(char A[])
              {
                     int i,count=0,note=0;

                     for(i=0;A[i]=' ';i++)
                     count++;
                     if(A[count+1]>='a' && A[count+1]<='z')
                       A[count+1]=A[count+1]-32;
                     else
                       A[count]=A[count];

                    
                    for(i=0;A[i]=' ';i++)
                      note++;
                    if(A[note+1]>='a' && A[note+1]<='z')
                       A[note+1]=A[note+1]-32;
                     else
                       A[note]=A[note];
                     
                     return A;

            }




              int main()
              {   
                char A[] = "   ab c  " ;
                capital_char(A);
                return 0;   
                 

              }