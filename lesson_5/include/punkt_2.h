#pragma once

template <class T1, class T2>
class Pair
{
private:
	T1 m_data_0;
	T2 m_data_1;
public:
	Pair(T1 data0, T2 data1) : m_data_0(data0), m_data_1(data1) {}
	T1 first() const { return m_data_0;  }
	T2 second() const { return m_data_1; }
};
