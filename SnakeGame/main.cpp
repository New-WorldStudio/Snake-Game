#include <iostream>
#include "Map.h"
#include<Windows.h>
#include"beans.h"
#include"tool.h"
int main()
{
	// ��ʼ����ͼ
	SnakeGame::Map map(25, 60);
	//��������
	SnakeGame::Beans beans;
	//������
	SnakeGame::Snake snake;
	//��ʼ����
	snake.InitSnake();
	//�����ߵ���������
	std::vector<SnakeGame::Snake::Point>* SNAKES = &snake.Snakes;
	//��ʾ��ͼ
	map.ShowMap();
	//���ɵ�һ������
	beans.InitBeans(SNAKES);
	// ��Ϸ��ѭ��
	while (true) 
	{
		//�ж��Ƿ�ʧ��
		Defeat(SNAKES);
		// ���·���
		snake.gitDirection();
		// �ƶ���
		snake.move();
		// ���µ�ͼ
		map.UpMap(SNAKES,beans.x,beans.y);
		//�ж϶����Ƿ񱻳Ե�
		snake.grow = beans.EatBeans(SNAKES);
		// ��ͣһ��ʱ�䣬���ߵ��ƶ��ɼ�
		Sleep(rand()%300+5); 
	}

	return 0;
}