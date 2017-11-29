#include "Define.h"

int main()
{
	// 헤드에 임시 이름 설정 (구분하기 위해서)
	// head->GetStudent()->SetName("나는헤드");

	int menuIndex = 0;
	
	while (menuIndex != MENU_INDEX_EXIT)
	{
		cout << "┌─────────────────────┐" << endl;
		cout << "│　　　　　 메뉴를 선택해주세요　　　　　　│" << endl;
		cout << "│ 1. 노드삽입　　　　　　　　　　　　　　　│" << endl;
		cout << "│ 2. 노드삭제　　　　　　　　　　　　　　　│" << endl;
		cout << "│ 3. 노드출력　　　　　　　　　　　　　　　│" << endl;
		cout << "│ 4. 프로그램종료　　　　　　　　　　　　　│" << endl;
		cout << "└─────────────────────┘" << endl;

		cin >> menuIndex;

		switch (menuIndex)
		{
		case MENU_INDEX_PUSH:	Push();											break;
		case MENU_INDEX_POP:	Pop();											break;
		case MENU_INDEX_PRINT:	Print();										break;
		case MENU_INDEX_EXIT:	cout << "프로그램을 종료합니다." << endl;		break;
		}
	}

	// 존재하는 모든 메모리를 해제합니다.
	DestroyAll();
}

void Push()
{
	Node*	temp = new Node;
	char	name[256];
	int		id;
	int		age;
	
	cout << "이름을 입력해주세요 : ";
	cin >> name;
	cout << "ID를 입력해주세요 : ";
	cin >> id;
	cout << "나이를 입력해주세요 : ";
	cin >> age;

	temp->GetStudent()->SetName(name);
	temp->GetStudent()->SetID(id);
	temp->GetStudent()->SetAge(age);

	// 마지막 노드의 next에 생성한 노드 참조
	Node*	lastNode = head;
	while (lastNode->next)	
		lastNode = lastNode->next;

	lastNode->next = temp;
	listLength++;

	cout << endl << temp->GetStudent()->GetName() << " 노드를 생성했습니다" << endl
		<< "현재 노드 수 : " << listLength << endl;
}

void Pop()
{
	// 예외처리 (head는 제거되지않게)
	if (listLength <= 0)
	{
		// Pop 빠져나오기
		cout << "현재 존재하는 노드가 없습니다" << endl;
		return ;	
	}

	// 마지막 노드 찾기
	Node* temp = head;
	while (temp->next && temp->next != NULL){
		Node* prev = temp;
		temp = temp->next;

		if (temp->next == NULL)
			prev->next = NULL;
	}

	listLength--;

	cout << endl << temp->GetStudent()->GetName() << " 노드를 삭제했습니다" << endl
		<< "현재 노드 수 : " << listLength << endl;

	delete temp;
}

void DestroyAll()
{
	// 모든 메모리를 해제합니다.
	Node* temp = head;
	
	while (temp->next)
	{
		Node* temp2 = temp->next;

		cout << "[" << temp->GetStudent()->GetName() << "] 노드를 삭제했습니다" << endl;
		delete temp;

		temp = temp2;
	}

	cout << "[" << temp->GetStudent()->GetName() << "] 노드를 삭제했습니다" << endl;
	delete temp;
}

void Print()
{
	// 예외처리 (head는 제거되지않게)
	if (listLength <= 0)
	{
		// Pop 빠져나오기
		cout << "현재 존재하는 노드가 없습니다" << endl;
		return;
	}

	Node*	temp = head;
	while (temp->next && temp->next != NULL)
	{
		// 학생 정보 출력
		temp = temp->next;
		temp->GetStudent()->PrintInfo();
	}
}
