#include"beans.h"
using namespace SnakeGame;
//���ɶ���
void Beans::InitBeans(std::vector<Snake::Point>* Snakes)
{
    x = 0;
    y = 0;

    bool conflict = false;
    do {
        conflict = false;
        this->x = rand() % 58 + 1;
        this->y = rand() % 23 + 1;

        // ������ɵ�λ���Ƿ������������ͻ
        for (auto& snakePart : *Snakes) {
            if (this->x == snakePart.x && this->y == snakePart.y) {
                conflict = true;
                break;
            }
        }
    } while (conflict);
}
//�ж϶����Ƿ����
bool Beans::EatBeans(std::vector<Snake::Point>* Snakes)
{
    if (this->x == (*Snakes)[0].x && this->y == (*Snakes)[0].y)
    {
        InitBeans(Snakes);
        return true;
    }
    //�������û���ԣ��ͷ���false
    return false;
}
int Beans::getX() { return this->x; }

int Beans::getY() { return this->y; }