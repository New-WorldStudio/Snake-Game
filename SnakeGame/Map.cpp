#include "Map.h"

using namespace SnakeGame;

/**
*	cols �У� rows ��
*/
Map::Map(int cols,int rows) : rows(rows),cols(cols)
{
    map = new char* [cols];
    for (int i = 0; i < cols; ++i)
    {
        map[i] = new char[rows];
        for (int j = 0; j < rows; ++j)
        {
            // ����������ǽ�ڣ��м�����Ϊ�ո�
            if (i == 0 || i == cols - 1 || j == 0 || j == rows - 1) 
            {
                map[i][j] = '#';
            }
            else 
            {
                map[i][j] = ' ';
            }
        }
    }
}

/**
*   �ͷŵ�ͼ�ڴ�
*/
Map::~Map()
{
    for (int i = 0; i < cols; i++)
    {
        delete[] map[i];
    }
    delete[] map;
}

/**
*   ��һ�γ�ʼ����ӡ��ͼ
*/
void Map::initializationMap()
{
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << map[i][j] << " ";
        }
        std::cout << "\n";
    }
}

/**
*   �÷�����ȡ��ͼԪ��
*   ������colsΪÿһ�У�rowsΪÿһ��
*/
char Map::getMapElement(int cols, int rows)
{
    return map[cols][rows];
}

/**
*   �÷������õ�ͼԪ��
*   ������colsΪÿһ�У�rowsΪÿһ��
*/
void Map::setMapElement(int cols, int rows,char element)
{
    map[cols][rows] = element;
}


void Map::update()
{
	
}

