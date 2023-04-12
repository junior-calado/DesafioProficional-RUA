#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_principal();
void menu_administrador();
void menu_funcionario();
void menu_rotas();
void menu_caminhoes();
void menu_funcionarios();
void menu_configuracoes();

int admin;
int login = 0;
int senha = 0;
int cod_acesso_func = 0;
int loginReal = 1234;
int senhaReal = 1234;

int main() {
    menu_principal();
    
    return 0;
}

void menu_administrador() {
    int opcao_menu_administrador;
    
    printf("==========================================\n");
    printf("       Bem-vindo, administrador.\n");
    printf("==========================================\n");
    while (login!=loginReal && senha!=senhaReal){
    printf("INFORME SEU LOGIN:\n");
    scanf("%i",&login);
    fflush(stdin);
    if (login!=loginReal){
        printf("LOGIN INV�LIDO!\n");
        printf("RETORNANDO AO MENU PRINCIPAL!\n\n");
        menu_principal();
    }
    printf("==========================================\n");
    printf("INFORME SUA SENHA:\n");
    scanf("%i",&senha);
    fflush(stdin);
    if (senha!=senhaReal){
        printf("SENHA INV�LIDA!\n");
        printf("RETORNANDO AO MENU PRINCIPAL...\n\n");
        menu_principal();
    }
    }
    printf("==========================================\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Rotas\n");
    printf("2 - Caminhoes\n");
    printf("3 - Funcionarios\n");
    printf("4 - Configuracoes\n");
    printf("5 - Retornar ao MENU principal\n");
    scanf("%d", &opcao_menu_administrador);
    
    switch (opcao_menu_administrador) {
        case 1:
            menu_rotas();
            break;
        case 2:
            menu_caminhoes();
            break;
        case 3:
            menu_funcionarios();
            break;
        case 4:
            menu_configuracoes();
            break;
        case 5:
            menu_principal();
        default:
            printf("Opcao invalida. Voltando ao menu principal.\n");
    }
}

void menu_funcionario() {
    int opcao_menu_funcionario;
    
    printf("==========================================\n");
    printf("        Bem-vindo, funcionario.\n");
    printf("==========================================\n");
    while (cod_acesso_func==0){
    printf("INFORME SEU C�DIGO DE ACESSO:\n");
    scanf("%i",&cod_acesso_func);
    }
    printf("==========================================\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Rotas\n");
    printf("2 - Caminhoes\n");
    printf("3 - Retornar ao MENU principal\n");
    printf("==========================================\n");
    scanf("%d", &opcao_menu_funcionario);
    
    switch (opcao_menu_funcionario) {
        case 1:
            menu_rotas();
            break;
        case 2:
            menu_caminhoes();
            break;
        case 3:
            menu_principal();
            break;
        default:
            printf("Opcao invalida. Voltando ao menu principal.\n");
    }
}

void menu_rotas() {

    int opcao_rotas = 0;
    int nova_rota, descricao_rota, opcao;

    printf("Menu Rotas\n");
    printf("====================================================================================================================================================\n");
    printf("\nROTA REGIAO CENTRAL\n");
    printf("A coleta de lixo na regi�o central de Maring� come�a na Rua XV de Novembro e segue at� a Avenida Tamandar�, \n");
    printf("passando pela Pra�a Raposo Tavares e pela Avenida Colombo. Depois, a rota segue at� a Rua Santos Dumont, \n");
    printf("passando pela Catedral Bas�lica Menor de Nossa Senhora da Gl�ria, e finalmente termina na Rua Paranagu�, cobrindo �reas comerciais e residenciais.\n");

    printf("====================================================================================================================================================\n");
    printf("\nROTA REGIAO SUL\n");
    printf("A coleta de lixo na regi�o sul de Maring� come�a na Rua Jos� Clementino, \n");
    printf("passando pela Avenida Morangueira at� a Avenida Mandacaru, e terminando na Rua Dona Sophia Rasgulaeff. \n");
    printf("A rota inclui bairros residenciais como Jardim Alvorada, Conjunto Requi�o e Jardim Alvorada..\n");

    printf("====================================================================================================================================================\n");
    printf("\nROTA REGIAO NORTE\n");
    printf("A coleta de lixo na regi�o norte de Maring� come�a na Avenida Colombo e segue pela Avenida Mandacaru at� a Rua Francisco Silveira Neto. \n");
    printf("Em seguida, a rota segue pela Avenida Kakogawa e termina na Avenida Morangueira, cobrindo �reas residenciais como Jardim Ouro Cola e Jardim Am�rica.\n");

    printf("====================================================================================================================================================\n");
    printf("\nROTA REGIAO LESTE\n");
    printf("A coleta de lixo na regi�o leste de Maring� come�a na Rua Amambai e segue pela Avenida Sophia Rasgulaeff, \n");
    printf("passando pelo Parque do Ing�, e termina na Rua Col�mbia. A rota inclui bairros como Jardim Universit�rio e Jardim Alvorada II.\n");

    printf("====================================================================================================================================================\n");
    printf("\nROTA REGIAO OESTE\n");
    printf("A coleta de lixo na regi�o oeste de Maring� come�a na Avenida Cerro Azul e segue pela Avenida Mandacaru at� a Rua Jos� Ger�nimo da Silva. \n");
    printf("Depois, a rota segue pela Rua Paranagu� e termina na Avenida Colombo, cobrindo bairros como Jardim S�o Paulo e Jardim Alvorada III.\n");

    if (admin==1){
    printf("====================================================================================================================================================\n");
    printf("\nDESEJA CADASTRAR NOVAS ROTAS OU RETORNAR AO MENU PRINCIPAL?\n");
    printf("1 - CADASTRAR NOVAS ROTAS\n");
    printf("2 - RETORNAR AO MENU\n");
    scanf("%i",&opcao_rotas);
    switch (opcao_rotas){
        case 1: 
            printf("INFORME O NOME DA ROTA QUE DESEJA CADASTRAR: \n");
            scanf("%i",&nova_rota);
            fflush(stdin);
            printf("DESCREVA AS RUAS QUE ESTA ROTA PASSAR�:\n");
            scanf("%i",&descricao_rota);
            fflush(stdin);
            printf("==========================================================================================================================================\n");
            printf("ROTA CADASTRADA!\n");
            printf("RETORNANDO AO MENU PRINCIPAL!\n");
            printf("==========================================================================================================================================\n");
            menu_administrador();
        case 2:
            menu_administrador();
    }
    } else {
        printf("Funcion�rio, deseja retornar ao MENU principal, ou fechar o programa?\n");
        printf("1 - retornar ao MENU!\n");
        printf("2 - Fechar o programa!\n");
        scanf("%i",&opcao);
        switch (opcao){
            case 1:
                cod_acesso_func = 0;
                menu_funcionario();
                break;
            case 2:
                printf("Encerrando o programa. Obrigado por utilizar o app RUA!\n");
                break;
                return;

        }

    }

}

void menu_caminhoes() {
    int cad_veiculo,retorno;
    int nome_veiculo, placa_veiculo, ano_veiculo, cor_veiculo, renavam_veiculo, tipo_veiculo, km_veiculo, combustivel_veiculo, status_veiculo;

    switch (admin){
    case 0: //indica que o usu�rio � funcionario
        printf("Ol�, FUNCION�RIO! \n");
        printf("===================== SEU CAMINH�O =============================\n");
        printf("PLACA: OCP1H76\n");
        printf("MODELO: MERCEDES-BENZ AXOR 2629\n");
        printf("ANO: 2021\n");
        printf("COR: Branco\n");
        printf("RENAVAM: 12345678901\n");
        printf("QUILOMETRAGEM: 10.000Km\n");
        printf("COMBUST�VEL: Diesel\n");
        printf("==================================================================\n");
        printf("Deseja retornar ao menu principal?\n");
        printf("1 - SIM\n2 - N�O\n");
        scanf("%i",&retorno);
        if(retorno==1){
            cod_acesso_func = 0;
            menu_funcionario();
        } else {
            printf("OBRIGADO POR USR O APP RUA!\n");
            printf("ENCERRANDO O APP!\n");
            return;
        }
        break;
    
    case 1: //indica que o usu�rio � admin
        printf("Ol�, ADMIN! \n");
        printf("======================= CAMINH�O 1 ===========================\n");
        printf("PLACA: OCP1H76\n");
        printf("MODELO: MERCEDES-BENZ AXOR 2629\n");
        printf("ANO: 2021\n");
        printf("COR: Branco\n");
        printf("RENAVAM: 12345678901\n");
        printf("TIPO: Caminh�o de lixo compactador\n");
        printf("QUILOMETRAGEM: 10.000Km\n");
        printf("COMBUST�VEL: Diesel\n");
        printf("STATUS DO VE�CULO: Dispon�vel!\n");

        printf("======================= CAMINH�O 2 ===========================\n");
        printf("PLACA: QUA2E98\n");
        printf("MODELO: BYD T8\n");
        printf("ANO: 2018\n");
        printf("COR: Branco\n");
        printf("RENAVAM: 34567890123\n");
        printf("TIPO: Caminh�o de lixo compactador\n");
        printf("QUILOMETRAGEM: 80.000Km\n");
        printf("COMBUST�VEL: Diesel\n");
        printf("STATUS DO VE�CULO: Manuten��o Necess�ria!\n");

        printf("======================= CAMINH�O 3 ===========================\n");
        printf("PLACA: LNE3C33\n");
        printf("MODELO: MERCEDES-BENZ AXOR 2628\n");
        printf("ANO: 2021\n");
        printf("COR: Branco\n");
        printf("RENAVAM: 45678901234\n");
        printf("TIPO: Caminh�o de lixo compactador\n");
        printf("QUILOMETRAGEM: 8.000Km\n");
        printf("COMBUST�VEL: Diesel\n");
        printf("STATUS DO VE�CULO: Dispon�vel!\n");

        printf("=================================================\n");
        printf("DESEJA CADASTRAR MAIS UM VE�CULO?\n");
        printf("1 - SIM\n2 - N�O\n");
        scanf("%i",&cad_veiculo);

        if (cad_veiculo == 2){
            printf("==========RETORNANDO AO MENU PRINCIPAL=============");
            menu_administrador();
        } else if (cad_veiculo == 1){
            printf("============= P�GINA DE CADASTRO ===================\n");
            printf("INFORME O MODELO DO VE�CULO: ");
            scanf("%i",&nome_veiculo);
            fflush(stdin);
            printf("INFORME A PLACA DO VE�CULO: ");
            scanf("%i",&placa_veiculo);
            fflush(stdin);
            printf("INFORME O ANO DO VE�CULO: ");
            scanf("%i",&ano_veiculo);
            fflush(stdin);
            printf("INFORME A COR DO VE�CULO: ");
            scanf("%i",&cor_veiculo);
            fflush(stdin);
            printf("INFORME O RENAVAM DO VE�CULO: ");
            scanf("%i",&renavam_veiculo);
            fflush(stdin);
            printf("INFORME O TIPO DE VE�CULO: ");
            scanf("%i",&tipo_veiculo);
            fflush(stdin);
            printf("INFORME A QUILOMETRAGEMM DO VE�CULO: ");
            scanf("%i",&km_veiculo);
            fflush(stdin);
            printf("INFORME O COMBUST�VEL DO VE�CULO: ");
            scanf("%i",&combustivel_veiculo);
            fflush(stdin);
            printf("INFORME O STATUS DO VE�CULO: ");
            scanf("%i",&status_veiculo);
            fflush(stdin);
            printf("VE�CULO CADASTRADO!!\n");
            printf("RETORNANDO AO MENU PRINCIPAL!\n");
            menu_administrador();
        }
        break;
    }

}

void menu_funcionarios() {
    int opcao = 0;
    int nome, funcao, telefone, cpf, rg, endereco, nascimento, cnh;
    printf("====================== FUNCION�RIO 1 ======================\n");
    printf("NOME: Jorge\n");
    printf("FUN��O: Motorista\n");
    printf("TELEFONE: (44)99865-9090\n");
    printf("C�DIGO: 001\n");
    printf("CPF: 110.275.282-79\n");
    printf("RG: 15.078.459-0\n");
    printf("ENDERE�O: Av. Brasil, 174\n");
    printf("DATA DE NASCIMENTO: 03/02/1979\n");
    printf("CNH: 57735871066\n");

    printf("====================== FUNCION�RIO 2 ======================\n");
    printf("NOME: Val\n");
    printf("FUN��O: Motorista\n");
    printf("TELEFONE: (44)99786-9897\n");
    printf("C�DIGO: 002\n");
    printf("CPF: 605.457.994-06\n");
    printf("RG: 17.097.564-3\n");
    printf("ENDERE�O: Rua Herval, 6070\n");
    printf("DATA DE NASCIMENTO: 20/08/1982\n");
    printf("CNH: 32817849706\n");

    printf("============================================================\n");
    printf("DESEJA CADASTRAR MAIS UM FUNCION�RIO, OU RETORNAR AO MENU?\n");
    printf("1 - CADASTRAR FUNCION�RIO\n2 - RETORNAR AO MENU\n");
    scanf("%i",&opcao);
    if (opcao==1){
        printf("INFORME O NOME DO FUNCION�RIO: ");
        scanf("%i",&nome);
        fflush(stdin);
        printf("INFORME A FUN��O: ");
        scanf("%i",&funcao);
        fflush(stdin);
        printf("INFORME O TELEFONE DO FUNCION�RIO: ");
        scanf("%i",&telefone);
        fflush(stdin);
        printf("INFORME O CPF DO FUNCION�RIO: ");
        scanf("%i",&cpf);
        fflush(stdin);
        printf("INFORME O RG DO FUNCION�RIO: ");
        scanf("%i",&rg);
        fflush(stdin);
        printf("INFORME O ENDERE�O DO FUNCION�RIO: ");
        scanf("%i",&endereco);
        fflush(stdin);
        printf("INFORME A DATA DE NASCIMENTO: ");
        scanf("%i",&nascimento);
        fflush(stdin);
        if (funcao == 109){
            printf("INFORME A CNH DO MOTORISTA: ");
            scanf("%i",&cnh);
            fflush(stdin);
        }
        printf("FUNCION�RIO CADASTRADO!!\n");
        printf("==========RETORNANDO AO MENU PRINCIPAL=============\n");
        menu_administrador();
        } else {
            printf("==========RETORNANDO AO MENU PRINCIPAL=============\n");
            menu_administrador();
        }
}

void menu_configuracoes() {
    int opcao;
    printf("====================== CONFIGURA��ES ======================\n");
    if (admin==1){
        printf("OL� ADMIN!\n");
        printf("==========================================\n");    
        printf("Escolha uma das op��es abaixo:\n");
        printf("1 - ALTERAR SENHA\n");
        printf("2 - ALTERAR LOGIN\n");
        printf("3 - RETORNAR AO MENU\n");
        scanf("%i",&opcao);
        if (opcao == 1){
            printf("DEFINA A NOVA SENHA: ");
            scanf("%i",&senhaReal);
            senha = 0;
            printf("NOVA SENHA DEFINIDA COM SUCESSO!\n");
            printf("RETORNANDO AO MENU PRINCIPAL!\n");
            menu_administrador();
        } else if(opcao == 2){
            printf("DEFINA O NOVO LOGIN: ");
            scanf("%i",&loginReal);
            login = 0;
            printf("NOVO LOGIN DEFINIDO COM SUCESSO!\n");
            printf("RETORNANDO AO MENU PRINCIPAL!\n");
            menu_principal();
        } else {
            printf("====================== RETORNANDO AO MENU! ======================");
            menu_administrador();
        } 
    }

}

void menu_principal(){
    int opcao_menu_principal;
    
    printf("==========================================\n");
    printf("           Bem-vindo ao RUA\n");
    printf("==========================================\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Sou um administrador\n");
    printf("2 - Sou um funcionario\n");
    printf("3 - Sair do programa\n");
    printf("==========================================\n");
    printf("Digite o numero correspondente a opcao desejada: ");
    scanf("%d", &opcao_menu_principal);
    
    switch(opcao_menu_principal) {
        case 1:
            admin=1;
            menu_administrador();
            break;
        case 2:
            admin=0;
            menu_funcionario();
            break;
        case 3:
            printf("Encerrando o programa. Obrigado por utilizar o RUA!\n"); 
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
            menu_principal();
		break;
	}
}
