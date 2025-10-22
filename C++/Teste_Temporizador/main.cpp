#include <iostream>
#include <chrono> // Biblioteca para medir o tempo

int main() {
    // Usar std::chrono para obter o tempo atual
    auto inicio = std::chrono::high_resolution_clock::now();

    // Exemplo de um ciclo que queremos medir
    for (int i = 0; i < 100000000; i++) {
        // Simula��o de uma tarefa dentro do loop
        int x = i * 2;
            }

    // Oter o tempo ap�s a execu��o do ciclo
    auto fim = std::chrono::high_resolution_clock::now();

    // Calcular a dura��o do ciclo
    std::chrono::duration<double> duracao = fim - inicio;

    // Mostrar a dura��o em segundos
    std::cout << "Tempo de execu��o do ciclo: " << duracao.count() << " segundos" << std::endl;

    return 0;
}
