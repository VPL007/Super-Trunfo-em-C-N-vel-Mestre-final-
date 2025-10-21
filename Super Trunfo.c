#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
//-------------------------Váriáveis do estado de São Paulo-------------------------
    char nome_estado_sp [30] = "São Paulo";

        // Variáveis da cidade (São Paulo)
        int populacao_sp1 = 12325000;
        int pontos_turisticos_sp1 = 50;
        float area_sp1 = 1521.0;
        float pib_sp1 = 699.0;
        char codigo_carta_sp1 [6] = "A01";
        char nome_carta_sp1 [30] = "São Paulo";
        // Variaveis calculadas
        float densidade_pop_sp1 = populacao_sp1 / area_sp1;
        float pib_per_capita_sp1 = (pib_sp1 * 1000000000) / populacao_sp1;
        float inverso_densidade_sp1 = area_sp1 / populacao_sp1;
        float super_poder_sp1 = 
                            (populacao_sp1 / 1000000) +
                            (area_sp1 / 1000) +
                            (pib_sp1) +
                            (pontos_turisticos_sp1) + 
                            (pib_per_capita_sp1 / 10000) +
                            (inverso_densidade_sp1 * 1000);


        // Variáveis da cidade (Campinas)
        int populacao_sp2 = 1220000;
        int pontos_turisticos_sp2 = 10;
        float area_sp2 = 801.0;
        float pib_sp2 = 75.0;
        char codigo_carta_sp2 [6] = "A02";
        char nome_carta_sp2 [30] = "Campinas";   
        // Variáveis calculadas
        float densidade_pop_sp2 = populacao_sp2 / area_sp2;
        float pib_per_capita_sp2 = (pib_sp2 * 1000000000.0) / populacao_sp2;
        float inverso_densidade_sp2 = area_sp2 / populacao_sp2;
        float super_poder_sp2 = 
                            (populacao_sp2 / 1000000.0) +
                            (area_sp2 / 1000.0) +
                            (pib_sp2) +
                            (pontos_turisticos_sp2) + 
                            (pib_per_capita_sp2 / 10000.0) +
                            (inverso_densidade_sp2 * 1000.0);  

        // Variáveis da cidade (Santos)
        int populacao_sp3 = 430000;
        int pontos_turisticos_sp3 = 12;
        float area_sp3 = 281.0;
        float pib_sp3 = 28.0;
        char codigo_carta_sp3 [6] = "A03";
        char nome_carta_sp3 [30] = "Santos";  
        // Variáveis calculadas
        float densidade_pop_sp3 = populacao_sp3 / area_sp3;
        float pib_per_capita_sp3 = (pib_sp3 * 1000000000.0) / populacao_sp3;
        float inverso_densidade_sp3 = area_sp3 / populacao_sp3;
        float super_poder_sp3 = 
                            (populacao_sp3 / 1000000.0) +
                            (area_sp3 / 1000.0) +
                            (pib_sp3) +
                            (pontos_turisticos_sp3) + 
                            (pib_per_capita_sp3 / 10000.0) +
                            (inverso_densidade_sp3 * 1000.0);

        // Variáveis da cidade (Ribeirão Preto)
        int populacao_sp4 = 720000;
        int pontos_turisticos_sp4 = 8;
        float area_sp4 = 651.0;
        float pib_sp4 = 44.0;
        char codigo_carta_sp4 [6] = "A04";
        char nome_carta_sp4 [30] = "Ribeirao Preto";  
        // Variáveis calculadas
        float densidade_pop_sp4 = populacao_sp4 / area_sp4;
        float pib_per_capita_sp4 = (pib_sp4 * 1000000000.0) / populacao_sp4;
        float inverso_densidade_sp4 = area_sp4 / populacao_sp4;
        float super_poder_sp4 = 
                            (populacao_sp4 / 1000000.0) +
                            (area_sp4 / 1000.0) +
                            (pib_sp4) +
                            (pontos_turisticos_sp4) + 
                            (pib_per_capita_sp4 / 10000.0) +
                            (inverso_densidade_sp4 * 1000.0);

//-------------------------Variáveis do estado do Rio de Janeiro-------------------------
    char nome_estado_rj [30] = "Rio de Janeiro";
    
        //Variáveis da cidade (Rio de Janeiro)
        int populacao_rj1 = 6748000;
        int pontos_turisticos_rj1 = 30;
        float area_rj1 = 1200.0;
        float pib_rj1 = 300.0;
        char codigo_carta_rj1[6] = "B01";
        char nome_carta_rj1[30] = "Rio de Janeiro";
        // Variáveis calculadas
        float densidade_pop_rj1 = populacao_rj1 / area_rj1;
        float pib_per_capita_rj1 = (pib_rj1 * 1000000000.0) / populacao_rj1;
        float inverso_densidade_rj1 = area_rj1 / populacao_rj1;
        float super_poder_rj1 =
                            (populacao_rj1 / 1000000.0) +
                            (area_rj1 / 1000.0) +
                            (pib_rj1) +
                            (pontos_turisticos_rj1) +
                            (pib_per_capita_rj1 / 10000.0) +
                            (inverso_densidade_rj1 * 1000.0);

        //Variáveis da cidade (Niterói)
        int populacao_rj2 = 520000;
        int pontos_turisticos_rj2 = 9;
        float area_rj2 = 130.0;
        float pib_rj2 = 30.0;
        char codigo_carta_rj2[6] = "B02";
        char nome_carta_rj2[30] = "Niteroi";
        // Variáveis calculadas
        float densidade_pop_rj2 = populacao_rj2 / area_rj2;
        float pib_per_capita_rj2 = (pib_rj2 * 1000000000.0) / populacao_rj2;
        float inverso_densidade_rj2 = area_rj2 / populacao_rj2;
        float super_poder_rj2 =
                            (populacao_rj2 / 1000000.0) +
                            (area_rj2 / 1000.0) +
                            (pib_rj2) +
                            (pontos_turisticos_rj2) +
                            (pib_per_capita_rj2 / 10000.0) +
                            (inverso_densidade_rj2 * 1000.0);

        //Variáveis da cidade (Petrópolis)
        int populacao_rj3 = 310000;
        int pontos_turisticos_rj3 = 10;
        float area_rj3 = 795.0;
        float pib_rj3 = 16.0;
        char codigo_carta_rj3[6] = "B03";
        char nome_carta_rj3[30] = "Petropolis";
        // Variáveis calculadas
        float densidade_pop_rj3 = populacao_rj3 / area_rj3;
        float pib_per_capita_rj3 = (pib_rj3 * 1000000000.0) / populacao_rj3;
        float inverso_densidade_rj3 = area_rj3 / populacao_rj3;
        float super_poder_rj3 =
                            (populacao_rj3 / 1000000.0) +
                            (area_rj3 / 1000.0) +
                            (pib_rj3) +
                            (pontos_turisticos_rj3) +
                            (pib_per_capita_rj3 / 10000.0) +
                            (inverso_densidade_rj3 * 1000.0);

        //Variáveis da cidade (Angra dos Reis)
        int populacao_rj4 = 210000;
        int pontos_turisticos_rj4 = 8;
        float area_rj4 = 825.0;
        float pib_rj4 = 14.0;
        char codigo_carta_rj4[6] = "B04";
        char nome_carta_rj4[30] = "Angra dos Reis";
        // Variáveis calculadas
        float densidade_pop_rj4 = populacao_rj4 / area_rj4;
        float pib_per_capita_rj4 = (pib_rj4 * 1000000000.0) / populacao_rj4;
        float inverso_densidade_rj4 = area_rj4 / populacao_rj4;
        float super_poder_rj4 =
                            (populacao_rj4 / 1000000.0) +
                            (area_rj4 / 1000.0) +
                            (pib_rj4) +
                            (pontos_turisticos_rj4) +
                            (pib_per_capita_rj4 / 10000.0) +
                            (inverso_densidade_rj4 * 1000.0);

//-------------------------Variáveis do estado do Paraná-------------------------
    char nome_estado_pr [30] = "Paraná";

        //Variáveis da cidade (Curitiba)
        int populacao_pr1 = 1950000;
        int pontos_turisticos_pr1 = 15;
        float area_pr1 = 434.0;
        float pib_pr1 = 125.0;
        char codigo_carta_pr1[6] = "C01";
        char nome_carta_pr1[30] = "Curitiba";
        // Variáveis calculadas
        float densidade_pop_pr1 = populacao_pr1 / area_pr1;
        float pib_per_capita_pr1 = (pib_pr1 * 1000000000.0) / populacao_pr1;
        float inverso_densidade_pr1 = area_pr1 / populacao_pr1;
        float super_poder_pr1 =
                            (populacao_pr1 / 1000000.0) +
                            (area_pr1 / 1000.0) +
                            (pib_pr1) +
                            (pontos_turisticos_pr1) +
                            (pib_per_capita_pr1 / 10000.0) +
                            (inverso_densidade_pr1 * 1000.0);

        //Variáveis da cidade (Londrina)
        int populacao_pr2 = 585000;
        int pontos_turisticos_pr2 = 7;
        float area_pr2 = 1653.0;
        float pib_pr2 = 25.0;
        char codigo_carta_pr2[6] = "C02";
        char nome_carta_pr2[30] = "Londrina";
        // Variáveis calculadas
        float densidade_pop_pr2 = populacao_pr2 / area_pr2;
        float pib_per_capita_pr2 = (pib_pr2 * 1000000000.0) / populacao_pr2;
        float inverso_densidade_pr2 = area_pr2 / populacao_pr2;
        float super_poder_pr2 =
                            (populacao_pr2 / 1000000.0) +
                            (area_pr2 / 1000.0) +
                            (pib_pr2) +
                            (pontos_turisticos_pr2) +
                            (pib_per_capita_pr2 / 10000.0) +
                            (inverso_densidade_pr2 * 1000.0);

        //Variáveis da cidade (Foz do Iguaçu)
        int populacao_pr3 = 260000;
        int pontos_turisticos_pr3 = 12;
        float area_pr3 = 617.0;
        float pib_pr3 = 15.0;
        char codigo_carta_pr3[6] = "C03";
        char nome_carta_pr3[30] = "Foz do Iguacu";
        // Variáveis calculadas
        float densidade_pop_pr3 = populacao_pr3 / area_pr3;
        float pib_per_capita_pr3 = (pib_pr3 * 1000000000.0) / populacao_pr3;
        float inverso_densidade_pr3 = area_pr3 / populacao_pr3;
        float super_poder_pr3 =
                            (populacao_pr3 / 1000000.0) +
                            (area_pr3 / 1000.0) +
                            (pib_pr3) +
                            (pontos_turisticos_pr3) +
                            (pib_per_capita_pr3 / 10000.0) +
                            (inverso_densidade_pr3 * 1000.0);

        //Variáveis da cidade (Maringá)
        int populacao_pr4 = 440000;
        int pontos_turisticos_pr4 = 8;
        float area_pr4 = 488.0;
        float pib_pr4 = 28.0;
        char codigo_carta_pr4[6] = "C04";
        char nome_carta_pr4[30] = "Maringa";
        // Variáveis calculadas
        float densidade_pop_pr4 = populacao_pr4 / area_pr4;
        float pib_per_capita_pr4 = (pib_pr4 * 1000000000.0) / populacao_pr4;
        float inverso_densidade_pr4 = area_pr4 / populacao_pr4;
        float super_poder_pr4 =
                            (populacao_pr4 / 1000000.0) +
                            (area_pr4 / 1000.0) +
                            (pib_pr4) +
                            (pontos_turisticos_pr4) +
                            (pib_per_capita_pr4 / 10000.0) +
                            (inverso_densidade_pr4 * 1000.0);  

//-------------------------Variáveis do estado de Minas Gerais-------------------------
    char nome_estado_mg[30] = "Minas Gerais";

        // Variáveis da cidade (Belo Horizonte)
        int populacao_mg1 = 2530000;
        int pontos_turisticos_mg1 = 14;
        float area_mg1 = 331.0;
        float pib_mg1 = 120.0;
        char codigo_carta_mg1[6] = "D01";
        char nome_carta_mg1[30] = "Belo Horizonte";
        // Variáveis calculadas
        float densidade_pop_mg1 = populacao_mg1 / area_mg1;
        float pib_per_capita_mg1 = (pib_mg1 * 1000000000.0) / populacao_mg1;
        float inverso_densidade_mg1 = area_mg1 / populacao_mg1;
        float super_poder_mg1 =
                            (populacao_mg1 / 1000000.0) +
                           (area_mg1 / 1000.0) +
                            (pib_mg1) +
                            (pontos_turisticos_mg1) +
                            (pib_per_capita_mg1 / 10000.0) +
                            (inverso_densidade_mg1 * 1000.0);

        // Variáveis da cidade (Uberlândia)
        int populacao_mg2 = 720000;
        int pontos_turisticos_mg2 = 88;
        float area_mg2 = 4115.0;
        float pib_mg2 = 52.0;
        char codigo_carta_mg2[6] = "D02";
        char nome_carta_mg2[30] = "Uberlandia";
        // Variáveis calculadas
        float densidade_pop_mg2 = populacao_mg2 / area_mg2;
        float pib_per_capita_mg2 = (pib_mg2 * 1000000000.0) / populacao_mg2;
        float inverso_densidade_mg2 = area_mg2 / populacao_mg2;
        float super_poder_mg2 =
                            (populacao_mg2 / 1000000.0) +
                            (area_mg2 / 1000.0) +
                            (pib_mg2) +
                            (pontos_turisticos_mg2) +
                            (pib_per_capita_mg2 / 10000.0) +
                        (inverso_densidade_mg2 * 1000.0);

        // Variáveis da cidade (Ouro Preto)
        int populacao_mg3 = 75000;
        int pontos_turisticos_mg3 = 10;
        float area_mg3 = 1245.0;
        float pib_mg3 = 3.0;
        char codigo_carta_mg3[6] = "D03";
        char nome_carta_mg3[30] = "Ouro Preto";
        // Variáveis calculadas
        float densidade_pop_mg3 = populacao_mg3 / area_mg3;
        float pib_per_capita_mg3 = (pib_mg3 * 1000000000.0) / populacao_mg3;
        float inverso_densidade_mg3 = area_mg3 / populacao_mg3;
        float super_poder_mg3 =
                            (populacao_mg3 / 1000000.0) +
                            (area_mg3 / 1000.0) +
                            (pib_mg3) +
                            (pontos_turisticos_mg3) +
                            (pib_per_capita_mg3 / 10000.0) +
                            (inverso_densidade_mg3 * 1000.0);

        // Variáveis da cidade (Juiz de Fora)
        int populacao_mg4 = 580000;
        int pontos_turisticos_mg4 = 7;
        float area_mg4 = 1435.0;
        float pib_mg4 = 26.0;
        char codigo_carta_mg4[6] = "D04";
        char nome_carta_mg4[30] = "Juiz de Fora";
        // Variáveis calculadas
        float densidade_pop_mg4 = populacao_mg4 / area_mg4;
        float pib_per_capita_mg4 = (pib_mg4 * 1000000000.0) / populacao_mg4;
        float inverso_densidade_mg4 = area_mg4 / populacao_mg4;
        float super_poder_mg4 =
                            (populacao_mg4 / 1000000.0) +
                            (area_mg4 / 1000.0) +
                            (pib_mg4) +
                            (pontos_turisticos_mg4) +
                            (pib_per_capita_mg4 / 10000.0) +
                            (inverso_densidade_mg4 * 1000.0);

//-------------------------Variáveis do estado da Bahia-------------------------
    char nome_estado_bh[30] = "Bahia";

        // Variáveis da cidade (Salvador)
        int populacao_bh1 = 2570000;
        int pontos_turisticos_bh1 = 18;
        float area_bh1 = 693.0;
        float pib_bh1 = 110.0;
        char codigo_carta_bh1[6] = "E01";
        char nome_carta_bh1[30] = "Salvador";
        // Variáveis calculadas
        float densidade_pop_bh1 = populacao_bh1 / area_bh1;
        float pib_per_capita_bh1 = (pib_bh1 * 1000000000.0) / populacao_bh1;
        float inverso_densidade_bh1 = area_bh1 / populacao_bh1;
        float super_poder_bh1 =
                            (populacao_bh1 / 1000000.0) +
                            (area_bh1 / 1000.0) +
                            (pib_bh1) +
                            (pontos_turisticos_bh1) +
                            (pib_per_capita_bh1 / 10000.0) +
                            (inverso_densidade_bh1 * 1000.0);

        // Variáveis da cidade (Feira de Santana)
        int populacao_bh2 = 660000;
        int pontos_turisticos_bh2 = 10;
        float area_bh2 = 1414.0;
        float pib_bh2 = 15.0;
        char codigo_carta_bh2[6] = "E02";
        char nome_carta_bh2[30] = "Feira de Santana";
        // Variáveis calculadas
        float densidade_pop_bh2 = populacao_bh2 / area_bh2;
        float pib_per_capita_bh2 = (pib_bh2 * 1000000000.0) / populacao_bh2;
        float inverso_densidade_bh2 = area_bh2 / populacao_bh2;
        float super_poder_bh2 =
                            (populacao_bh2 / 1000000.0) +
                            (area_bh2 / 1000.0) +
                            (pib_bh2) +
                            (pontos_turisticos_bh2) +
                            (pib_per_capita_bh2 / 10000.0) +
                            (inverso_densidade_bh2 * 1000.0);

        // Variáveis da cidade (Vitoria da Conquista)
        int populacao_bh3 = 395000;
        int pontos_turisticos_bh3 = 8;
        float area_bh3 = 3463.0;
        float pib_bh3 = 7.0;
        char codigo_carta_bh3[6] = "E03";
        char nome_carta_bh3[30] = "Vitoria da Conquista";
        // Variáveis calculadas
        float densidade_pop_bh3 = populacao_bh3 / area_bh3;
        float pib_per_capita_bh3 = (pib_bh3 * 1000000000.0) / populacao_bh3;
        float inverso_densidade_bh3 = area_bh3 / populacao_bh3;
        float super_poder_bh3 =
                            (populacao_bh3 / 1000000.0) +
                            (area_bh3 / 1000.0) +
                            (pib_bh3) +
                            (pontos_turisticos_bh3) +
                            (pib_per_capita_bh3 / 10000.0) +
                            (inverso_densidade_bh3 * 1000.0);

        // Variáveis da cidade (Ilheus)
        int populacao_bh4 = 190000;
        int pontos_turisticos_bh4 = 12;
        float area_bh4 = 1590.0;
        float pib_bh4 = 5.0;
        char codigo_carta_bh4[6] = "E04";
        char nome_carta_bh4[30] = "Ilheus";
        // Variáveis calculadas
        float densidade_pop_bh4 = populacao_bh4 / area_bh4;
        float pib_per_capita_bh4 = (pib_bh4 * 1000000000.0) / populacao_bh4;
        float inverso_densidade_bh4 = area_bh4 / populacao_bh4;
        float super_poder_bh4 =
                            (populacao_bh4 / 1000000.0) +
                            (area_bh4 / 1000.0) +
                            (pib_bh4) +
                            (pontos_turisticos_bh4) +
                            (pib_per_capita_bh4 / 10000.0) +
                            (inverso_densidade_bh4 * 1000.0);

//-------------------------Variáveis do estado do Rio Grande do Sul-------------------------
    char nome_estado_rs[30] = "Rio Grande do Sul";

        // Variáveis da cidade (Porto Alegre)
        int populacao_rs1 = 1390000;
        int pontos_turisticos_rs1 = 20;
        float area_rs1 = 496.0;
        float pib_rs1 = 130.0;
        char codigo_carta_rs1[6] = "F01";
        char nome_carta_rs1[30] = "Porto Alegre";
        // Variáveis calculadas
        float densidade_pop_rs1 = populacao_rs1 / area_rs1;
        float pib_per_capita_rs1 = (pib_rs1 * 1000000000.0) / populacao_rs1;
        float inverso_densidade_rs1 = area_rs1 / populacao_rs1;
        float super_poder_rs1 =
                            (populacao_rs1 / 1000000.0) +
                            (area_rs1 / 1000.0) +
                            (pib_rs1) +
                            (pontos_turisticos_rs1) +
                            (pib_per_capita_rs1 / 10000.0) +
                            (inverso_densidade_rs1 * 1000.0);

        // Variáveis da cidade (Caxias do Sul)
        int populacao_rs2 = 480000;
        int pontos_turisticos_rs2 = 9;
        float area_rs2 = 1591.0;
        float pib_rs2 = 45.0;
        char codigo_carta_rs2[6] = "F02";
        char nome_carta_rs2[30] = "Caxias do Sul";
        // Variáveis calculadas
        float densidade_pop_rs2 = populacao_rs2 / area_rs2;
        float pib_per_capita_rs2 = (pib_rs2 * 1000000000.0) / populacao_rs2;
        float inverso_densidade_rs2 = area_rs2 / populacao_rs2;
        float super_poder_rs2 =
                            (populacao_rs2 / 1000000.0) +
                            (area_rs2 / 1000.0) +
                            (pib_rs2) +
                            (pontos_turisticos_rs2) +
                            (pib_per_capita_rs2 / 10000.0) +
                            (inverso_densidade_rs2 * 1000.0);

        // Variáveis da cidade (Pelotas)
        int populacao_rs3 = 330000;
        int pontos_turisticos_rs3 = 7;
        float area_rs3 = 1601.0;
        float pib_rs3 = 10.0;
        char codigo_carta_rs3[6] = "F03";
        char nome_carta_rs3[30] = "Pelotas";
        // Variáveis calculadas
        float densidade_pop_rs3 = populacao_rs3 / area_rs3;
        float pib_per_capita_rs3 = (pib_rs3 * 1000000000.0) / populacao_rs3;
        float inverso_densidade_rs3 = area_rs3 / populacao_rs3;
        float super_poder_rs3 =
                            (populacao_rs3 / 1000000.0) +
                            (area_rs3 / 1000.0) +
                            (pib_rs3) +
                            (pontos_turisticos_rs3) +
                            (pib_per_capita_rs3 / 10000.0) +
                            (inverso_densidade_rs3 * 1000.0);

        // Variáveis da cidade (Novo Hamburgo)
        int populacao_rs4 = 235000;
        int pontos_turisticos_rs4 = 6;
        float area_rs4 = 224.0;
        float pib_rs4 = 8.0;
        char codigo_carta_rs4[6] = "F04";
        char nome_carta_rs4[30] = "Novo Hamburgo";
        // Variáveis calculadas
        float densidade_pop_rs4 = populacao_rs4 / area_rs4;
        float pib_per_capita_rs4 = (pib_rs4 * 1000000000.0) / populacao_rs4;
        float inverso_densidade_rs4 = area_rs4 / populacao_rs4;
        float super_poder_rs4 =
                            (populacao_rs4 / 1000000.0) +
                            (area_rs4 / 1000.0) +
                            (pib_rs4) +
                            (pontos_turisticos_rs4) +
                            (pib_per_capita_rs4 / 10000.0) +
                            (inverso_densidade_rs4 * 1000.0);
    
//-------------------------Variáveis do estado de Pernambuco-------------------------
    char nome_estado_pe[30] = "Pernambuco";

        // Variáveis da cidade (Recife)
        int populacao_pe1 = 1650000;
        int pontos_turisticos_pe1 = 17;
        float area_pe1 = 218.0;
        float pib_pe1 = 100.0;
        char codigo_carta_pe1[6] = "G01";
        char nome_carta_pe1[30] = "Recife";
        // Variáveis calculadas
        float densidade_pop_pe1 = populacao_pe1 / area_pe1;
        float pib_per_capita_pe1 = (pib_pe1 * 1000000000.0) / populacao_pe1;
        float inverso_densidade_pe1 = area_pe1 / populacao_pe1;
        float super_poder_pe1 =
                            (populacao_pe1 / 1000000.0) +
                            (area_pe1 / 1000.0) +
                            (pib_pe1) +
                            (pontos_turisticos_pe1) +
                            (pib_per_capita_pe1 / 10000.0) +
                            (inverso_densidade_pe1 * 1000.0);

        // Variáveis da cidade (Olinda)
        int populacao_pe2 = 420000;
        int pontos_turisticos_pe2 = 11;
        float area_pe2 = 41.0;
        float pib_pe2 = 12.0;
        char codigo_carta_pe2[6] = "G02";
        char nome_carta_pe2[30] = "Olinda";
        // Variáveis calculadas
        float densidade_pop_pe2 = populacao_pe2 / area_pe2;
        float pib_per_capita_pe2 = (pib_pe2 * 1000000000.0) / populacao_pe2;
        float inverso_densidade_pe2 = area_pe2 / populacao_pe2;
        float super_poder_pe2 =
                            (populacao_pe2 / 1000000.0) +
                            (area_pe2 / 1000.0) +
                            (pib_pe2) +
                            (pontos_turisticos_pe2) +
                            (pib_per_capita_pe2 / 10000.0) +
                            (inverso_densidade_pe2 * 1000.0);

        // Variáveis da cidade (Caruaru)
        int populacao_pe3 = 365000;
        int pontos_turisticos_pe3 = 8;
        float area_pe3 = 928.0;
        float pib_pe3 = 9.0;
        char codigo_carta_pe3[6] = "G03";
        char nome_carta_pe3[30] = "Caruaru";
        // Variáveis calculadas
        float densidade_pop_pe3 = populacao_pe3 / area_pe3;
        float pib_per_capita_pe3 = (pib_pe3 * 1000000000.0) / populacao_pe3;
        float inverso_densidade_pe3 = area_pe3 / populacao_pe3;
        float super_poder_pe3 =
                            (populacao_pe3 / 1000000.0) +
                            (area_pe3 / 1000.0) +
                            (pib_pe3) +
                            (pontos_turisticos_pe3) +
                            (pib_per_capita_pe3 / 10000.0) +
                            (inverso_densidade_pe3 * 1000.0);

        // Variáveis da cidade (Petrolina)
        int populacao_pe4 = 355000;
        int pontos_turisticos_pe4 = 6;
        float area_pe4 = 4561.0;
        float pib_pe4 = 8.0;
        char codigo_carta_pe4[6] = "G04";
        char nome_carta_pe4[30] = "Petrolina";
        // Variáveis calculadas
        float densidade_pop_pe4 = populacao_pe4 / area_pe4;
        float pib_per_capita_pe4 = (pib_pe4 * 1000000000.0) / populacao_pe4;
        float inverso_densidade_pe4 = area_pe4 / populacao_pe4;
        float super_poder_pe4 =
                            (populacao_pe4 / 1000000.0) +
                            (area_pe4 / 1000.0) +
                            (pib_pe4) +
                            (pontos_turisticos_pe4) +
                            (pib_per_capita_pe4 / 10000.0) +
                            (inverso_densidade_pe4 * 1000.0);

//-------------------------Variáveis do estado de Goiás-------------------------
    char nome_estado_go[30] = "Goias";

        // Variáveis da cidade (Goiania)
        int populacao_go1 = 1550000;
        int pontos_turisticos_go1 = 12;
        float area_go1 = 739.0;
        float pib_go1 = 40.0;
        char codigo_carta_go1[6] = "H01";
        char nome_carta_go1[30] = "Goiania";
        // Variáveis calculadas
        float densidade_pop_go1 = populacao_go1 / area_go1;
        float pib_per_capita_go1 = (pib_go1 * 1000000000.0) / populacao_go1;
        float inverso_densidade_go1 = area_go1 / populacao_go1;
        float super_poder_go1 =
                            (populacao_go1 / 1000000.0) +
                            (area_go1 / 1000.0) +
                            (pib_go1) +
                            (pontos_turisticos_go1) +
                            (pib_per_capita_go1 / 10000.0) +
                            (inverso_densidade_go1 * 1000.0);

        // Variáveis da cidade (Anapolis)
        int populacao_go2 = 400000;
        int pontos_turisticos_go2 = 7;
        float area_go2 = 918.0;
        float pib_go2 = 20.0;
        char codigo_carta_go2[6] = "H02";
        char nome_carta_go2[30] = "Anapolis";
        // Variáveis calculadas
        float densidade_pop_go2 = populacao_go2 / area_go2;
        float pib_per_capita_go2 = (pib_go2 * 1000000000.0) / populacao_go2;
        float inverso_densidade_go2 = area_go2 / populacao_go2;
        float super_poder_go2 =
                            (populacao_go2 / 1000000.0) +
                            (area_go2 / 1000.0) +
                            (pib_go2) +
                            (pontos_turisticos_go2) +
                            (pib_per_capita_go2 / 10000.0) +
                            (inverso_densidade_go2 * 1000.0);

        // Variáveis da cidade (Aparecida de Goiania)
        int populacao_go3 = 650000;
        int pontos_turisticos_go3 = 5;
        float area_go3 = 477.0;
        float pib_go3 = 18.0;
        char codigo_carta_go3[6] = "H03";
        char nome_carta_go3[30] = "Aparecida de Goiania";
        // Variáveis calculadas
        float densidade_pop_go3 = populacao_go3 / area_go3;
        float pib_per_capita_go3 = (pib_go3 * 1000000000.0) / populacao_go3;
        float inverso_densidade_go3 = area_go3 / populacao_go3;
        float super_poder_go3 =
                            (populacao_go3 / 1000000.0) +
                            (area_go3 / 1000.0) +
                            (pib_go3) +
                            (pontos_turisticos_go3) +
                            (pib_per_capita_go3 / 10000.0) +
                            (inverso_densidade_go3 * 1000.0);

        // Variáveis da cidade (Rio Verde)
        int populacao_go4 = 240000;
        int pontos_turisticos_go4 = 4;
        float area_go4 = 2467.0;
        float pib_go4 = 12.0;
        char codigo_carta_go4[6] = "H04";
        char nome_carta_go4[30] = "Rio Verde";
        // Variáveis calculadas
        float densidade_pop_go4 = populacao_go4 / area_go4;
        float pib_per_capita_go4 = (pib_go4 * 1000000000.0) / populacao_go4;
        float inverso_densidade_go4 = area_go4 / populacao_go4;
        float super_poder_go4 =
                            (populacao_go4 / 1000000.0) +
                            (area_go4 / 1000.0) +
                            (pib_go4) +
                            (pontos_turisticos_go4) +
                            (pib_per_capita_go4 / 10000.0) +
                            (inverso_densidade_go4 * 1000.0);

//-------------------------Fim da declaração de variáveis-------------------------


//-------------------------Iniciar Jogo-------------------------------------------
char opcao;
char carta_jogador;
char escolha_estado;
int sair = 0;

while(1){    
printf("\n==================================================\n");
printf("  BEM VINDO AO SUPER TRUNFO!!! VAMOS COMEÇAR?\n");
printf("====================================================\n");

printf("Menu do jogo:\n");
printf("I. Iniciar Jogo\n");
printf("R. Regras\n");
printf("C. Cartas cadastradas e seus dados\n");
printf("S. Sair\n");

printf("Escolha a sua opção:\n");
scanf(" %c", &opcao);

//--------------------------Jogo-------------------------------------------------------
switch (opcao)

    case 'I': 
    case 'i':






    break;
//-------------------------------------------------------------------------------------

//-------------------------------------Regras------------------------------------------
switch (opcao)  //Pronto
{
    case 'R': 
    case 'r':
        printf("\n");
        printf("O jogo Super Trunfo é muito simples:\n");
        printf("1º Escolha a sua carta.\n");
        printf("2º Escolha o atributo que deseja comparar.\n");
        printf("3º O computador irá escolhar uma carta aleatória para jogar.\n");
        printf("4º Vai aparecer na tela o resultado do jogo (quem venceu ou se deu empate)\n\n");
        printf("OBS: Certifique-se de escolher uma carta válida,\n");
        printf("     em caso de dúvidas, consulte a seção Cartas Cadastradas.");
        printf("\n");
    break;
}
//-----------------------------Cartas Cadastradas--------------------------------------
switch (opcao)
{
    case 'C':
    case 'c':  
    //Início da exibição dos dados das cartas
        switch (escolha_estado)
        {
            while(!sair){
            printf("Cartas cadastradas. Escolha um estado :\n");
            printf("A. São Paulo\n");
            printf("B. Rio de Janeiro\n");
            printf("C. Paraná\n");
            printf("D. Minas Gerais\n");
            printf("E. Bahia\n");
            printf("F. Rio Grandedo Sul\n");
            printf("G. Pernambuco\n");
            printf("H. Goias\n");
            printf("Z. Sair\n");
            scanf("  %c", escolha_estado);

            case 'A':
            case 'a':

            



        }






    printf("Carta 1:\n");
    printf("Estado: %s\n", nome_estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1);
    printf("PIB: R$ %.2f Bilhões de Reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita_1);
    printf("Super Poder: %.2f\n", SuperPoder_1);         



        }
}



}

}