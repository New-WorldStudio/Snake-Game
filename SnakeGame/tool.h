#pragma once
#include<windows.h>
#include"Map.h"
using namespace SnakeGame;
//�ƶ���굽xy
void gotoxy(int x, int y);
//�ж�ʧ��
void Defeat(std::vector<Snake::Point>* Snakes);
