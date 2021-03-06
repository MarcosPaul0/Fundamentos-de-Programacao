#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

int criar_dado(struct aluno *dado) {
    printf("\nMatrícula: ");
    scanf("%d", &dado->matricula);
    printf("Nome: ");
    scanf("%s", &dado->nome);
    printf("Nota: ");
    scanf("%f", &dado->nota);

    return 1;
}

int main(void) {
  Lista *li = NULL;
  Lista *li2 = NULL;
  Lista *copia = NULL;
  int opcao, ok, pos, lista2;
  struct aluno dado;

  do
  {
    printf("\n-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("               Menu de Opções\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    printf("\n1 - Criar lista");
    printf("\n2 - Liberar lista");
    printf("\n3 - Inserir elemento no início");
    printf("\n4 - Inserir elemento no final");
    printf("\n5 - Inserir elemento (ordenado)");
    printf("\n6 - Remover elemento do início");
    printf("\n7 - Remover elemento do final");
    printf("\n8 - Remover elemento (qualquer)");
    printf("\n9 - Buscar elemento pela posição");
    printf("\n10 - Buscar elemento pelo dado");
    printf("\n11 - Concatena listas");
    printf("\n12 - Copia dados retirando os repetidos");
    printf("\n13 - Inverter lista");
    printf("\n14 - Verificar se está ordenado");
    printf("\n15 - Tamanho da Lista");
    printf("\n16 - Cria segunda lista (você não pode modificar a lista 1)");
    printf("\n17 - Imprimir lista");
    printf("\n18 - Sair");
    
    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch(opcao){

      case 1:
        system("clear");
        if (lista2 == 1) {
          li2 = criar_lista();

          if (li2 != NULL) {
            printf("\n Lista criada com sucesso!");
          } else {
            printf("\n Lista não criada!");
          }
        } else {
          li = criar_lista();

          if(li != NULL){
            printf("\n Lista criada com sucesso!");
          }else{
            printf("\n Lista não criada!");
          }
        }
        
        break;


      case 2:
        // liberar lista
        system("clear");
        if (lista2 == 1) {
          ok = liberar_lista(li2);
        } else {
          ok = liberar_lista(li);
        }

        if(ok){
          printf("\n Lista liberada com sucesso!");
        }else{
          printf("\n Lista não liberada!");
        }
        break;

      case 3:
        // inserir elemento no início
        system("clear");
        ok = criar_dado(&dado);
        if (lista2 == 1) {
          ok = inserir_lista_inicio(li2, dado);
        } else {
          ok = inserir_lista_inicio(li, dado);
        }

        if(ok == 1){
          printf("\n Inserção realizada com sucesso!");
        }else{
          printf("\n Falha na inserção!");
        }

        break;

      case 4:
        // inserir elemento no final
        system("clear");
        ok = criar_dado(&dado);
        if (lista2 == 1) {
          ok = inserir_lista_final(li2, dado);
        } else {
          ok = inserir_lista_final(li, dado);
        }

        if(ok == 1){
          printf("\n Inserção realizada com sucesso!");
        }else{
          printf("\n Falha na inserção!");
        }

        break;

      case 5:
        // inserir elemento de forma ordenada
        system("clear");
        ok = criar_dado(&dado);
        if (lista2 == 1) {
          ok = inserir_lista_ordenada(li2, dado);
        } else {
          ok = inserir_lista_ordenada(li, dado);
        }

        if(ok == 1){
          printf("\n Inserção realizada com sucesso!");
        }else{
          printf("\n Falha na inserção!");
        }

        break;

      case 6:
        // remover elemento do início
        system("clear");
        if (lista2 == 1) {
          ok = remover_lista_inicio(li2);
        } else {
          ok = remover_lista_inicio(li);
        }

        if(ok == 1){
          printf("\n Remoção realizada com sucesso!");
        }else{
          printf("\n Falha na remoção!");
        }
        break;

      case 7:
        // remover elemento do final
        system("clear");
        if (lista2 == 1) {
          ok = remover_lista_final(li2);
        } else {
          ok = remover_lista_final(li);
        }

        if(ok == 1){
          printf("\n Remoção realizada com sucesso!");
        }else{
          printf("\n Falha na remoção!");
        }
        break;

      case 8:
        // remover elemento do meio
        system("clear");
        printf("\n Dado a ser removido: \n");
        printf("Matrícula: ");
        scanf("%d", &dado.matricula);
        printf("Nome: ");
        scanf("%s", &dado.nome);
        printf("Nota: ");
        scanf("%f", &dado.nota);

        if (lista2 == 1) {
          ok = remover_lista_meio(li2, dado);
        } else {
          ok = remover_lista_meio(li, dado);
        }

        if(ok == 1){
          printf("\n Remoção realizada com sucesso!");
        }else{
          printf("\n Falha na remoção!");
        }
        break;

      case 9:
        // busca elemento pela posicao
        system("clear");
        printf("\n Posição do elemento a ser buscado: ");
        scanf("%d", &pos);

        if (lista2 == 1) {
          ok = buscar_lista_posicao(li2, pos, &dado);
        } else {
          ok = buscar_lista_posicao(li, pos, &dado);
        }

        if(ok){
          printf("\n Busca realizada com sucesso!");
          printf("\n Elemento da %dª posição: ", pos);
          printf("\n Matrícula: %d\n", dado.matricula);
          printf(" Nome: %s\n", dado.nome);
          printf(" Nota: %.2f\n\n", dado.nota);
        }else{
          printf("\n Posição não existe!");
        }

        break;

      case 10:
        // busca elemento pelo dado
        system("clear");
        printf("\nMatrícula: ");
        scanf("%d", &dado.matricula);
        printf("Nome: ");
        scanf(" %s", &dado.nome);
        printf("Nota: ");
        scanf(" %f", &dado.nota);

        if (lista2 == 1) {
          ok = buscar_lista_dado(li2, dado, &pos);
        } else {
          ok = buscar_lista_dado(li, dado, &pos);
        }

        if(ok){
          printf("\n Busca realizada com sucesso!");
          printf("\n Elemento da %dª posição: ", pos);
          printf("\n Matrícula: %d\n", dado.matricula);
          printf(" Nome: %s\n", dado.nome);
          printf(" Nota: %.2f\n\n", dado.nota);
        }else{
          printf("\n Elemento não encontrado!");
        }

        break;

      case 11:
        // concatena duas listas
        system("clear");
        if (lista2 != 1) {
          printf("\nNão é possível concatenar!");
          printf("\nCrie outra lista");
        } else {
          li2 = concatena_lista(li, li2);
          printf("\nListas concatenadas!");
        }
        break;

      case 12:
          // copia e excluindo os repetidos
          system("clear");
          if (lista2 == 1) {
            copia = criar_lista();
            copia = copia_lista(li2);
            
          } else {
            copia = criar_lista();
            copia = copia_lista(li);
          }
          printf("\nOs itens copiados para lista 3 foram: \n\n");
          imprimir_lista(copia);
          printf("\nVocê não possui acesso a essa lista\n\n");
          liberar_lista(copia);
          
          break;
          
      case 13:
        //Inverte Lista
        system("clear");
        if (lista2 == 1) {
          li2 = inverte_lista(li2);
          printf("\nLista invertida!");
        } else {
          li = inverte_lista(li);
          printf("\nLista invertida!");
        }
          break;
      
      case 14:
          // indica se a lista está em ordem
          system("clear");
          if (lista2 == 1) {
            ok = verifica_ordem(li2);
            if (ok == 1) {
              printf("\nA lista está em ordem decrescente!");
            } else if (ok == 2) {
              printf("\nA lista está em ordem crescente!");
            } else {
              printf("\nA lista não está ordenada!");
            }
          } else {
            ok = verifica_ordem(li);
            if (ok == 1) {
              printf("\nA lista está em ordem decrescente!");
            } else if (ok == 2) {
              printf("\nA lista está em ordem crescente!");
            } else {
              printf("\nA lista não está ordenada!");
            }
          }
          break;

      case 15:
        // retorna o tamanho da lista
        system("clear");
        if (lista2 == 1) {
          printf("\nA lista possui tamanho %d\n\n", calcula_tamanho(li2));
        } else {
          printf("\nA lista possui tamanho %d\n\n", calcula_tamanho(li));
        }
        break;

      case 16:
        system("clear");
        lista2 = 1;
        printf("\n\nAgora você não pode modificar a lista 1");
          break;

      case 17:
        // imprime a lista
        system("clear");
        printf("\n Lista encadeada: ");
        if (lista2 == 1) {
          ok = imprimir_lista(li2);
        } else {
          ok = imprimir_lista(li);
        }

        if(!ok){
          printf("\n Lista não encontrada!");
        }
        break;
      
      case 18:
        // libera memória e finaliza programa
        system("clear");
        liberar_lista(li2);
        liberar_lista(li);

        printf("\nFinalizando...");
        break;

      default:
        printf("\nOpção inválida!");
        break;
    }
  }while(opcao != 18);

  return 0;
}