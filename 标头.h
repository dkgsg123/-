#pragma once
#include<iostream>
using namespace std;

// ͼ���ڽӾ�������
#define MAXV 50
#define INF 32767

typedef struct
{
	int no; // the sequence of vertex
}vertexType;

typedef struct
{
	int edge[MAXV][MAXV];
	int n; // number of vertex
	int e; // number of edge
}matGraph;



// ͼ���ڽӱ�洢

