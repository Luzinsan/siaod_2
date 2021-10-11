#pragma once

namespace luzinsan 
{
	class QueueNode
	{
	private:
		int q_info;        //�������������� ����   �������� �������
		QueueNode* q_next; //��������� �� ��������� ������� �������
		static int q_A, q_B;
		/*
		* ������� ��� ����������� ��������� � �� ������ � ����� �������
		* - ��� ��� ��� ����������� ���� �������
		* - � �� ������� � ��������.
		*/
		//��������� �� ��������� ������� �������
		static QueueNode* q_BeginQueueA;
		static QueueNode* q_BeginQueueA_B;
		static QueueNode* q_BeginQueueB;
		//��������� �� �������� ������� �������
		static QueueNode* q_EndQueueA;
		static QueueNode* q_EndQueueA_B;
		static QueueNode* q_EndQueueB;
	public:
		// ������������� �������
		QueueNode();
		const QueueNode& SetA(int);
		const QueueNode& SetB(int);
		// ���������� �������� � �������, � ������� ���������������� 3 ����������
		const QueueNode& EnQueue(int);
		// ����������� �������� �� �������
		int DeQueue();
	};

}