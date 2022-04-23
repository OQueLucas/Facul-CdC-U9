#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Declaracao de variaveis
int conta[3], senha[3], saldo[3];
int saque = 0, i = 0, uativo = 4, operacao = 0, successo = 0, saqueval = 0;
int cem = 20, cinq = 40, vinte = 100, rcem = 0, rcinq = 0, rvinte = 0;
int contaLogin, contaSenha;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	void loginConta(){
		printf("Número da conta \n --> ");
		scanf("%d", &contaLogin);
	}
	
	void senhaConta() {
		printf("\nSenha da conta \n --> ");
		scanf("%d", &contaSenha);
	}
	
	void realizaOperacao() {
		printf("\n1 - CONSULTAR SALDO");
		printf("\n2 - REALIZAR SAQUE");
		printf("\n3 - SAIR \n--> ");		
		scanf("%d", &operacao);
	}
	
	void realizaSaque(){
		printf("\nDigite o valor do saque que deseja realizar \n --> ");
		scanf("%d", &saque);
		saqueval = saque;
		
		if( saque > saldo[uativo] ){
			printf("Saldo insuficiente para saque");
		}else{
			successo = 0;
			while(successo == 0){
				if(saque >= 100 && cem > 0 && rcem < 20){
					saque = saque - 100;
					rcem++;
				}else{
					/* Se não pode reduzir, partimos para outra */
					successo = 1;
				}
			}
			
			successo = 0;
			while(successo == 0){
				if(saque >= 50 && cinq > 0 && rcinq < 40){
					saque -= 50;
					rcinq++;					
				}else{
					successo = 1;
				}
			}
			
			successo = 0;
			while(successo == 0){
				if(saque >= 20 && vinte > 0 && rvinte < 100){
					saque -= 20;
					rvinte++;
				}else{
					successo = 1;
				}
			}
			
			/* Se saque ainda for maior que zero, é porque o saque não pode ser realizado com sucesso */
			if(saque > 0){
				printf("Não é possivel realizar este saque, as notas não cobrem o valor");
				rcem = 0; rcinq = 0; rvinte = 0;
			}else{
				printf("Saque realizado com sucesso! \n");
				
				saldo[uativo] -= saqueval;
				printf("Saldo restante na conta: %d \n", saldo[uativo]);
				
				printf("Notas de 100 sacadas : %d \n", rcem);
				cem -= rcem;
				
				printf("Notas de 50 sacadas : %d \n", rcinq);
				cinq -= rcinq;
				
				printf("Notas de 20 sacadas : %d \n", rvinte);
				vinte -= rvinte;
			}
		}
	}
	
	// Huguinho
	conta[0] = 1001; senha[0] = 1357; saldo[0] = 1000;
	// Maria
	conta[1] = 1002; senha[1] = 2468; saldo[1] = 5000;
	// Zezinho
	conta[2] = 1003; senha[2] = 4321; saldo[2] = 2000;
	
	/* Login da conta do usuário */
	printf("CAIXA ELETRONICO \n");
	loginConta();
	
	while(i <= 3){
		/* Como o vetor vai até o indice 2, se chegou no 3 é porque o login está errado, e reinicia o processo */
		if(i == 3){
			printf("Usuário não encontrado, tente novamente \n");
			loginConta();
			i = 0;
		}		
		if(conta[i] == contaLogin){
			uativo = i;
			break;
		}		
		i++;
	}
	
	senhaConta();
	i = 0;
	while(i <= 2){
		if(contaSenha != senha[uativo]){
			printf("Senha incorreta, tente novamente \n");
			senhaConta();
			i = 0;
		} else {
			/* Se chegou aqui é porque está certo */
			if(uativo == 0){
				printf("\nBem vindo Huguinho");
			}else if(uativo == 1){
				printf("\nBem vindo Maria");
			}else{
				printf("\nBem vindo Zezinho");
			}
			i = 2;
		}
		i++;
	}
	
	i = 0;
	while(i <= 3){
		realizaOperacao();
		if(1 == operacao){
			printf("SALDO: R$ %d", saldo[uativo]);
			i == 0;
		}else if(2 == operacao){
			
			printf("Notas disponiveis \n");
			printf("100 reais: %d \n", cem);
			printf("50 reais: %d \n", cinq);
			printf("20 reais: %d \n", vinte);
			
			realizaSaque();
			i = 0;
		}else if(3 == operacao){
			printf("Sessão encerrada com sucesso \n");
			i = 4;
			break;
		}else{
			printf("Operação inválida, tente novamente");
			realizaOperacao();
		}
		i++;
	}
	
	
}
