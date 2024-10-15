#include<stdio.h>
int main(){
    int escolha = 1;
    int resposta_correta;
    int espada = 1;
    while(1){
        //é utilizado um loop infinito para voltar para o menu sempre que for digitada uma opção invalida.
        printf("\tBem vindo ao Escape Princess\n\n");
        printf("Este e um jogo em que voce acompanhara as aventuras de Martha e Kayo, aventureiros que precisam salvar uma princesa que foi raptada.\nVoce pode jogar digitando o numero referente a opcao desejada para resolver os obstaculos e avancar.\n");
        printf("1 - comecar o jogo\n2 - sair\n");
        scanf("%d", &escolha);
        if(escolha==2) return 0;
        if(escolha==1){
            printf("Martha e uma aventureira com anos de experiencia e faz parte de uma guilda muito conhecida no vilarejo onde mora, um dia um aventureiro novato entra e ela fica responsavel por ensinar novas habilidades a ele, a primeira missao da dupla e salvar uma princesa em apuros, a oitava princesa do reino foi raptada por um demonio, agora Martha e Kayo tem a missao de salva-la.\n");
            printf("Os aventureiros entram na floresta e apos seguirem caminho se deparam com uma ponte.\nNo momento em que estao passando, um ogro enorme aparece, e Kayo completamente aterrorizado sai correndo gritando 'NAO NAO NAO, EU NAO QUERO ENFRENTAR ESSE BICHO FEIO!!'\nMartha tenta impedir Kayo, mas o Ogro a segura e diz\n\t- Nao fui com a cara do seu amigo, e agora estou bem furioso, ele nao passa por essa ponte, mas voce parece valente, deixo voce passar se voce provar ser mais inteligente que eu acertando minhas charadas.\n");
            while(1){
                printf("Primeira: Quantas letras ha no alfabeto\n1-26\n2-23\n3-8\n");
                scanf("%d",&escolha);
                if(escolha==1){
                    printf("Escolha errada\n");
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==2){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==3){
                    resposta_correta = 1;
                    printf("Martha, muito confiante, responde ao ogro\n-obviamente a palavra 'alfabeto' possui dez letras");
                    break;
                }
                else printf("opcao invalida!\n");
            }

            if(resposta_correta){
                printf("O ogro se anima um pouco e diz:\n\t- Você parece esperta, mas vamos ver se e tudo isso que aparenta, a proxima nao sera assim tao facil... hehehe");
            }
            else{
                printf("O ogro decepcionado olha bem para a aventureira e diz:\n\t- Eu genuinamente esperava que voce tivesse um pouco mais de cerebro... se nao conseguiu acertar essa quero ver se consegue pelo menos entender a proxima...");
            }

            while(1){
                printf("Segunda: Um menino resolve fazer uma pegadinha com sua mae e troca o sal dos saleiros por acucar, mas deixa o sal em um deles, em cada um deles ha uma mensagem, somente uma e verdadeira\n1-Este e o sal\n2-Este e o sal\n3-Este e o acucar\n4-O sal nao esta no 2\nQual saleiro ela deve escolher?\n");
                scanf("%d",&escolha);
                if(escolha==1){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==2){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==3){
                    resposta_correta = 1;
                    break;
                }
                else if(escolha==4){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else printf("opcao invalida!\n");
            }

            if(resposta_correta){
                printf("O ogro fica muito animado e gargalhando diz:\n\t- HAHAHAHA faz tempo que alguem nao consegue acertar essa, ate que voce nao e tao burra... mesmo sendo uma mulher\n");
            }
            else{
                printf("O ogro fica muito decepcionado, e com odio em sua voz diz:\n\t- Realmente, voce e mais burra que uma pedra mesmo! Vou te fazer uma ultima pergunta apenas por piedade porque pra mim voce nem deveria ser aventureira...\n");
            }
            printf("Martha se irrita, mas prefere nao ligar muito pois prefere dar continuidade a missao, perguntando logo qual a proxima charada.\n");

            while(1){   
                printf("Terceira: Um homem estava em casa, seu cachorro estava no jardim e sua esposa gritando no quintal.\nQuem ele deixa entrar primeiro?\n1-Esposa\n2-Cachorro\n3-Visita na porta\n");
                scanf("%d",&escolha);
                if(escolha==1){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==2){
                    resposta_correta = 1;
                    break;
                }
                else if(escolha==3){
                    printf("Escolha errada!\n");
                    resposta_correta = 0;
                    break;
                }
                else printf("opcao invalida!\n");
            }

            if(resposta_correta){
                printf("O ogro comeca a rir e virando as costas diz:\n\t- Pode passar pela ponte, HAHAHA eu posso odiar voces aventureiros mas voce pelo menos sabe o lugar de uma mulher... por que voce nao decide largar essa vida e arranjar um marido, cuidar de casa? Essa sim e a vida que voce deveria ter!\n");
            }
            else{
                printf("O ogro fica completamente enfurecido, vira suas costas para Martha e com as maos na cabeca grita:\n\t- NAO TEM COMO MESMO, VOCES MULHERES SAO TODAS BURRAS NAO E MESMO? COMO QUE PODE SEREM TAO INUTEIS EM TUDO\n");
            }
            while(1){
                printf("Martha observa aquilo com muita raiva do ogro, e percebe que ele esta em uma posicao muito vulneravel com suas costas desprotegidas.\nEla segura o cabo de sua espada e calcula um ataque ao ogro\nO que ela deveria fazer?\n1-Atacar o ogro\n2-Aproveitar a oportunidade e passar logo pela ponte\n");
                scanf("%d", &escolha);

                if(escolha==1){
                    printf("Martha saca sua espada num movimento veloz e pula acertando um golpe certeiro no pescoco do ogro");
                    break;
                }
                else if(escolha==2){
                    break;
                }
                else printf("opcao invalida!\n");
            }

            printf("Enquanto Martha respondia as charadas do ogro, Kayo saiu correndo ponte abaixo e seguiu pelas margens do rio, onde encontrou uma cabana de pescador.\nO pescador, que estava ao lado de um monte de trigo, um burro amarrado e um tigre preso em uma jaula, ao avistar o aventureiro pediu ajuda:\n");
            printf("\t- Me ajude! eu preciso entregar essas mercadorias do outro lado do rio, mas so consigo carregar uma coisa por vez na minha canoa\n");
            printf("Kayo entao responde:\n\t- Claro! sou um aventureiro certificado, mas se eu te ajudar voce precisa me levar pro outro lado do rio tambem!\n");
            printf("O pescador concorda, mas diz 'Tudo bem, mas tem um problema:'\n");

            while(1){
                printf("A minha canoa so tem espaco para levar uma coisa de cada vez, e:\n- O trigo nao pode ficar junto do burro, ou ele vai comer tudo!\n- O burro tambem nao pode ficar junto do tigre, ou o tigre o comeria na hora!\nO que eu preciso levar primeiro pro outro lado do rio pra que nenhum acidente aconteca?\n");
                printf("Escolha:\n1-Levar o tigre\n2-Levar o burro\n3-Levar o trigo\n");
                scanf("%d",&escolha);
                if(escolha==1){
                    printf("Escolha errada!\n"); //O burro comeu o trigo
                    resposta_correta = 0;
                    break;
                }
                else if(escolha==2){
                    printf("O pescador leva o burro e volta, em seguida lhe pergunta: 'E agora?'\nEscolha:\n1-Levar o tigre e trazer o burro\n2-Levar o trigo e trazer o burro\n3-Apenas levar o trigo\n4-Apenas levar o tigre\n");
                    scanf("%d",&escolha);
                    if(escolha==1){
                        printf("Apos voltar, ele pergunta:'O que devo fazer?\n1-Levar o burro \n2-Levar o trigo\n");
                        scanf("%d",&escolha);
                        if(escolha==1){
                            printf("Escolha errada!\n");
                            resposta_correta = 0;
                            break;
                        }
                        else if(escolha==2){
                            printf("O pescador volta e percebe que agora so precisa levar o burro. Agradecido ele diz ao aventureiro: 'Deu certo, monte no burro e eu os levarei para o outro lado'\n");
                            break;
                        }
                        else printf("Opcao invalida!\n");
                    }
                    
                    else if(escolha==2){
                        printf("Apos voltar, ele pergunta:'O que devo fazer?\n1-Levar o burro \n2-Levar o tigre\n");
                        scanf("%d",&escolha);
                        if(escolha==1){
                            printf("Escolha errada!\n");
                            resposta_correta = 0;
                            break;
                        }
                        else if(escolha==2){
                            printf("O pescador volta e percebe que agora so precisa levar o burro. Agradecido ele diz ao aventureiro: 'Deu certo, monte no burro e eu os levarei para o outro lado'\n");
                            resposta_correta = 1;
                            break;
                        }
                        else printf("Opcao invalida!\n");
                    }
                    else if(escolha==3||escolha==4){
                            printf("Escolha errada!\n");
                            resposta_correta = 0;
                            break;
                    }
                    else printf("Opcao invalida!\n");
                }
                else if(escolha==3){
                    printf("Escolha errada!\n"); //O tigre comeu o burro
                    resposta_correta = 0;
                    break;
                }
                else printf("opcao invalida!\n");
            }
            //verifica se a resposta final do puzzle não foi correta para penalizar o jogador
            if(!resposta_correta){
                printf("O pescador muito irritado diz para Kayo:\n\t- Voce nao faz ideia do prejuizo que voce acabou de me dar e eu QUERO uma compensacao agora mesmo, ou vou te denunciar pra sua guilda!\n");
                printf("O aventureiro totalmente sem jeito percebe que o unico objeto de valor que possui e sua espada, e com medo de perder seu cargo e profissao a entrega como pagamento para o pescador, que apesar de relutante aceita e concorda em atravessa-lo apesar de seu prejuizo.\n");
                espada = 0;
            }

            while(1){
                printf("Ao proseguir pela floresta, Kayo se reencontra com Martha na frente de um grande castelo que parece abandonado ha anos, eles enconstram um recado escrito na parede e tres portas.\nNo recado dizia: 'Fujam, na primeira porta ha uma bruxa cruel, na segunda porta ha um leao e na terceira ha uma sala cheia de armadilhas.\nESCOLHA:\n1-Primeira porta\n2-Segunda porta\n3-Terceira porta\n");
                scanf("%d",&escolha);
                    if(escolha==1){
                        printf("Escolha errada\n");
                        break;
                    }
                    else if(escolha==2){
                        break;
                    }
                    else if(escolha==3){
                        printf("Escolha errada!\n");
                        break;
                    }
                    else printf("opcao invalida!\n");    
            }
            while(1){
            printf("Eles passam pelo cadaver do leao e entram na proxima sala, nela tem duas Medusas, cada uma na frente de uma porta, das quais uma leva para a proxima sala e a outra leva para uma sala de armadilhas.\nVoce sabe que um dos guardas sempre mente e o outro sempre fala a verdade, mas voce so pode fazer uma pergunta para um deles, o que você perguntaria?\n1-A outra diria que essa porta leva a proxima sala?\n2-Voce entraria sem medo em qual das portas?\n3-A mula sem cabeca foi voce que arrancou?\n");
            scanf("%d",&escolha);
                if(escolha==1){
                    printf("A Medusa diz que a outra diria que a porta da direita e a correta, voces passam pela da esquerda sem dizer uma palavra\n");
                    break;
                }
                else if(escolha==2){
                    printf("Escolha errada!\n");
                    break;
                }
                else if(escolha==3){
                    printf("Escolha errada\n");
                    break;
                }
                else printf("opcao invalida!\n");
            }
            while (1){
                printf("Assim que os aventureiros chegam a proxima sala eles encontram uma porta com um cadeado com uma senha de tres digitos e varias instrucoes nas paredes.\n");
                printf("682- um numero esta correto e no lugar certo\n");
                printf("614- um numero esta correto mas no lugar errado\n");
                printf("206- dois numeros estao corretos mas nas posicoes erradas\n");
                printf("738- nada esta correto\n");
                printf("780- um numero esta correto mas no lugar errado\n");
                scanf("%d",&escolha);

                if (escolha<=999){
                    if(escolha==42){
                        printf("O cadeado se abre e os aventureiros conseguem prosseguir\n");
                        resposta_correta=1;
                        break;
                    }
                    else{
                        printf("A porta desaparece!");
                        resposta_correta=0;
                        return 0;
                    }

                }
                else printf("opcao invalida!\n");
                if (resposta_correta)
                {
                    //luta com o dragao
                }
                else break;
                
            }
            
        }

        else printf("opcao invalida!\n");
    }

    return 0;
}