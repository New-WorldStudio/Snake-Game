#include"tool.h"
//�ƶ����λ��
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//�ж�ʧ��
void Defeat(std::vector<Snake::Point>* Snakes)
{
    for (size_t i = 1; i < Snakes->size(); ++i) {
        const auto& point = (*Snakes)[i];
        if ((*Snakes)[0].x== (*Snakes)[i].x&& (*Snakes)[0].y== (*Snakes)[i].y)
        {
            std::cout << "��Ϸʧ�ܣ�" << std::endl;
            exit(0);
        }
        if ((*Snakes)[0].x == 0 || (*Snakes)[0].x == 59|| (*Snakes)[0].y == 0 || (*Snakes)[0].y == 24)
        {
            std::cout << "��Ϸʧ�ܣ�" << std::endl;
            exit(0);
        }
    }
}
