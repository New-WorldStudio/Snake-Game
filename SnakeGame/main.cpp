#include <iostream>
#include "Map.h"
#include<Windows.h>
int main()
{
	// ��ʼ����ͼ
	SnakeGame::Map map(25, 60);
	//������
	SnakeGame::Snake snake;
	//��ʼ����
	snake.InitSnake();
	std::vector<SnakeGame::Snake::Point>* SNAKES = &snake.Snakes;
	//��ʾ��ͼ
	map.ShowMap();
	// ��Ϸ��ѭ��
	while (true)
	{
		//���µ�ͼ
		map.UpMap(SNAKES);
	}
	// �ͷ��ڴ�
	return 0;
}