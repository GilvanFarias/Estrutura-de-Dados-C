#include <stdio.h>

int main(){
//programa usando struct e ponteiros
//ler e exibir informações de um estudante

//tipo de dado definido pelo usuario
struct estudante{
  int nMatricula;
  char nome[30];
  float vMensalidade;
  char dataBacharelado[30];
};

//Declara variavel do tipo struct estudante e declara variavel do tipo ponteiro de struct estudante
struct estudante stud1, *ptr_stud1;

//leitura de dados usuario
ptr_stud1=&stud1;
printf("\n Entre com numero matricula");
scanf("%d", &ptr_stud1->nMatricula);

  return 0;
}