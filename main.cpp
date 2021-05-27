#include <cstdlib>
#include <iostream>

	// Criação dos Tipos Abstratos de Dados TElemento & TFila

	// Estrutura TElemento:
	typedef struct tipoElemento 
	               { int elemento;
	                      } TElemento;
	
	// Estrutura TFila:
	typedef struct tipoFila
	               { TElemento filaElemento[5];
	                 int tamanhoFila;
	                      } TFila;

	// Função Criar Fila:
	void criarFila(TFila *pFila) 
	{
	     pFila->tamanhoFila = 0;
	     printf("\n -> Fila Criada c/Sucesso!!!\n\n");
	}    
                          
	// Função Inserir Elemento:                          
	void inserirElemento(TFila *pFila) 
	{
	     if(pFila->tamanhoFila < 5)
	         { printf ( "\n -> Digite um Numero: ");
	           scanf("%d",&pFila->filaElemento[pFila->tamanhoFila].elemento);
	           pFila->tamanhoFila++;
	           printf("\n");                                       
	         }         
	     else
	         { printf("\n -> Fila Cheia!!!\n\n");
	         		}                       
	}

	// Função Excluir Elemento:
	void excluirElemento(TFila *pFila) 
	{
	     if(pFila->tamanhoFila > 0)
	         { for( int i = 0; i < pFila->tamanhoFila-1; i++ )
	              { pFila->filaElemento[i].elemento = pFila->filaElemento[i+1].elemento;
	                }
	         pFila->tamanhoFila--;
	         printf("\n -> Elemento Excluido da Fila!!!\n\n");
	         }
	     else 
	         { printf("\n -> Fila Vazia!!!\n\n");
	         		}                       
	}

	// Função Mostrar Elementos:
	void mostrarFila(TFila *pFila) 
	{    
	     if(pFila->tamanhoFila == 0)
	         { printf("\n -> Fila Vazia!!!\n");
	           		}	
	     else
	         {
	           printf("\n-> Conteudo da Fila:\n\n");     
	           for( int i = 0; i < pFila->tamanhoFila; i++)
	              { printf("   Posicao: ");
	                printf("%d",i);     
	                printf("   Elemento: ");
	                printf("%d\n",pFila->filaElemento[i].elemento); 
	              }
	           }
	     printf("\n");
	}

	using namespace std;

int main(int argc, char *argv[])
{   
    // Declaração de Variáveis: 
    TFila fila;
    int opcao;

	// Menu Principal do Programa: 
    do {
        printf ("---------------------------- \n Estrutura de Dados Fila \n ---------------------------- \n [ 01 ] - Criar Fila         \n [ 02 ] - Inserir Elemento   \n [ 03 ] - Excluir Elemento   \n [ 04 ] - Mostrar Fila       \n [ 05 ] - Sair \n ---------------------------- \n Informe Opcao: ");  
        scanf("%d",&opcao);
        printf ("---------------------------- \n\n");
        
        // Validação - Menu Principal:
        if(opcao < 1  ||  opcao > 5){
		        	
        	system("CLS");
        	printf("\n -> Opcao Invalida!!!\n\n");
        }
        
        // Operações - Fila Estática: 
        switch(opcao){
    
                      case 1 : {  system("CLS");
                                  criarFila(&fila);
                                  break;
                            	} 
                                   
                      case 2 : {  system("CLS");
                                  inserirElemento(&fila);
                                  break;
                                } 
                      
                      case 3 : {  system("CLS");
                                  excluirElemento(&fila);
                                  break;
                                } 
                      
                      case 4 : {  system("CLS");
                                  mostrarFila(&fila);
                                  break;
                                }                              								                                    
                      }
	} while(opcao!=5);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
