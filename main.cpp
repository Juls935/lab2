#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // ������������� ���������� ��������� �����

    for (int fileNum = 1; fileNum <= 3; ++fileNum) {
        char filename[20];
        sprintf(filename, "file%d.txt", fileNum); // ��������� ��� �����
        std::ofstream outFile(filename);

        if (!outFile) {
            std::cerr << "������ ��� �������� �����: " << filename << std::endl;
            continue;
        }

        for (int i = 0; i < 10; ++i) {
            int randomNumber = 1 + std::rand() % 10; // ��������� ����� �� 1 �� 10
            outFile << randomNumber;
            if (i < 9) {
                outFile << " ";
            }
        }

        outFile.close();
        std::cout << "���� " << filename << " ������� ������." << std::endl;
    }

    return 0;
}
