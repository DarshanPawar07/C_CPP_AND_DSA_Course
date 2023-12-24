
        /* Que - Write a program to calculate LCM of two numbers */

        #include <stdio.h>
        int main()

                  {

                      int l , a , b;

                      printf("Enter two numbers\n");
                      scanf("%d%d", &a, &b);

                      for ( l = a > b ? a : b ; l <= a * b ; l++ )
                                                            
                                               {
                                                    if (l % a == 0 && l % b == 0)

                                                              {
                                                                  printf("LCM of %d and %d is %d",a , b , l ) ;
                                                                  break ;
                                                              }
                                                              
                                                }

                      return 0 ;

                  }
