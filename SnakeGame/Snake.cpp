#include "Snake.h"
using namespace SnakeGame;
//��ʼ����
void Snake::InitSnake()
{
	this->Snakes.push_back({10,10});
    this->Snakes.push_back({ 10,11 });
}
//����ߵķ���
void Snake::gitDirection()
{
	if (_kbhit())
	{
		this->Direction = _getch();
		switch (this->Direction)
		{
		case'W':
		case'w':
			this->Direction = 'W';
			break;
		case'A':
		case'a':
			this->Direction = 'A';
			break;
		case'S':
		case's':
			this->Direction = 'S';
			break;
		case'D':
		case'd':
			this->Direction = 'D';
			break;
		default:
			break;
		}
	}
}
//���ݷ����ƶ���
void Snake::move() {
    switch (this->Direction) {
    case 'W':
    case 'w':
        if (this->Snakes.size() > 1) {
            this->Snakes.insert(this->Snakes.begin(), { this->Snakes[0].x, this->Snakes[0].y - 1 });
            if (this->grow == false)
            {
                this->Snakes.pop_back();
            }   
        }
        break;
    case 'A':
    case 'a':
        if (this->Snakes.size() > 1) {
            this->Snakes.insert(this->Snakes.begin(), { this->Snakes[0].x - 1, this->Snakes[0].y });
            if (this->grow == false)
            {
                this->Snakes.pop_back();
            }
        }
        break;
    case 'S':
    case 's':
        if (this->Snakes.size() > 1) {
            this->Snakes.insert(this->Snakes.begin(), { this->Snakes[0].x, this->Snakes[0].y + 1 });
            if (this->grow == false)
            {
                this->Snakes.pop_back();
            }
        }
        break;
    case 'D':
    case 'd':
        if (this->Snakes.size() > 1) {
            this->Snakes.insert(this->Snakes.begin(), { this->Snakes[0].x + 1, this->Snakes[0].y });
            if (this->grow == false)
            {
                this->Snakes.pop_back();
            }
        }
        break;
    default:
        break;
    }
}
