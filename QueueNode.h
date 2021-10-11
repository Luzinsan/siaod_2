#pragma once

namespace luzinsan 
{
	class QueueNode
	{
	private:
		int q_info;        //информационное поле   элемента очереди
		QueueNode* q_next; //указатель на следующий элемент очереди
		static int q_A, q_B;
		/*
		* Зададим два статических указателя – на начало и конец очереди
		* - так как они принадлежат всей очереди
		* - а не каждому её элементу.
		*/
		//Указатель на начальный элемент очереди
		static QueueNode* q_BeginQueueA, q_BeginQueueA_B, q_BeginQueueB;
		//Указатель на конечный элемент очереди
		static QueueNode* q_EndQueueA, q_EndQueueA_B, q_EndQueueB;
	public:
		// инициализация очереди
		QueueNode();
		// Сеттер нижней границы
		const QueueNode& SetA(int);
		// Сеттер верхней границы
		const QueueNode& SetB(int);
		// Добавление элемента в очередь, в которой структурированны 3 подочереди
		const QueueNode& EnQueue(int);
		// Возвращение элемента из очереди
		int DeQueue();
	};

}
