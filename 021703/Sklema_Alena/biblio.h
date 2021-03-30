#pragma once
#ifndef _biblio_H_
#define _biblio_H_

#include <iostream>
#include <string>

using namespace std;

struct SET {
	int key;
	SET* right;
	SET(int k) { key = k;   right = NULL; }
};

bool find(SET* pbeg, int k);

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

SET* remove(SET* pbeg, int k);

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

SET* insert(SET* p, int k);
//���������� ���������
string print(SET* A);
//����������� ��������
SET* uni(SET* A, SET* B);
//����������� ��������
SET* cros(SET* A, SET* B);

#endif
