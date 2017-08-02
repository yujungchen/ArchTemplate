#pragma once

#include <stdio.h>
#define SECTOR_NUM 8


template <class T>
T getMax(T &in0, T &in1){

	if(in0 > in1)
		return in0;
	else
		return in1;
}


/*Define Cache Line Structure*/
template <int N>
class CacheLine{

public:
	CacheLine(){}
	~CacheLine(){}
	void SetSector(int _Sector, int _Data){
		m_Data[_Sector] = _Data;
	}
	void GetSector(int _Sector, int &_Data){
		_Data = m_Data[_Sector];
	}

private:
	int m_Data[N];
};


/*Define Cache Structure*/
template <typename T>
class Cache{

public:

	Cache(int _Set, int _Way){
		m_Set = _Set;
		m_Way = _Way;

		m_Cache = new T*[m_Way];
		for(int i = 0 ; i < m_Way ; i++)
			m_Cache[i] = new T[m_Set];
	}


	~Cache(){

	}

private:
	T **m_Cache;
	int m_Set;
	int m_Way;
};
