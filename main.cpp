#include <windows.h>
#include <stdio.h>

int main() {
    HANDLE hProcess;
    DWORD dwExitCode;
    BOOL bResult;

    // Créer un processus pour exécuter une commande
    bResult = CreateProcess(NULL, "C:\\Windows\\System32\\cmd.exe", NULL, NULL, FALSE, 0, NULL, NULL, NULL, LPPROCESS_INFORMATION(&hProcess));

    // Vérifier si le processus a été créé avec succès
    if (bResult == FALSE) {
        printf("Erreur lors de la création du processus\n");
        return 1;
    }

    // Attendre la fin du processus
    WaitForSingleObject(hProcess, INFINITE);
    GetExitCodeProcess(hProcess, &dwExitCode);
    printf("Le processus a terminé avec le code de sortie %d\n", dwExitCode);

    // Fermer le handle du processus
    CloseHandle(hProcess);

    return 0;
}

// La programmation orientée objet (POO) en C++ ?
// Les templates et les méta-programmes en C++ ?
// La gestion de la mémoire et les pointeurs en C++ ?
// Les exceptions et la gestion des erreurs en C++ ?
// Les performances et l'optimisation des programmes en C++ ?
// Les bibliothèques et les frameworks populaires en C++ (par exemple, STL, Boost, Qt) ?