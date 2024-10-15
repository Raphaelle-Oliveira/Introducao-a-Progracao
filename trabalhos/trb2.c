#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Função para alocar memória para a string do nome do jogador
char*aloc(char*string, int tamanho) {
    char* ponteiro = NULL;
    do {
        ponteiro = (char*)malloc((tamanho * sizeof(char)));    
    } while (ponteiro == NULL);

    strncpy(ponteiro, string, tamanho);
    ponteiro[tamanho]='\0';

    return ponteiro;
}

// Função que transiciona entre as linhas do código, deixando a narrativa mais interessante
void continuartela() {
    printf("\n");
    printf("Pressione qualquer tecla para continuar\n");
    char tecla;
    scanf(" %c", &tecla);
    if (tecla) {
        #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    }
}

// Função para o fim do jogo, caso o jogador encerre-o ou morra
void Fim(){
    printf("\n");
    printf(" _____                           _____                    \n");
    printf("|  __ \\                         |  _  |                   \n");
    printf("| |  \\/  __ _  _ __ ___    ___  | | | |__   __  ___  _ __ \n");
    printf("| | __  / ` || ' ` _ \\  / _ \\ | | | |\\ \\ / / / _ \\| '|\n");
    printf("| |\\ \\| (| || | | | | ||  _/ \\ \\/ / \\ V / |  __/| |   \n");
    printf(" \\/ \\,||| || || \\|  \\/   \\/   \\||_|   \n");
}

int main(){
    char name[42];
    char *n;
    int len_name,i;
    char **armas;
    char option;
    char op1,op2,op3,op4,op5,op6;

    armas=(char**)malloc(sizeof(char)*3);
    //aloca dinamicamente um vetor de strings
    
    for(i=0;i<3;i++){
        armas[i]=(char*)malloc(sizeof(char)*10);
    }
    //aloca dinamicamente cada string do vetor

    printf("Insira seu nome: \n");
    scanf("%s",name);
    len_name=strlen(name);

    n=aloc(name, len_name);
    //aloca memoria para a string que contem o nome do jogador

    name[0]='\0';
    //zera a string original

    continuartela();

    printf("Deusa: Bem vindo(a) %s, muito prazer, voce deve estar confuso.\n",n);
    printf("Voce foi convocado a este mundo para salva-lo da destruicao!\n");
    printf("Esse mundo esta em guerra, uma guerra entre demonios e humanos, para evitar isso, eu preciso da sua ajuda sr(a). %s\n",n);
    printf("O que voce deseja fazer?\n\n");
    printf("a) Eu nao vou me meter nisso, me envie de volta agora\n");
    printf("b) Estou um pouco confuso(a)... mas posso ouvir o que tem a dizer\n");

    do{
        scanf("%c",&option);
    } while(option!='a'&&option!='b');

    if(option=='a'){
        Fim();
        return 0;
    }

    if(option=='b'){

        continuartela();

        printf("Deusa: agradeco pela gentileza. Esse mundo esta corrompido, o poder cegou o mago da corte e o mesmo criou criaturas capazes de destruir toda a minha criacao...\n");
        printf("Por isso, convoquei quatro cavaleiros do seu mundo, destinados a salvar a humanidade da sua destruicao!\n");
        printf("Voce, %s, representa a conquista, em breve vai conhecer os outros tres, agora vou envia-la para uma floresta proxima a torre do mago e seus demonios\n",n);
        printf("Nessa floresta voce vai encontrar um elfo que lhe passara mais instrucoes e deve se reunir com os outros cavaleiros, boa sorte\n");
        printf("Voce esta caindo dos ceus em direcao a uma floresta, mas uma tela aparece na sua frente\n");

        continuartela();

        printf("Voce conquistou a habilidade\nvoar\n\n");
        printf("Voce consquistou a habilidade\nluta\n\n");
        printf("Voce conquistou a habilidade\narco e flecha\n\n");
        printf("Voce conquistou a habilidade\nesgrima\n\n");

        continuartela();

        printf("Seu corpo fica mais leve e voce consegue voar e pousar com facilidade em um campo aberto bem no meio da floresta\n");
        printf("De repente, uma linda elfa de cabelos prateados surge na sua frente\n");
        printf("Anna: Prazer, me chamo Anna, estou aqui para orientar nos seus primeiros passos, fui enviada pela deusa\n");
        printf("Anna: Nao temos muito tempo, entao peco que me siga\n");

        continuartela();
        
        printf("O que voce deseja fazer?\n");
        printf("a) Segui-la\n");
        printf("b) Seguir sozinho!\n");

        do{
            scanf("%c",&op1);
        } while(op1!='a'&&op1!='b');
        
        continuartela();

        if(op1=='a'){
            printf("Anna leva voce ate uma casa no centro da floresta, entrega uma bolsa magica e abre um armario cheio de armas de diferentes tipos\n");
            printf("Anna: Voce deve escolher tres dessas armas para manter com voce durante sua jornada\n\n");
            printf("Selecione uma das opcoes\n");
            printf("a) Arco\n");
            printf("b) Pistola\n");
            printf("c) Espada\n");
            printf("d) Bastao\n");
            printf("e) Machado\n");

                for(i=0;i<3;i++){
                    scanf(" %c",&op2);

                    if(op2=='a'){
                        armas[i]= "Arco";
                    }
                    else if(op2=='b'){
                        armas[i]= "Pistola";
                    }
                    else if(op2=='c'){
                        armas[i]= "Espada";
                    }
                    else if(op2=='d'){
                        armas[i]= "Bastao";
                    }
                    else if(op2=='e'){
                        armas[i]= "Machado";
                        printf("Voce rececebeu a habilidade decapitar!\n");
                        printf("\n");
                    }
                    else{
                        i-=1;
                        printf("Opcao invalida. Digite novamente: \n");
                    }
                }
                /*dependendo da arma que escolha
                as mortes ocorrem de formas diferentes*/

            printf("Anna: Sinto muito, a partir de agora voce deve seguir sozinho(a), desejo sorte a voce e seus companheiros\n");
            printf("Assim que sai da casa, voce olha pra tras e a mesma desapareceu.\n");
            printf("Voce decide seguir em frente e encontra seu amigo de faculdade, Tyler\n");
        }  

        if(op1=='b'){
            printf("Com extrema desconfianca, voce se separa de Anna em certo ponto do trajeto\n");
            printf("Voce esbarra com um homem no trajeto e percebe que ele esta com uma camiseta unificada\n");
            printf("Desconhecido: Ah, voce? Lembra de mim %s?\n",n);
            printf("Era seu antigo colega da faculdade, Tyler\n");
            printf("Voce desabafa dizendo que esta perdido(a) e nao entende direito esse mundo\n");
            printf("Tyler: Ah, eu ja cheguei a alguns dias. Percebi que voce esta desarmado. ");
            printf("Toma, uma espada. Acabei sendo tolo e escolhi duas armas iguais hahaha\n");
            printf("Voce fica confuso sobre o que se trata mas aceita com gratidao\n");

            for(i=0;i<3;i++){
                armas[i]="Espada";
            }

            continuartela();

        }

        printf("Deseja continuar?\n\n");
        printf("a) Continuar\nb) Finalizar\n\n");

        do{
            scanf("%c",&op3);
        }while(op3!='a'&&op3!='b');
        
        if(op3=='a'){
            continuartela();
        }
        if(op3=='b'){
            Fim();
            return 0;
        }
        
        printf("Voce e Tyler continuam andando juntos, tres dias se passam e nada de encontrar os outros cavaleiros\n");
        printf("Tyler: Nao aguento mais dormir cercado por feras e com essa armadura pesada\n");
        printf("Tyler: Vamos logo para a torre, temos que acabar com isso e encontrar a deusa desse mundo\n");
        printf("Relutante, voce concorda com ele e voces seguem em direcao a torre do mago");
        printf("Na frente da torre haviam duas pessoas acampando em barracas\n");
        printf("Desconhecida: Voces devem ser os cavaleiros que faltavam\n");
        printf("Desconhecida: Estavamos esperando por voces, eu sou a Marilu, a cavaleira da guerra, esse cara aqui e o Gabriel, o cavaleiro da fome\n");
        printf("Voces escutam um barulho alto e a porta se abre sozinha\n");
        printf("Marilu: Ja estavamos a dias tentando abrir essa porta! Ela nao tem tranca nem macaneta, o que acabou de acontecer?\n");
        
        continuartela();
        
        printf("Apos algum tempo conversando, voces decidem entrar, na primeira sala encontram dois demonios...\n");
        printf("Demonio I: Sejam bem-vindos, pseudo-herois, hahahaha, estavamos esperando por voces! - O primeiro demonio fala, ele e baixo e careca\n");
        printf("Demonio II: Espero que me divirtam pelo menos um pouco - O segundo demonio tem cabelos longos e cheios de adornos\n");
        printf("Demonios: Nos somos os lordes da inveja e da ganancia, se entregarem tudo que possuem, podemos deixar voces voltarem\n");
        
        continuartela();

        printf("O que voce deseja fazer?\n");
        printf("a) Jogar a bolsa para os demonios\n");
        printf("b) Recusar\n");

        for(i=0;i<1;i++){
            scanf(" %c",&op4);

            if(op4!='a'&&op4!='b'){
                i-=1;
                printf("opcao invalida");
            }
        }
        if(op4=='a'){
            printf("Todos os seus companheiros ficam com medo e jogam os itens tambem, eles nao podem continuar sem voce!\n");
            printf("Os demonios pegam os itens e derrotam voces em seguida\n\n");
            printf("Nao se deve acreditar em demonios...\n");

            Fim();

            return 0;
        }
        if(op4=='b'){
            printf("Voce rejeita a proposta deles e parte para derrota-los\n");
            if(strcmp(armas[0],"Arco")==0){
                printf("Enquanto seus companheiros distraem os dois, voce se afasta e atira um flecha em cada. Ambas acertam na cabeca!\n\n");
            }
            if(strcmp(armas[0],"Pistola")==0){
                printf("Voce corre em direcao a eles enquanto dispara varios tiros! No entanto, seus tiros nao conseguem feri-los\n");
                printf("Marilu, a cavaleira da guerra, os ataca com suas adagas, e os derrota em um piscar de olhos. Voce fica impressionado(a)!\n");
            }
            if(strcmp(armas[0],"Espada")==0){
                printf("Voce voa em direcao aos demonios e apunha-la na barriga um de cada vez!\n");
                printf("Sua espada fica cheia de sangue e quando voce olha pra Tyler, ele esta vomitando\n");
            }
            if(strcmp(armas[0],"Bastao")==0){
                printf("Tyler corre com medo... Quando os demonios vao voando atras dele, voce os derrota com um golpe que explode suas cabecas\n");
            }
            if(strcmp(armas[0],"Machado")==0){
                printf("Voce atira o machado na direcao deles! Ele arranca suas cabecas e volta voando para sua mao\n");
                printf("Voce diz que decapitar e uma habilidade muito util\n");
            }
            printf("Apos derrotarem os demonios, voces sobem para a proxima sala\nonde encontram uma linda mulher com chifres\n");
            printf("luxuria: Ola, imagino que sejam os cavaleiros, sou a luxuria\nsejam bem-vindos, espero que tenham gostado daqui, nao pretendo deixa-los sair\n\n");
            printf("Gabriel, o cavaleiro da fome avanca nela e a beija\n todos ficaram entender se esse era o poder dela ate ele soltar o corpo dela morto no chao\n");
            printf("Gabriel: Meu poder e sugar a energia vital de qualquer ser vivo, minha fome e de vida\n");

            continuartela();

            printf("Seguindo em frente, voces encontram um garotinho jogado em um sofa e vendo televisao\n");
            printf("Voces fazem varias perguntas mas ele ignora voces \nvoces chegam mais perto e veem que ele tem os olhos vermelhos\n");
            printf("--Voces estao na frente da televisao, podem me dar licenca, por favor?\n\n");
            printf("--Qual demonio voce e?- Marilu pergunta tocando no rosto dele com delicadeza\n\n");
            printf("--Nao gosto muito desse nome, podem me chamar de lorde da preguica, me ignorem e sigam em frente, nao estou com vontade de brigar hoje\n\n");

            continuartela();

            printf("Voces decidem passar direto por ele, e covardia machucar uma crianca, independente da especie\n");
            printf("Principalmente se ela nem estiver disposta a lutar\n\n");

            printf("Na proxima sala voces se deparam com uma grande mesa de jantar\n as paredes decoradas com caveiras e armaduras\n");
            printf("--Oh, meu jantar chegou antes do que eu esperava, prazer, sou o lorde da gula\n");
            printf("Marilu: O desprazer e todo nosso - Marilu faz uma piada e ninguem ri\n");
            printf("Ela parece fica desconfortavel, mas antes que ele possa abrir a boca ela parte para derrota-lo\n");
            printf("Ele aparenta ser mais forte que os outros, ela sai completamente ferida mas consegue abate-lo\n");

            continuartela();

            printf("Na sala seguinte voces se deparam com uma sala com varios vidros estilhacados pelo chao\n");
            printf("Antes que voces tenham tempo de procurar alguem, um demonio vermelho se lanca na sua direcao\n");

            if(strcmp(armas[1],"Arco")==0){
                printf("Voce puxa o arco rapidamente da bolsa, mas nao teria tempo de mirar, entao enfia o arco dentro da garganta do demonio\n\n");
            }
            if(strcmp(armas[1],"Pistola")==0){
                printf("Voce atira rapidamente dentro da boca do demonio, a bala ultrapassa seu pescoco e ele cai morto\n");
            }
            if(strcmp(armas[1],"Espada")==0){
                printf("Voce saca sua espada e corta o demonio ao meio\n");
            }
            if(strcmp(armas[1],"Bastao")==0){
                printf("Voce da uma pancada forte com o bastao na barriga dele, ele e lancado em direcao a parede e Tyler da o golpe final\n");
            }
            if(strcmp(armas[1],"Machado")==0){
                printf("Voce joga o machado nele e sua cabeca e lancada pela janela quebrada\n");
            }

            continuartela();

            printf("Deseja continuar?\n");
            printf("a) Continuar\nb) Finalizar\n\n");

            do{
                scanf("%c",&op5);
            }while(op5!='a'&&op5!='b');

            if(op5=='a'){
                continuartela();
            }
            if(op5=='b'){
                Fim();
                return 0;
            }

            printf("Voces sobem varios andares sem encontrar ninguem, mas quando estao quase no topo, encontram um demonio em um trono\n");
            printf("Orgulho: Voces ja devem saber quem sou, o maior, o melhor, o mais forte...\n");
            printf("Voce nao permite que ele termine de falar e ja parte para ataca-lo\n\n");

            if(strcmp(armas[1],"Arco")==0){
                printf("Voce puxa o arco rapidamente da bolsa, mas nao teria tempo de mirar, entao enfia o arco dentro da garganta do demonio\n\n");
            }
            if(strcmp(armas[1],"Pistola")==0){
                printf("Voce atira rapidamente dentro da boca do demonio, a bala ultrapassa seu pescoco e ele cai morto\n");
            }
            if(strcmp(armas[1],"Espada")==0){
                printf("Voce saca sua espada e corta o demonio ao meio\n");
            }
            if(strcmp(armas[1],"Bastao")==0){
                printf("Voce da uma pancada forte com o bastao na barriga dele, ele e lancado em direcao a parede e Tyler da o golpe final\n");
            }
            if(strcmp(armas[1],"Machado")==0){
                printf("Voce joga o machado nele e sua cabeca e lancada pela janela quebrada\n");
            }

            printf("Voces partem para a proxima sala, no entanto voces so encontram um senhor andando de um lado para o outro\n");
            printf("Tyler: Esta tudo bem:? o que voce ta fazendo aqui? - Tyler pergunta e o velhinho olha pra voces.");
            printf("Mago: Nao consigo acreditar que conseguiram chegar ate aqui, minha seguranca e perfeita, meus demonios deveriam te-los derrotado\n");

            printf("O que voce deseja fazer?\n");
            printf("a) Ja chega dessa palhacada, voce e o mago da corte e nos demos que te derrotar, vamos logo com isso\n");
            printf("b) Vou permitir que se apresente\n");

            do{
                scanf("%c",&op6);
            }while(op6!='a'&&op6!='b');

            if(op6=='a'){

                continuartela();

                printf("Voce vai pra cima dele, voando, no entanto, e atirado com forca na parede, por uma bola de fogo\n\n");
                printf("O Tyler comeca a recitar algo que parece com uma oracao em uma lingua antiga\n");
                printf("O mago olha pra ele e tenta ataca-lo, mas o Gabriel pega as adagas da Marilu e corre ate ele\n");
                printf("Quando Tyler termina de recitar o mago cospe sangue e coloca a mao no peito\n");
                printf("Mago: Malditos, voce e o cavaleiro da morte, nao deveria ter feito isso\n");
                printf("Tyler:Nao me importo de arriscar minha vida pelos meus companheiros\n\n");
                printf("Tyler cai morto no chao e o mago tambem\n\n");
                printf("Quem pode me explicar o que aconteceu?\n");
                printf("Gabriel: %s, voce e a conquista, pra vencer voce deve sacrificar o caveleiro da morte, a lenda e essa\n",n);
            }
            if(op6=='b'){

                continuartela();

                printf("Sou Arthur, o mago e bla bla bla\n");
                printf("O Tyler comeca a recitar algo que parece com uma oracao em uma lingua antiga\n");
                printf("O mago esta tao distraido contando sua historia de vida que nem percebe o que esta por vir\n");
                printf("Quando Tyler termina de recitar o mago cospe sangue e coloca a mao no peito\n");
                printf("Mago: Malditos, voce e o cavaleiro da morte, nao deveria ter feito isso\n");
                printf("Tyler: Nao me importo de arriscar minha vida pelos meus companheiros\n\n");
                printf("Tyler cai morto no chao e o mago tambem\n");
                printf("Quem pode me explicar o que aconteceu?");
                printf("Gabriel: %s, voce e a conquista, pra vencer voce deve sacrificar o caveleiro da morte, a lenda e essa\n",n);
            }

            printf("Somos enviados de volta para a sala da deusa, ela sorri para nos\n");
            printf("Sinto muito pela perda do seu querido companheiro, agradeco por tudo, vou envia-los de volta para casa\n");
            printf("So devo alerta-los, os poderes e armas que adquiriram nesse mundo, permanecem com voces\n");
            printf("Fim de jogo\n\n");

            for(i=0;i<3;i++){
            free(armas[i]);
            }
            //libera cada uma das strings

            free(armas);
            //libera o vetor de strings

            free(n);
            //libera a string

            return 0;
        }
    }
}