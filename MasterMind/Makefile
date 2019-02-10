Mastermind: main.o menu.o lecture_saissie.o combinaison_secret.o verification_lettre.o mastermind.o sauvegarde.o 
	gcc -o Mastermind main.o menu.o lecture_saissie.o combinaison_secret.o verification_lettre.o mastermind.o sauvegarde.o
main.o: main.c mastermind.h
	gcc -c -Wall main.c
menu.o: menu.c menu.h
	gcc -c -Wall menu.c
lecture_saissie: lecture_saissie.c lecture_saissie.h 
	gcc -c -Wall lecture_saissie.c
combinaison_secret.o: combinaison_secret.c combinaison_secret.h
	gcc -c -Wall combinaison_secret.c 
verification_lettre.o: verification_lettre.c verification_lettre.h
	gcc -c -Wall verification_lettre.c 
mastermind.o: mastermind.c mastermind.h verification_lettre.h lecture_saissie.h combinaison_secret.h sauvegarde.h menu.h
	gcc -c -Wall mastermind.c
sauvegarde.o: sauvegarde.c sauvegarde.h verification_lettre.h
	gcc -c -Wall sauvegarde.c
