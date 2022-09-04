/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>
#include <string.h>

void main()
{
char binus[100], nama[20], nim[20], tmp[10][10];
int i,j,count;

printf("Input Kalimat \t");
fgets(binus, 100, stdin);
printf("Input nama \t");
fgets(nama, 20, stdin);
printf("Input nim \t");
fgets(nim, 20, stdin);


j=0; count=0;
for(i=0;i<=(strlen(binus));i++)
{
// Pemeriksaan berdasarkan whitespace atau null
if(binus[i]==' '||binus[i]=='\0'){
tmp[count][j]='\0';
count++;
j=0;
}else{
tmp[count][j]=binus[i];
j++;
}
}

for(i=0;i < count;i++)
printf(" %s\n",tmp[i]);

printf("%s\n%s\n",nim,nama);
}