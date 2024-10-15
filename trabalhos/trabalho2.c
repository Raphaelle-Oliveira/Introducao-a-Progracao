#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char*aloc(char*string, int tamanho) {
    char* ponteiro = NULL;
    do {
        ponteiro = (char*)malloc((tamanho * sizeof(char)));    
    } while (ponteiro == NULL);

    strncpy(ponteiro, string, tamanho);
    ponteiro[tamanho]='\0';

    return ponteiro;
}

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

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
void Fim(){
    printf("  ____    _    __  __ _____    _____     _______ ____\n");
    printf(" / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\\n");
    printf("| |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |\n");
    printf("| |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <\n");
    printf(" \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\\n");
}

int main(){
    char name[42];
    char *n;
    int len_name,i;
    char **armas;
    char option;
    char op1,op2,op3,op4,op5,op6;

    armas=(char**)malloc(sizeof(char*)*3);
    
    for(i=0;i<3;i++){
        armas[i]=(char*)malloc(sizeof(char)*10);
    }

    printf("Insira seu nome:");
    scanf("%s",name);
    len_name=strlen(name);
    n=aloc(name, len_name);

    name[0]='\0';
    limparTela();

    printf("--Bem vindo(a) %s, muito prazer, voce deve estar confuso.\n",n);
    printf("--Voce foi convocado a esse mundo para salva-lo da destruicao!\n");
    printf("--Esse mundo esta em guerra, uma guerra entre demonios e humanos, para evitar isso, eu preciso da sua ajuda sr(a). %s\n",n);
    printf("selecione uma opcao:\n");
    printf("a)eu nao vou me meter nisso, me envie de volta agora\n");
    printf("b)estou um pouco confuso(a)... mas posso ouvir o que tem a dizer\n");


    do{
        scanf("%c",&option);
    }while(option!='a'&&option!='b');

    if(option=='a'){
        Fim();
        return 0;
    }

    if(option=='b'){
        printf("--agradeco pela gentileza, esse mundo esta corrompido, o poder cegou o mago da corte e o mesmo criou criaturas capazes de destruir toda a minha criacao\n");
        printf("--por isso, convoquei quatro cavaleiros do seu mundo, destinados a salvar a humanidade da sua destruicao!\n");
        printf("--voce, %s, representa a conquista, em breve vai conhecer os outros tres, agora vou envia-la para uma floresta proxima a torre do mago e seus demonios\n",n);
        printf("--nessa floresta voce vai encontrar um elfo que lhe passara mais instrucoes e deve se reunir com os outros cavaleiros, boa sorte\n");
        printf("voce esta caindo dos ceus em direcao a uma floresta, mas uma tela aparece na sua frente\n\n");
        continuartela();

        printf("voce conquistou a habilidade\nvoar\n\n");
        printf("voce consquistou a habilidade\nluta\n\n");
        printf("voce conquistou a habilidade\narco e flecha\n\n");
        printf("voce conquistou a habilidade\nesgrima\n\n");
        continuartela();

        printf("seu corpo fica mais leve e voce consegue voar e pousar com facilidade em um campo aberto bem no meio da floresta\n");
        printf("de repente uma linda elfa de cabelos prateados surge na sua frente");
        printf("--prazer, me chamo Anna, estou aqui para orientar nos seus primeiros passos, fui enviada pela deusa\n");
        printf("--nao temos muito tempo, entao peco que me siga");
        continuartela();
        
        printf("selecione uma opcao:\n");
        printf("a)segui-la\n");
        printf("b)seguir sozinho!\n");

        do{
            scanf("%c",&op1);
        }while(op1!='a'&&op1!='b');
        continuartela();

        if(op1=='a'){
            printf("Anna leva voce ate uma casa no centro da floresta, entrega uma bolsa magica e abre um armario cheio de armas de diferentes tipos\n");
            printf("--voce deve escolher tres dessas armas para manter com voce durante sua jornada\n\n");
            printf("selecione uma das opcoes\n");
            printf("a)arco\n");
            printf("b)pistola\n");
            printf("c)espada\n");
            printf("d)bastao\n");
            printf("e)machado\n");

                for(i=0;i<3;i++){
                    scanf(" %c",&op2);
                    if(op2=='a'){
                        armas[i]="arco";
                    }
                    else if(op2=='b'){
                        armas[i]="pistola";
                    }
                    else if(op2=='c'){
                        armas[i]="espada";
                    }
                    else if(op2=='d'){
                        armas[i]="bastao";
                    }
                    else if(op2=='e'){
                        armas[i]="machado";
                        printf("voce rececebeu a habilidade decapitar");
                    }
                    else{
                        i-=1;
                        printf("opcao invalida\ndigite novamente:\n");
                    }
                }
            printf("--sinto muito, a partir de agora voce deve seguir sozinho(a), desejo sorte a voce e seus companheiros\n");
            printf("assim que sai da casa, voce olha pra tras e a mesma desapareceu.\n");
            printf("voce decide seguir em frente e encontra seu amigo de faculdade, Tyler\n");
        }  

        if(op1=='b'){
            printf("com extrema desconfianca, voce se separa de Anna em certo ponto do trajeto\n");
            printf("voce esbarra com um homem no trajeto e percebe que ele esta com uma camiseta unificada\n");
            printf("--ah, voce? lembra de mim %s?\n",n);
            printf("era seu antigo colega da faculdade, Tyler\n");
            printf("voce desabafa dizendo que esta perdido(a) e nao entende direito esse mundo\n");
            printf("--ah, eu ja cheguei a alguns dias, percebi que voce esta desarmado, toma uma espada, acabei sendo tolo e escolhi duas armas iguais\n");
            printf("voce fica confuso sobre o que se trata mas aceita com gratidao\n");
            for(i=0;i<3;i++){
                armas[i]="espada";
            }
            continuartela();
        }

        printf("deseja continuar?\n");
        printf("selecione uma opcao:\n");
        printf("a)continuar\nb)finalizar\n\n");

        do{
            scanf("%c",&op3);
        }while(op3!='a'&&op3!='b');
        
        if(op3=='a'){
            limparTela();
        }
        if(op3=='b'){
            Fim();
            return 0;
        }
        
        printf("voce e Tyler continuam andando juntos, tres dias se passam e nada de encontrar os outros cavaleirosz\n");
        printf("--nao aguento mais dormir cercado por feras e com essa armadura pesada\n");
        printf("--vamos logo para a torre, temos que acabar com isso e encontrar a deusa desse mundo\n");
        printf("relutante, voce concorda com ele e voces seguem em direcao a torre do mago");
        printf("na frente da torre haviam duas pessoas acampando em barracas\n");
        printf("--voces devem ser os cavaleiros que faltavam\n");
        printf("--estavamos esperando por voces, eu sou a Marilu, a cavaleira da guerra, esse cara aqui e o Gabriel, o cavaleiro da fome\n");
        printf("voces escutam um barulho alto e a porta se abre sozinha\n");
        printf("--ja estavamos a dias tentando abrir essa porta, ela nao tem tranca ou macaneta, o que foi isso?\n");
        
        continuartela();
        
        printf("apos algum tempo conversando, voces decidem entrar, na primeira sala encontram dois demônios...\n");
        printf("--sejam bem-vindos, pseudo-herois, hahahaha, estavamos esperando por voces!- o primeiro demonio fala, ele e baixo e careca\n");
        printf("--espero que me divirtam pelo menos um pouco - o segundo demonio tem cabelos longos e cheios de adornos\n");
        printf("--nos somos os lordes da inveja e da ganancia, se entregarem tudo que possuem, podemos deixar voces voltarem\n");
        
        continuartela();

        printf("selecione uma opcao:");
        printf("a)jogar a bolsa para os demonios\n");
        printf("b)recusar\n");

        for(i=0;i<1;i++){
            scanf(" %c",&op4);
            if(op4!='a'&&op4!='b'){
                i-=1;
                printf("opcao invalida");
            }
        }
        if(op4=='a'){
            printf("todos os seus companheiros ficam com medo e jogam os itens tambem, eles nao podem continuar sem voce!\n");
            printf("os demonios pegam os itens e derrotam voces em seguida\n\n");
            printf("nao se deve acreditar em demonios\n\n");
            Fim();
            return 0;
        }
        if(op4=='b'){
            printf("voce rejeita a proposta deles e parte para derrota-los\n");
            if(strcmp(armas[0],"arco")==0){
                printf("enquanto seus companheiros distraem os dois\nvoce se afasta e atira um flecha em cada,ambas acertam na cabeca\n\n");
            }
            if(strcmp(armas[0],"pistola")==0){
                printf("voce corre em direcao a eles enquanto dispara varios tiros \nno entanto seus tiros nao conseguem feri-los\n");
                printf("Marilu, a cavaleira da guerra, os ataca com suas adagas \ne os derrota em um piscar de olhos\nvoce fica impressionado(a)!\n");
            }
            if(strcmp(armas[0],"espada")==0){
                printf("voce voa em direcao aos demonios e apunha-la na barriga um de cada vez \nsua espada fica cheia de sangue e quando voce olha pra Tyler, ele esta vomitando\n");
            }
            if(strcmp(armas[0],"bastao")==0){
                printf("Tyler corre com medo\nquando os demonios vao voando atras dele, voce os derrota com um golpe que explode suas cabecas\n");
            }
            if(strcmp(armas[0],"machado")==0){
                printf("voce atira o machado na direcao deles\nele arranca suas cabecas e volta voando para sua mao\nvoce diz que decapitar e uma habilidade muito util");
            }
            printf("apos derrotarem os demonios, voces sobem para a proxima sala\nonde encontram uma linda mulher com chifres\n");
            printf("--ola, imagino que sejam os cavaleiros, sou a luxuria\nsejam bem-vindos, espero que tenham gostado daqui, nao pretendo deixa-los sair\n\n");
            printf("Gabriel, o cavaleiro da fome avanca nela e a beija\n todos ficaram entender se esse era o poder dela ate ele soltar o corpo dela morto no chao\n");
            printf("--Meu poder e sugar a energia vital de qualquer ser vivo, minha fome e de vida\n");
            
            continuartela();

            printf("seguindo em frente, voces encontram um garotinho jogado em um sofa e vendo televisao\n");
            printf("voces fazem varias perguntas mas ele ignora voces \nvoces chegam mais perto e veem que ele tem os olhos vermelhos\n");
            printf("--voces estao na frente da televisao, podem me dar licenca, por favor?\n\n");
            printf("--qual demonio voce e?- Marilu pergunta tocando no rosto dele com delicadeza\n\n");
            printf("--nao gosto muito desse nome, podem me chamar de lorde da preguica, me ignorem e sigam em frente, nao estou com vontade de brigar hoje\n\n");

            continuartela();
            printf("voces decidem passar direto por ele, e covardia machucar uma crianca, independente da especie\n");
            printf("principalmente se ela nem estiver disposta a lutar\n\n");

            printf("na proxima sala voces se deparam com uma grande mesa de jantar\n as paredes decoradas com caveiras e armaduras\n");
            printf("--oh, meu jantar chegou antes do que eu esperava, prazer, sou o lorde da gula\n");
            printf("--o desprazer e todo nosso - Marilu faz uma piada e ninguem ri\n");
            printf("ela parece fica desconfortavel mas antes que ele possa abrir a boca ela parte para derrota-lo\n");
            printf("ele aparenta ser mais forte que os outros, ela sai completamente ferida mas consegue abate-lo\n");

            continuartela();

            printf("na sala seguinte voces se deparam com uma sala com varios vidros estilhacados pelo chao\n");
            printf("antes que voces tenham tempo de procurar alguem, um demonio vermelho se lanca na sua direcao\n");
            
            if(strcmp(armas[1],"arco")==0){
                printf("voce puxa o arco rapidamente da bolsa, mas nao teria tempo de mirar, entao enfia o arco dentro da garganta do demonio\n\n");
            }
            if(strcmp(armas[1],"pistola")==0){
                printf("voce atira rapidamente dentro da boca do demonio, a bala ultrapassa seu pescoco e ele cai morto\n");
            }
            if(strcmp(armas[1],"espada")==0){
                printf("voce saca sua espada e corta o demonio ao meio\n");
            }
            if(strcmp(armas[1],"bastao")==0){
                printf("voce da uma pancada forte com o bastao na barriga dele, ele e lancado em direcao a parede e Tyler da o golpe final\n");
            }
            if(strcmp(armas[1],"machado")==0){
                printf("voce joga o machado nele e sua cabeca e lancada pela janela quebrada\n");
            }
            limparTela();

            printf("deseja continuar?\n");
            printf("selecione uma opcao:\n");
            printf("a)continuar\nb)finalizar\n\n");

            do{
                scanf("%c",&op5);
            }while(op5!='a'&&op5!='b');
            
            if(op5=='a'){
                limparTela();
            }
            if(op5=='b'){
                Fim();
                return 0;
            }

            printf("voces sobem varios andares sem encontrar ninguem, mas quando estao quase no topo, encontram um demonio em um trono\n");
            printf("--voces ja devem saber quem sou, o maior, o melhor, o mais forte...\n");
            printf("voce nao permite que ele termine de falar e ja parte para ataca-lo\n\n");

            if(strcmp(armas[1],"arco")==0){
                printf("voce puxa o arco rapidamente da bolsa, mas nao teria tempo de mirar, entao enfia o arco dentro da garganta do demonio\n\n");
            }
            if(strcmp(armas[1],"pistola")==0){
                printf("voce atira rapidamente dentro da boca do demonio, a bala ultrapassa seu pescoco e ele cai morto\n");
            }
            if(strcmp(armas[1],"espada")==0){
                printf("voce saca sua espada e corta o demonio ao meio\n");
            }
            if(strcmp(armas[1],"bastao")==0){
                printf("voce da uma pancada forte com o bastao na barriga dele, ele e lancado em direcao a parede e Tyler da o golpe final\n");
            }
            if(strcmp(armas[1],"machado")==0){
                printf("voce joga o machado nele e sua cabeca e lancada pela janela quebrada\n");
            }

            printf("voces partem para a proxima sala, no entanto voces so encontram um senhor andando de um lado para o outro\n");
            printf("--esta tudo bem:? o que voce ta fazendo aqui? - Tyler pergunta e o velhinho olha pra voces.");
            printf("--nao consigo acreditar que conseguiram chegar ate aqui, minha segurança e perfeita, meus demonios deveriam te-los derrotado\n");
            
            printf("selecione uma opcao:");
            printf("a)--ja chega dessa palhacada, voce e o mago da corte e nos demos que te derrotar, vamos logo com isso\n");
            printf("b)--vou permitir que se apresente\n");

            do{
                scanf("%c",&op6);
            }while(op6!='a'&&op6!='b');

            if(op6=='a'){
                printf("voce vai pra cima dele, voando, no entanto, e atirado com forca na parede, por uma bola de fogo\n\n");
                printf("o Tyler comeca a recitar algo que parece com uma oracao em uma lingua antiga\n");
                printf("o mago olha pra ele e tenta ataca-lo, mas o Gabriel pega as adagas da Marilu e corre ate ele\n");
                printf("quando Tyler termina de recitar o mago cospe sangue e coloca a mao no peito\n");
                printf("--malditos, voce e o cavaleiro da morte, nao deveria ter feito isso\n");
                printf("--nao me importo de arriscar minha vida pelos meus companheiros\n\n");
                printf("Tyler cai morto no chao e o mago tambemz\n");
                printf("quem pode me explicar o que aconteceu?");
                printf("--%s, voce e a conquista, pra vencer voce deve sacrificar o caveleiro da morte, a lenda e essa\n",n);
            }
            if(op6=='b'){
                printf("sou Arthur, o mago e bla bla bla");
                printf("o Tyler comeca a recitar algo que parece com uma oracao em uma lingua antiga\n");
                printf("o mago esta tao distraido contanto sua historia de vida que nem percebe o que esta por vir\n");
                printf("quando Tyler termina de recitar o mago cospe sangue e coloca a mao no peito\n");
                printf("--malditos, voce e o cavaleiro da morte, nao deveria ter feito isso\n");
                printf("--nao me importo de arriscar minha vida pelos meus companheiros\n\n");
                printf("Tyler cai morto no chao e o mago tambemz\n");
                printf("quem pode me explicar o que aconteceu?");
                printf("--%s, voce e a conquista, pra vencer voce deve sacrificar o caveleiro da morte, a lenda e essa\n",n);

            }

        }

    }
    printf("somos enviados de volta para a sala da deusa, ela sorri para nos\n");
    printf("sinto muito pela perda do seu querido companheiro, agradeco por tudo, vou envia-los de volta para casa\n");
    printf("so devo alerta-los, os poderes e armas que adquiriram nesse mundo, permanece com voces\n");
    printf("fim de jogo\n\n");

    for(i=0;i<3;i++){
        free(armas[i]);
    }

    free(armas);
    free(n);
    return 0;
}