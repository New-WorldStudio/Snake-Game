#include <iostream>
#include "Map.h"
#include<Windows.h>
#include"beans.h"
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
		// ���·���
		snake.gitDirection();
		
		// �ƶ���
		snake.move();
		// ���µ�ͼ
		map.UpMap(SNAKES,beans.x,beans.y);
		beans.EatBeans(SNAKES);
		// ��ͣһ��ʱ�䣬���ߵ��ƶ��ɼ�
		Sleep(150); // ��ͣ100����
	}

	return 0;
}