#include <stdio.h>
#include <stdlib.h>//for atoi-string to integer
void sort(int A[],int n);
int main(int argc, char** argv)
{        int A[argc-1],i;
        for(i=0; i<argc-1; i++)
                        A[i]=atoi(*(argv+1+i));
                sort(A,argc-1);
        for(i=0;i<argc-1;printf("%d\n",A[i++]));
                return 0;
}//-----------------------------------------------
void sort(int A[],int N)
{   int i,j,swapped,n=N;
        do{swapped=0;
           for(i=0;i<n-1;i++)
            if (A[i]>A[i+1])
                        {        int t=A[i];
                                A[i]=A[i+1];
                                A[i+1]=t;
                                swapped=1;
                        }
       n--;
        }while(swapped==1);
}
