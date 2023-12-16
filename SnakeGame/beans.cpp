#include"beans.h"
using namespace SnakeGame;
//生成豆子
void Beans::InitBeans(std::vector<Snake::Point>* Snakes)
{
    x = 0;
    y = 0;

    bool conflict = false;
    do {
        conflict = false;
        this->x = rand() % 58 + 1;
        this->y = rand() % 23 + 1;

        // 检查生成的位置是否与蛇身坐标冲突
        for (auto& snakePart : *Snakes) {
            if (this->x == snakePart.x && this->y == snakePart.y) {
                conflict = true;
                break;
            }
        }
    } while (conflict);
}
//判断豆子是否噶掉
bool Beans::EatBeans(std::vector<Snake::Point>* Snakes)
{
    if (this->x == (*Snakes)[0].x && this->y == (*Snakes)[0].y)
    {
        InitBeans(Snakes);
        return true;
    }
    //如果豆子没被吃，就返回false
    return false;
}
int Beans::getX() { return this->x; }

int Beans::getY() { return this->y; }