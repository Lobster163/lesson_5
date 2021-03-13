#pragma once

template<class T>
class Pair1
{
	private:
		T m_data_0;
		T m_data_1;
	public:
		Pair1(T data, T data2) : m_data_0(data), m_data_1(data2) {}	
		T first() const { return m_data_0; }
		T second() const { return m_data_1;	}
};