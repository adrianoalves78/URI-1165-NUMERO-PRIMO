#include <stdio.h>
#include <stdlib.h>
  
int main(){
  
   int N,x,y,w,z; // comando para representar as variaveis N,x,y,w,z
  
   scanf("%d",&N); // comando para armazenar a variavel
   for(z=1;z<=N;z++){ // usei o comando for por se tratar de uma forma compacta de escrever um loop 
   y=0;
   scanf("%d",&x); 
   for(w=1;w<=x;w++){
   if(x%w==0){ // comando te o objetivo de executar todo o codigo, desde de que o resultado seja verdadeiro
   y++;
}
  
}
  
  if(y==2){
printf("%d eh primo\n",x);}
    
else{ 
printf("%d nao eh primo\n",x);}
  
   
  
}
return 0;
}
