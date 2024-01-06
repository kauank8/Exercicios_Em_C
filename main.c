#include <stdio.h>
/*
ex 1 ------------------>
int main(void) {
  float n1,n2,n3, media;
  char nome[10];
  printf("Digite seu Nome \n");
  scanf("%s",&nome);
  printf("Digite a Nota 1 \n");
  scanf("%f",&n1);
  printf("Digite a Nota 2 \n");
  scanf("%f",&n2);
  printf("Digite a Nota 3 \n");
  scanf("%f",&n3);
  media = (n1+n2+n3)/3;
  if(media>=7){
    printf("%s",nome);
    printf(" aprovado");
  }
  else if(media<=4){
     printf("%s",nome);
    printf(" reprovado");
    }
  else{
    printf("%s",nome);
    printf(" recuperação");
  }

  return 0;
}*/

/*
ex 8---------------->
int main(void){
  int vet[5]; int maior, menor, n;
  for(int i=0;i<5;i++){
    printf("digite um numero \n");
    scanf("%d",&n);
    vet[i]=n;

  }
  maior=vet[0];
  menor=vet[0];
  for(int i=1;i<5;i++){
    if(maior<vet[i]){
      maior=vet[i];
    }
    if(menor>vet[i]){
      menor=vet[i];
    }
  }
  printf("o Maior Numero foi: %d",maior);
  printf("\n o Menor Numero foi: %d",menor);
  return 0;
} --------------- fim ex 8 ----------------
*/

/* Ex 9 ------------------------------>
int main (void){
  int n;
  printf("digite um numero\n");
  scanf("%d",&n);
  if(n%2==0){
    if(n>0){
      printf("Esse numero é positivo e é par");
    }
    else{printf("Esse numero é negativo e é par");}
  }
  else{
    if(n>0){
      printf("Esse numero é positivo e é impar");
    }
    else{printf("Esse numero é negativo e é impar");}
  }
  } fim ex9---------------------------------------->
*/

/* ex 10 ------------------‐-------
int main(void){
  int valor, inicial; int nt100 =0 , nt50 =0 , nt10 =0, nt5 =0, nt1 =0;
  printf("Digite a quantia");
  scanf("%d",&valor);
  inicial=valor;
  while(valor!=0){
  while(valor>=100){
    valor = valor-100;
    nt100 = nt100+1;
  }
  while(valor>=50){
    valor = valor-50;
    nt50 = nt50+1;
  }
  while(valor>=10){
    valor = valor-10;
    nt10 = nt10+1;
  }
  while(valor>=5){
    valor = valor-5;
    nt5 = nt5+1;
  }
  while(valor>=1){
    valor = valor-1;
    nt1 = nt1+1;
  }
    }
  printf("O valor a ser sacado foi %d",inicial);
  printf("\n A quantidade de notas de 100 foi: %d", nt100);
  printf("\n A quantidade de notas de 50 foi: %d", nt50);
  printf("\n A quantidade de notas de 10 foi: %d", nt10);
  printf("\n A quantidade de notas de 5 foi: %d", nt5);
  printf("\n A quantidade de notas de 1 foi: %d", nt1);
  return 0;
  } fim ex 10 -------------------
  */

/* ex 11 --------------->
int main(void){
  int ano, valor; int imposto=0;
  printf("digite o ano do carro\n");
  scanf("%d",&ano);
  printf("digite o valor do carro\n");
  scanf("%d",&valor);
  if(ano<1990){
    imposto=valor*0.01;
  }
  else{
   imposto=valor*0.015;
  }
  printf("Seu Carro do ano %d ", ano);
  printf("\nAvaliado em: %d ", valor);
  printf("\nPagara em impostos: %d ", imposto);
} fim ex11 ------------------------------------->
*/

/* ex 12 ----------------------------------------------->
int main (void){
  int codigo, salario_antigo, salario_novo, diferenca;
  printf("Digite o Salario atual : ");
  scanf("%d",&salario_antigo);
  printf("101 - Para Gerente \n102 Para Engenheiro\n103- Para Tecnico \n Digite
o codigo: "); scanf("%d",&codigo); switch(codigo){ case 101: salario_novo =
salario_antigo+(salario_antigo*0.1); diferenca=salario_novo-salario_antigo;
              printf("O salario antigo era : %d",salario_antigo);
              printf("\nO salario novo é : %d",salario_novo);
              printf("\nA diferença é %d",diferenca);
              break;
    case 102: salario_novo = salario_antigo+(salario_antigo*0.2);
              diferenca=salario_novo-salario_antigo;
              printf("O salario antigo era : %d",salario_antigo);
              printf("\nO salario novo é : %d",salario_novo);
              printf("\nA diferença é %d",diferenca);
              break;
    case 103: salario_novo = salario_antigo+(salario_antigo*0.3);
              diferenca=salario_novo-salario_antigo;
              printf("O salario antigo era : %d",salario_antigo);
              printf("\nO salario novo é : %d",salario_novo);
              printf("\nA diferença é %d",diferenca);
              break;
    default: salario_novo = salario_antigo+(salario_antigo*0.4);
              diferenca=salario_novo-salario_antigo;
              printf("O salario antigo era : %d",salario_antigo);
              printf("\nO salario novo é : %d",salario_novo);
              printf("\nA diferença é %d",diferenca);
              break;
  }
} fim ex12 ---------------------------------------->
*/

/* ex 13----------------------->
int main(void){
  int saldo, credito=0;
  printf("Digite seu saldo medio do ultimo ano: ");
  scanf("%d",&saldo);
  if(saldo<=200){
    printf("Saldo medio:%d ", saldo);
    printf("Credito: 0");
      }
  if(saldo>200 && saldo<401){
    printf("Saldo medio:%d ", saldo);
    credito=saldo*0.2;
    printf("\n Credito:%d ",credito);
      }
   if(saldo>400 && saldo<601){
    printf("Saldo medio:%d ", saldo);
    credito=saldo*0.3;
    printf("\n Credito:%d ",credito);
      }
   if(saldo>601){
    printf("Saldo medio:%d ", saldo);
    credito=saldo*0.4;
    printf("\nCredito:%d ",credito);
      }
  } fim ex 13 -------------------->
*/

/* ex 14------------------------->
int main (void){
  int codigo, quantidade; double preco;
  printf("100-Cachorro Quente-R$1,10\n101-Bauru Simples-R$1,30\n102-Bauru
C/ovo-R$1,50\n103-Hamburguer-R$1,10\n104-ChesseBurguer-R$1,30\n105-Refrigerante-R$1,00\n");
  printf("Digite o codigo do produto desejado: ");
  scanf("%d",&codigo);
  printf("Digite a quantidade: ");
  scanf("%d",&quantidade);
  switch(codigo){
    case 100: preco= 1.10*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    case 101: preco= 1.30*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    case 102: preco= 1.50*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    case 103: preco= 1.10*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    case 104: preco= 1.30*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    case 105: preco= 1.00*quantidade;
              printf("O valor total ficou: %f ",preco);
              break;
    default: printf("Produto não encotrado");
              break;
  }
  } fim ex14 ----------------------------------->
*/

// Aula 24/02/2023 Ex matrizes
// ------------------------------------------------------------v
/* ex 1----------------------->
int main(void){
  for(int i=0;i<=15;i++){
    printf(" %d",i);
  }
  printf("\n");
  for(int i=15;i>=0;i--){
    printf(" %d",i);
}
  } fim ex1 ------------------------->
*/

/* Ex 2 ----------------------------->
int main(void){
  for(int i=0;i<=50;i=i+10){
    printf( " %d", i);
  }
}fim ex 2--------------------------------->
*/

/* ex3 -------------------------->
int main(void){
 int m[5][3];
  int i=0;
    for(int x=0;x<5;x++){
      m[i][x] = printf("x");
    }
    for(int x=0;x<3;x++){
      m[x][i]= printf("\nx");
    }
  }fim ex3 ---------------------------------->
*/

/* ex4 -------------------------->
int main(void) {

  int M[5][5];

  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      if (x == y) {
        M[x][y] = 5;
      } else {
        M[x][y] = 0;
      }
    }
  }
  // Linha invertida
  int y=4;
  for (int x = 0; x < 5; x++) {    
    M[x][y]=5;
    y--;}

    // Printar
    for (int x = 0; x < 5; x++) {
      for (int y = 0; y < 5; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
  } Fim ex 4--------------------->
*/
/* ex 5------------------->
int main(void){
  //Prenche com 0;
  int y,x;
  int M[5][5];
  for(x=0;x<5;x++){
    for(y=0;y<5;y++){
      M[x][y]=0;
      }
    }

  //Organiza Trinagulo
    y=0;
    int z=0;
    for(x=4;x>=0;x--){
      for(y=4-z;y>=0;y--){
        M[x][y]=5;
        }
      z++;
  }
  

  //print
  for (int x = 0; x < 5 ; x++) {
      for (int y = 0; y <5 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
  
}fim ex5---------------------------->
*/ 

// AULA 03/03/2034 Vetor e Matriz 2
/* ex 1 -------------------------------------->
int main (void){
  int M[6][6];
  for(int x=0; x<6;x++){
    for(int y=0;y<6;y++){
      if(x==y){
        M[x][y] = 1;
      }
      else{
        M[x][y] = 0;
      }
    }
  }
  //print
  for (int x = 0; x < 6 ; x++) {
      for (int y = 0; y <6 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
}
*/
/* ex 2---------------------------->
int main(void){
  int M[6][6];
  // echer com 0
  for(int x=0;x<6;x++){
    for(int y=0;y<6;y++){
        M[x][y]= 0;
    }
  }
  // Forma Trinagulo
   int z= -1;
  for(int x=0;x<6;x++){
    for(int y=z+1;y<6;y++){
        M[x][y]= 1;
    }
    z++;
  }
  for (int x = 0; x < 6 ; x++) {
      for (int y = 0; y <6 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
} fim ex 2---------------------------------------------->
*/ 

/* Kauan Paulino farias ex3
int main(void){
  int M[6][6];
  // echer com 0
  for(int x=0;x<6;x++){
    for(int y=0;y<6;y++){
        M[x][y]= 0;
    }
  }
  // Forma Trinagulo
   int z= 6;
  for(int x=5;x>=0;x--){
    for(int y=z-1;y>=0;y--){
        M[x][y]= 1;
    }
    z--;
  }
  // print
  for (int x = 0; x < 6 ; x++) {
      for (int y = 0; y <6 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
  fim ex 3------------------>
} */ 

/* Kauan Paulino ex 4 linha x
int main(void){
  int M[10][10];
  int z=2;
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
      if(x==1){
        while(z<8){
          M[x][z]=1;
          z++;
        }
      }
      else{
        M[x][y]=0;
      }
    }
  }
  
  // print
  for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
} fim ex 4-------------------------------------------->
*/

  /* Kauan Paulino ex5
  int main(void){
    
  int M[10][10];
  int z=1;
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
      if(y==3){
        while(z<9){
          M[z][y]=1;
          z++;
        }
      }
      else{
        M[x][y]=0;
      }
    }
  }
  
  // print
  for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    } fim ex 5-------------------------------------------->
} */

/* Kauan paulino Ex6
int main(void){
  int M[10][10];

  for(int x=0;x<10;x++){
      for(int y=0;y<10;y++){
        if(x==y){
          M[x][y]=1;
        }
        else{
          M[x][y] = 0;
        }
        if(x+y==9){
          M[x][y]=1;
        }
    }
  }
  
   // print
  for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    } fim ex6------------------------------------------->
} */

/* Kauan Paulino Ex7 ------------------------------->
int main(void){

  int M[10][10];
  // echer com 0
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
        M[x][y]= 0;
    }
  }
  // Forma Trinagulo
   int z= 10;
  for(int x=9;x>=0;x--){
    for(int y=z-1;y>=0;y--){
        M[x][y]= 1;
    }
    z--;
  }
  // print
  for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
} fim ex 7----------------------------------->
*/

/* Kauan Paulino ex 8 ---------------------->
int main (void){
  int M[10][10];
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
    if(x==0 || y ==0 || x==9 || y ==9){
      M[x][y]=1;
    }
    else{
      M[x][y]=0;
    }  
  }
  }
  
  // print
  for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
} fim ex 8--------------------------------------->
*/

//Kauan Paulino ex 9
/*
int main(void){
   int M[10][10];
  
   for(int x=0;x<10;x++){
      for(int y=0;y<10;y++){
      if(x==y){
        M[x][y]=1;
      }
      else if(x == 0 || y==0){
        M[x][y]=1;
      }
     else{
       M[x][y]=0;
     }   
    }
  }
   
    // print
   for (int x = 0; x < 10 ; x++) {
      for (int y = 0; y <10 ; y++) {

        printf("%d ", M[x][y]);
      }

      printf("\n");
    }
}

 */ 

