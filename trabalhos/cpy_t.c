#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ATAQUE 'a'
#define CURA 'b'
#define VIDA_INICIAL 125
#define PRECISAO_ATAQUE 0.8
#define TAXA_EVASAO 0.2
#define CURA_PERCENTUAL 0.5
#define DANO_ATAQUE 20

char nomeg[50];
void reiniciar();
void invalido();
void limparTela();
void continuartela();
void turnoAtaque();
void turnoCura();
void turnoInimigo();
void batalha();
void InicioJogo();

//Função para definir os inimigos e suas características em cada batalha
struct Mob {
    char nome[50];
    int vida, dano;
};

int main() {
    InicioJogo();
    return 0;
}

//Função que reinicia o jogo caso a vida do herói chegue a zero
void reiniciar(int *suaVida){
    if(*suaVida<=0){
        continuartela();
        printf(" ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗ \n");
        printf("██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██║   ██║██╔════╝██╔══██╗\n");
        printf("██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║██║   ██║█████╗  ██████╔╝\n");
        printf("██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║╚██╗ ██╔╝██╔══╝  ██╔══██╗\n");
        printf("╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝ ╚████╔╝ ███████╗██║  ██║\n");
        printf(" ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═╝\n");
        printf("                                                                          \n");
        printf("\n");
        printf("\n");
        printf("Voce morreu!!! Voce deseja reiniciar o jogo ou deseja encerrar?\n");
        printf("\n");
        printf("a) Reiniciar\n");
        printf("b) Encerrar\n");
        
        char escolha;   
        do {
            scanf(" %c", &escolha);
            switch(escolha){
        case 'a':
            continuartela();
            InicioJogo();
            break;
        case 'b':
            exit(0);
            break;
        default:
            invalido();
            break;
            }
        }
        while(escolha != 'a' && escolha != 'b' && escolha != 'c');
        continuartela();
    }
}
//Função para caso seja inserido o caractere incorreto
void invalido(){
    printf("Opcao Invalida.\n");
            while (getchar() != '\n')  ;
}
//Função para limpar a tela
void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
//Função que limpa a tela e transiciona entre as linhas do código
void continuartela() {
    printf("\n");
    printf("Pressione qualquer tecla para continuar\n");
    char tecla;
    scanf(" %c", &tecla);
    if (tecla) {
        limparTela();
    }
}
// Funcao para calcular a taxa de acuracia do ataque
float calcularAcuracia() {
    return PRECISAO_ATAQUE;
}
// Funcao para verificar se o ataque acertou
int ataqueAcertou() {
    float chance = (float)rand() / RAND_MAX;
    return chance <= calcularAcuracia();
}
// Funcao para realizar um turno de ataque
void turnoAtaque(int *vidaAlvo, int dano, char *nome) {
    printf("Voce ataca o/a %s!\n", nome);
    if (ataqueAcertou()) {
        *vidaAlvo -= DANO_ATAQUE; // Dano do ataque
        printf("Voce acertou! O/A %s perdeu %d de vida.\n", nome, dano);
    } else {
        printf("Voce errou o ataque!\n");
    }
}
// Funcao para realizar um turno de cura
void turnoCura(int *suaVida) {
    printf("Voce decide se curar!\n");
    int vidaAntesCura = *suaVida;
    *suaVida += (*suaVida * CURA_PERCENTUAL); // Curar 50% da vida
    if (*suaVida > 100) {
        *suaVida = 100;
    }
    printf("Voce se curou! Sua vida agora e: %d\n", *suaVida);
    printf("Voce recuperou %d pontos de vida.\n", *suaVida - vidaAntesCura);
}
// Funcao para verificar se o ataque do inimigo acertou
int inimigoAcertou() {
    float chance = (float)rand() / RAND_MAX;
    return chance >= TAXA_EVASAO;
}
// Funcao para realizar um turno do inimigo
void turnoInimigo(int *suaVida, int dano, char *nome) {
    printf("O %s ataca!\n", nome);
    if (inimigoAcertou()) {
        *suaVida -= dano; // Dano do ataque inimigo
        printf("O/A %s acertou! Voce perdeu %d de vida.\n", nome, dano);
    } else {
        printf("O/A %s errou o ataque!\n", nome);
    }
}
// Função para as batalhas do RPG
void batalha(int *suaVida, struct Mob mob) {
    int hpMob = mob.vida;
    int turno = 0;

    printf("Você encontrou um(a) %s!\n", mob.nome);

    while (*suaVida > 0 && hpMob > 0) {
        turno++;
        printf("Turno %d\n", turno);

        if (turno % 2 == 1) {
            char escolha;
            do {
                printf("Sua vez de agir:\n");
                printf("a) Atacar\n");
                printf("b) Curar\n");
                scanf(" %c", &escolha);
                switch (escolha) {
                    case ATAQUE:
                        turnoAtaque(&hpMob, DANO_ATAQUE, mob.nome);  // Certifique-se de que DANO_ATAQUE está definido
                        break;
                    case CURA:
                        turnoCura(suaVida);
                        break;
                    default:
                        invalido();
                        break;
                }
            } while (escolha != ATAQUE && escolha != CURA);
            continuartela();

            if (hpMob <= 0) {
                printf("Você derrotou o(a) %s!\n", mob.nome);
                *suaVida = VIDA_INICIAL;
                break;
            }
        } else {
            turnoInimigo(suaVida, mob.dano, mob.nome);
        }
        printf("Sua vida: %d | Vida do %s: %d\n", *suaVida, mob.nome, hpMob);
    }
    printf("Fim da batalha!\n");
}
//Funçao para iniciar o RPG
void InicioJogo() {
    char nomejogador[50];
    printf("    ____             _                  __             __        ______            _      \n");
    printf("   / __ \\___  ____  ()__  _______  _/ /__ _   ___/ /_     /_  _/__ _____  ()__ _\n");
    printf("  / /_/ / _ \\/ __ \\/ / __ \\/ ___/ / / / / __ `/  / __  / _ \\     / / / __ `/ __ \\/ / __ `/\n");
    printf(" / ___/  __/ / / / / / / (_  ) // / / // /  / // /  __/    / / / // / / / / / /_/ / \n");
    printf("//    \\// //// ///\\,//\\,/   \\,/\\/    //  \\,// ///\\,/  \n");
    printf("                                                                                           \n");
    printf("\n");
    continuartela();

    printf("Ola jogador, qual e o seu nome?\n");
    scanf("%s", nomejogador);
    printf("\n");
    printf("E qual sera o nome do seu guerreiro(a)?\n");
    scanf("%s", nomeg);
    printf("\n");
    printf("Bem vindo(a) %s, nessa historia voce ira seguir o caminho do(a) guerreiro(a) %s\n", nomejogador, nomeg);
    continuartela();

    int suaVida = VIDA_INICIAL;
    srand(time(NULL));

    printf("Voce e o(a) guerreiro(a) %s e esta a caminho da cidade em busca da guilda, um casarao onde pode conseguir missoes.\n", nomeg);
    printf("Chegando perto do portao, dois guardas te impedem de entrar e falam:\n");
    printf("Pare ai! ");
    printf("Antes de entrar na cidade, voce precisa pagar o imposto de visitante.\n");
    printf("O que voce ira fazer?\n");
    printf("\n");
    printf("a) Pagar o imposto\n");
    printf("b) Tentar passar sem pagar\n");
    printf("c) Falar que isso e um abuso e mentira\n");

    char escolha;

    do {
      scanf(" %c", &escolha);
      switch(escolha){
        case 'a':
            printf("Voce decide pagar o imposto. Eles te deixam passar\n");
            break;
        case'b':
            printf("Voce tenta passar sem pagar, mas e pego pelos guardas e precisa pagar uma multa.\n");
            printf("Apos pagar a multa, voce finalmente e permitido entrar na cidade.\n");
            break;
        case 'c':
             printf("Os guardas te olham de canto de olho, pensam em desembainhar a suas espadas, mas te deixam passar.\n");
             break;
        default:
           invalido();
           break;
        }
    }
    while(escolha != 'a' && escolha != 'b' && escolha != 'c');

    continuartela();

    printf("Com isso voce finalmente consegue entrar dentro da cidade, o que voce ira fazer?\n");
    printf("\n");
    printf("a) Andar reto sem destino\n");
    printf("b) Peguntar sobre a guilda para alguem\n");

    do {
    scanf(" %c", &escolha);
    switch(escolha){
        case 'a':
            printf("Apesar da cidade em que esta ser grande, voce encontra Igrejas, Tavernas, casas comuns e cabares no seu caminho.\n");
            printf("Mas, logo voce encontra a guilda, um casarao grande e bem chamativo, perto do centro da cidade.\n");
            break;
        case 'b':
            printf("Voce pergunta a um homem que nitidamente parece um guerreiro\n");
            printf("%s: Ola meu caro, por algum acaso voce saberia onde que fica a guilda?\n", nomeg);
            printf("Estranho: Guilda? Meu patrao, se voce seguir em frente, voce chega proximo ao centro. La, encontrara o que procura.\n");
            break;
        default:
            invalido();
            break;
          }
    }
    while(escolha != 'a' && escolha != 'b');

    continuartela();

    printf("E finalmente depois de uma curta caminhada voce encontra a guilda e entra nela.\n");
    printf("Dentro da guilda, o que voce ira fazer?\n");
    printf("\n");
    printf("a) Falar com a atendente\n");
    printf("b) Procurar em volta\n");

    do {
        scanf(" %c", &escolha);
    switch(escolha){
        case 'a':
            printf("Atendente: Ad Astra Abyssosque! Seja bem vindo(a), caro(a) aventureiro(a)! O que deseja?\n");
            printf("%s: Bom dia senhorita, eu queria saber se tem alguma missao disponivel no momento\n", nomeg);
            printf("Atendente: Claro! Aqui esta.");
            break;
        case 'b':
            printf("Voce percebe que tem varios olhares suspeitos ao seu redor.\n");
            printf("%s: Essas pessoas nao parecem ser muito receptivas nao, melhor eu falar com a atendente primeiro... (Pensamento)\n", nomeg);
            continuartela();
            printf("Atendente: Ad Astra Abyssosque! Seja bem vindo(a), caro(a) aventureiro(a)! O que deseja?\n");
            printf("%s: Bom dia senhorita, eu queria saber se tem alguma missao disponivel no momento\n", nomeg);
            printf("Atendente: Claro! Aqui esta.");
            break;
        default:
            invalido();
            break;
        }
    }
    while(escolha != 'a' && escolha != 'b');

    continuartela();

    printf("Atendente: %s, a 60km daqui, voce ira encontrar uma peninsula, chamada de peninsula de Tania.\n", nomeg);
    printf("La, voce vera uma masmorra. Nela, ha varios espolios, principalmente ouro e equipamentos.\n");
    printf("E no final da masmorra, o temido, o lendario, o imbativel, o chefe da masmorra, Hebert, estara a sua espera.\n");
    printf("A Guilda exige uma condicao para que fique com os espolios. Ela quer a cabeca de Hebert.\n");
    printf("Atendente: Tome. Este e o mapa que vai te levar ate la.\n");
    printf("Atendente: Boa sorte, aventureiro(a)!\n");
    printf("%s: Saquei, obrigado pelo mapa.\n", nomeg);
    printf("\n");
    printf("Desconfiado, voce parte em viagem para sua missao\n");
    continuartela();

    printf("Durante sua viagem, voce adentra uma floresta escura chamada Umbracea.\n");
    printf("Voce avanca calmamente...\n");
    printf("Voce ouve um galho se quebrar e olha para tras.\n");
    printf("Um grupo de Filhos da Floresta aparece, criaturas pequenas e rapidas!\n");
    printf("Voce puxa sua espada e ataca primeiro.\n");
    continuartela();

    struct Mob filho_da_floresta = {"Filho da Floresta", 50, 12};
    printf("Comeca a batalha!\n");
    batalha(&suaVida, filho_da_floresta);
    reiniciar(&suaVida);

    printf("O resto do grupo foge assustado.\n");
    printf("Voce continua a sua jornada.\n");
    continuartela();

    printf("Depois de andar por mais algumas horas, voce se depara com duas trilhas diferentes a frente.\n");
    printf("O mapa diz que qualquer um te levara ao seu destino\n");
    printf("Por qual delas voce ira?\n");
    printf("a) Pegar a primeira trilha\n");
    printf("b) Pegar a segunda trilha\n");

    do {
      scanf(" %c", &escolha);
      switch(escolha){
        case 'a':
            printf("A trilha te leva a uma ponte fragil. Ela despenca quando voce esta na metade do caminho!\n");
            printf("Voce avista uma sereia assassina avancando na sua direcao e puxa uma adaga.\n");
            continuartela();
            struct Mob sereia = {"Sereia Assassina", 60, 20};
            printf("Comeca a batalha!\n");
            batalha(&suaVida, sereia);
            reiniciar(&suaVida);
            break;
        case'b':
            printf("A trilha te leva a uma caverna escura. Depois de ficar perdido na escuridao completa, por momentos,\n");
            printf("a sorte sorriu para voce. Um eremita com uma lamparina chega ao seu encontro.\n");
            printf("Ele entende rapido, aponta a direcao certa, te da uma tocha e voce agradece.\n");
            break;
        default:
           invalido();
           break;
        }
    }
    while(escolha != 'a' && escolha != 'b');

    if (escolha == 'b'){
    continuartela();
    }

    printf("Os raios de luz te atingem. Aliviado, voce conseguiu sair da floresta.\n");
    printf("A jornada continua.\n");
    continuartela();
    printf("Apos uma longa viagem, voce encontra a masmorra, ela esta no meio da Peninsula de Tania.\n");
    printf("Decidido, voce adentra a masmorra\n");
    continuartela();
    printf("Agora o guerreiro(a) %s se encontra dentro da masmorra, ela e escura mas com algumas tochas ainda acesas, parece ter sido construida ha muito tempo atras\n",nomeg);
    printf("O que o guerreiro(a) %s ira fazer?\n",nomeg);
    printf("a) Seguir pelo caminho da esquerda\n");
    printf("b) Seguir pelo caminho da direita\n");
    printf("c) Procurar algo na sala\n");

    do{
        char escolha_2;
        scanf(" %c",&escolha);
        switch(escolha){
            case 'a':
                printf("Voce entao entra pela segunda sala a esquerda\n");
                printf("Apos entrar na sala da esquerda, voce encontra mais entulhos, um bau suspeito e mais escritas ilegiveis,mas algo como 'A*EN*E M*H*A ***A\n");
                printf("O que voce ira fazer?\n");
                printf("a) Seguir o caminho reto\n");
                printf("b) Abrir o bau\n");
                scanf(" %c",&escolha_2);
                    if (escolha_2 == 'a')
                    {
                        char escolha_3;
                        printf("Voce continua reto\n");
                        printf("Voce seguiu em frente e agora ha outra sala, um pouco mais conservada,agora as letras sao mais legiveis 'AU*EN*E MI*H*A N**A' e uma outra sala a direita \n");
                        printf("Olhando mais ao redor voce encontra uma tumba, nao parece trancada,deseja abri la? (y/n)\n");
                        scanf(" %c",&escolha_3);
                            if (escolha_3 == 'y')
                            {
                                printf("Voce achou um zumbi na tumba!!");
                                continuartela();
                                printf("Comece a batalha!!\n");
                                struct Mob zumbi = {"Zumbi", 55, 15};
                                batalha(&suaVida, zumbi);
                                reiniciar(&suaVida);
                                printf("Voce continua para a sala a direita\n");
                                continuartela();
                            }
                            else if(escolha_3 == 'n')
                            {
                                printf("Voce nao abre a tumba e continua sua jornada para a sala a direita\n");
                                continuartela();
                            }

                    }
                    else if (escolha_2 == 'b')
                    {
                        char escolha_3;
                        printf("Voce caiu em uma armadilha!!! O bau era um mimico e ele te ataca!");
                        continuartela();
                        struct Mob Bau_mimico = {"Bau mimico", 70, 15};
                        printf("Comece a batalha!!\n");
                        batalha(&suaVida, Bau_mimico);
                        reiniciar(&suaVida);

                        printf("Voce vence a batalha e segue adiante para o caminho a frente.\n");
                        printf("Voce continua reto\n");
                        printf("Voce seguiu em frente e agora ha outra sala,um pouco mais conservada, agora as letras sao mais legiveis 'AU*EN*E MI*H*A N**A' e uma outra sala a direita\n");
                        printf("Olhando mais ao redor voce encontra uma tumba, nao parece trancada, deseja abri-la? (y/n)\n");
                        scanf(" %c",&escolha_3);
                            if (escolha_3 == 'y')
                            {
                                printf("Voce achou um zumbi na tumba!!");
                                continuartela();
                                printf("Comece a batalha!!\n");
                                struct Mob zumbi = {"Zumbi", 55, 15};
                                batalha(&suaVida, zumbi);
                                reiniciar(&suaVida);
                            }
                            else if(escolha_3 == 'n')
                            {
                                printf("Voce nao abre a tumba e continua sua jornada\n");
                                continuartela();
                            }
                            else{
                                printf("Opcao invalida\n");
                                invalido();
                            }
                    }
                    else {
                        printf("Opcao invalida");
                        invalido();
                    }
                    break;
            case 'b':
                printf("Voce entao entra pela segunda sala a direita\n");
                printf("No final da sala voce avista um esqueleto preso em correstes de masmorra\n");
                printf("Mas como voce nao prestou atencao em seus pes, acaba pisando em uma placa de pressao e libera o esqueleto\n");
                continuartela();
                printf("Comece a batalha!!!\n");
                struct Mob esqueleto = {"Esqueleto", 40, 30};
                batalha(&suaVida, esqueleto);
                reiniciar(&suaVida);

                printf("Agora com a sala sem inimigos, voce avista novas escritas ilegiveis na parade, 'AU*EN*E MI*H*A N**A', alem de um caminho para outra sala a frente\n");
                break;
            case 'c':
                printf("Voce procura melhor pela sala, nao acha nada de interessante apenas algumas escrituras na parede ilegiveis\n");
                printf("Escolha algum caminho\n");
                continuartela();
                break;
            default:
                invalido();
                break;
        }
    }while(escolha != 'a' && escolha != 'b');

    continuartela();

    printf("Agora voce se depara com uma sala mais iluminada\n");
    printf("As escritas na parede parecem ser ainda mais nitidas, 'AUMEN*E MINH*A N*TA'\n");
    printf("Voce tambem avista mais alguns baus e um alcapao\n");
    printf("%s: Que esquisito, eu pensei que essa masmorra ia ter o chefe HEBERT, mas acho que errei o caminho ou o mapa estava errado\n", nomeg);

    continuartela();

    printf("No momento em que diz isso, voce ouve um estrondo e sente o chao e as paredes tremerem\n");
    printf("Assustado, voce olha pra atras e ve Hebert, uma figura monstruosa e alta correndo na sua direcao!\n");
    printf("Sem tempo pra pensar, voce puxa sua espada com coragem\n");
    continuartela();

    printf("Comeca a batalha!\n");
    struct Mob hebert = {"Hebert", 120, 20};
    batalha(&suaVida, hebert);
    reiniciar(&suaVida);

    printf("Apos uma batalha intensa, voce sai vitorioso\n");
    printf("Voce arranca a cabeca de Hebert com sua espada e recolhe os tesouros da sala, incluindo ouro e artefatos poderosos\n");
    printf("Voce olha o alcapao no chao e pensa se vale a pena descer\n");
    printf("O que fara?\n");
    printf("a) Descer o alcapao\n");
    printf("b) Ir embora\n");

    do {
      scanf(" %c", &escolha);
      switch(escolha){
        case 'a':
            printf("Voce desce e se depara com uma sala iluminada fracamente por uma tocha no final\n");
            printf("Um barulho estranho vem do lado esquerdo da sala\n");
            printf("Olhando de perto, e uma aranha gigante e monstruosa!\n");
            continuartela();
            struct Mob aranha_gigante = {"Aranha Gigante", 70, 25};
            printf("Comeca a batalha!\n");
            batalha(&suaVida, aranha_gigante);
            reiniciar(&suaVida);

            printf("Voce sobe novamente apos pegar mais ouro da sala");
            break;
        case 'b':
            printf("Voce decide que nao vale a pena se arriscar e segue seu caminho\n");
            break;
        default:
           invalido();
           break;
        }
    }
    while(escolha != 'a' && escolha != 'b');

    continuartela();

    printf("Voce decide dar uma ultima olhada na masmorra e encontra uma sala inexplorada\n");
    printf("O que ira fazer?\n");
    printf("a) Ir embora\n");
    printf("b) Olhar a sala\n");

    do {
        scanf(" %c", &escolha);
    switch(escolha){
        case 'a':
            printf("Cansado, voce segue seu caminho para a guilda com as recompensas e a cabeca de Hebert\n");
            break;
        case 'b':
            printf("Voce adentra uma sala muito iluminada\n");
            printf("Nas paredes voce le as palavras 'AUMENTE MINHA NOTA'\n");
            printf("Confuso e perturbado, voce simplesmente vai embora\n");
            break;
        default:
            invalido();
            break;
        }
    }
    while(escolha != 'a' && escolha != 'b');

    continuartela();

    printf("De volta a guilda, voce entrega a cabeca de Hebert e a atendente te parabeniza pelo bom trabalho\n");
    printf("Atendente: %s, parabens pela forca e coragem de enfrentar os perigos da masmorra, voce e um verdadeiro heroi!\n", nomeg);
    printf("Atendente: Aqui esta o seu premio\n");
    printf("Voce recebe mais ouro e artefatos como recompensa pela missao, alem de uma nova armadura\n");

    continuartela();

    printf("As pessoas na guilda ouvem a conversa e nao conseguem acreditar que alguem conseguiu derrotar o monstro da masmorra\n");
    printf("Eles fazem uma grande comemoracao para recompensar voce, %s!\n", nomeg);

    continuartela();

    printf("| EPILOGO |\n");
    printf("Apos beber muito e passar a noite na cidade, %s pegou suas coisas e seguiu estrada sem avisar ninguem\n", nomeg);
    printf("Ele(a) parou pra descansar em cima de um monte durante o caminho e ficou observando o belo horizonte\n");
    printf("Ele(a) so conseguia pensar que o trabalho duro valeu a pena\n");

    continuartela();

    printf("FIM DE JOGO\n");
}