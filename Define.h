#pragma once
#include <iostream>
#include <string.h>
#include "Node.h"

#define MENU_INDEX_PUSH		1	// 노드 추가 (마지막)
#define MENU_INDEX_POP		2	// 마지막 노드 제거
#define	MENU_INDEX_PRINT	3	// 전체 노드 출력
#define	MENU_INDEX_EXIT		4	// 프로그램 종료 (메모리해제)

using namespace std;

void Push();					// 가장 마지막 노드에 temp노드추가
void Pop();						// 가장 마지막 노드를 제거
void Print();					// 전체 노드 출력
void DestroyAll();				// 전체 노드 삭제

Node*	head = new Node;
int		listLength = 0;