// --- CARTA 1 ---
printf("--- Cadastro da Carta 1 ---\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Código da Carta (ex: A01):\n ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]s", cidade1); // O espaço antes de % garante que ignore o 'Enter' anterior

printf("População: ");
scanf("%d", &populacao1);

printf("Área (km²): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Pontos Turísticos: ");
scanf("%d", &pontos1);

// --- CARTA 2 (Ex: Belo Horizonte) ---
printf("\n--- Cadastro da Carta 2 ---\n");
printf("Estado (A-H):\n ");
scanf(" %c", &estado2);

printf("Código da Carta: ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]s", cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (km²): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Pontos Turísticos: ");
scanf("%d", &pontos2);

// --- EXIBIÇÃO ---
printf("\n==============================\n");
printf("CARTA 1:\n");
printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos: %d\n", 
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);

printf("\n------------------------------\n");

printf("CARTA 2:\n");
printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos: %d\n", 
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
printf("==============================\n");

return 0;
