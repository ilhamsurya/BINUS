/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void main()
{
    char binus[100] = "BINUS ONLINE LEARNING CABANG SYAHDAN";
    char newBinus[10][10]; 
    int i,j,count;
       
    j=0; count=0;
    for(i=0;i<=(strlen(binus));i++)
    {
        // Pemeriksaan berdasarkan whitespace atau null
        if(binus[i]==' '||binus[i]=='\0'){
            newBinus[count][j]='\0';
            count++;  
            j=0;
        }else{
            newBinus[count][j]=binus[i];
            j++;  
        }
    }
    
    for(i=0;i < count;i++)
        printf(" %s\n",newBinus[i]);
        
    printf("%s\n%s\n","Nim: 2502162042","Nama: Muhammad Ilham Surya");
}