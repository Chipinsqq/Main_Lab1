#include <iostream>
#include <set>
#include <string> 
#include <Windows.h>

using namespace std;
int main() {
    // ������祭�� ���᪮�� �몠
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    // ���᮪ ������
    string text;
    set<string> letters = { "a", "e", "u", "o", "i", "y", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�",
                                "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "A", "E", "U", "O", "I", "Y" };
    // ���� ��ப� 
    cout << "������ ⥪��: " << endl;
    getline(cin, text);
    // ���� ���᪠ ������
    int count = 0;
    for (auto c : text) {
        if (letters.count(string(1, c)) > 0) {
            count++;
        }
    }
    // �뢮� ������⢠ ������
    cout << "������⢮ ������ �㪢: " << count << endl;

    return 0;
}
