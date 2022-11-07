#include <iostream>
#include "List.h"

void List::Add(int n)
{
	Node* add_node = new Node();
	add_node->data = n;

	if (header == nullptr)
	{
		header = add_node;
	}
	else
	{
		Node* temp = header;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = add_node;

	}
}
void List::Clear()
{
	Node* nextNode = header;
	Node* aux = header;
	int cont1 = 0, cont2 = 0;

	while (header->next)
	{
		if (nextNode->next)
		{
			nextNode = nextNode->next;
			cont1++;
		}
		else
		{
			while (cont2 != cont1 - 1)
			{
				aux = aux->next;
				cont2++;
			}
			delete nextNode;
			aux->next = NULL;
			aux = header;
			nextNode = header;
			cont1 = 0;
			cont2 = 0;
		}
	}
}
bool List::Contains(int item)
{
	Node* buscar = header;
	while (buscar->next)
	{
		if (item == buscar->data)
		{
			return true;

		}
		else
		{
			buscar = buscar->next;
		}
	}
	return false;
}
int List::Count()
{
	int cont = 0;
	Node* contar = header;
	while (contar->next)
	{
		contar = contar->next;
		cont++;
	}
	if (!contar->next && !contar->data)
	{
		return cont;
	}
	else
	{
		return cont + 1;
	}
}
int List::GetItem(int Indice)
{
	int buscarIndice = 0;
	Node* buscarI = header;
	while (buscarIndice != Indice)
	{
		buscarI = buscarI->next;
		buscarIndice++;
	}
	return buscarI->data;
}
int List::IndexOf(int Item)
{
	int buscarItem = 0;
	Node* buscarI = header;
	while (buscarI->next)
	{
		if (Item != buscarI->data)
		{
			buscarI = buscarI->next;
			buscarItem++;
		}
		else
		{
			return buscarItem;
		}
	}
	return -1;

}
void List::Insert(int Indice, int Item)
{
	Node* insertar = header;
	Node* nuevo = new Node();
	Node* aux;
	nuevo->data = Item;
	int insertarEn = 0;
	while (insertarEn != Indice)
	{
		if (insertarEn != Indice - 1)
		{
			insertar = insertar->next;
			insertarEn++;
		}
		else
		{
			aux = insertar->next;
			insertar->next = nuevo;
			nuevo->next = aux;
			insertarEn++;
		}
	}

}
int List::LastIndexOf(int Item)
{
	int buscarUltimoItem = 0, coincidencia = -1;
	Node* buscarI = header;
	while (buscarI->next)
	{
		if (Item != buscarI->data)
		{
			buscarI = buscarI->next;
			buscarUltimoItem++;
		}
		else
		{
			buscarI = buscarI->next;
			coincidencia = buscarUltimoItem;
			buscarUltimoItem++;
		}
	}
	return coincidencia;
}
bool List::Remove(int Item)
{
	Node* remover = header;
	Node* modificar = header;
	Node* aux;
	int contR = 0, contM = 0;
	while (remover->next)
	{
		if (remover->data != Item)
		{
			remover = remover->next;
			contR++;
		}
		else
		{
			while (contM != contR - 1)
			{
				modificar = modificar->next;
				contM++;
			}
			aux = remover->next;
			delete remover;
			modificar->next = aux;
			return true;
		}

	}
	return false;
}
void List::RemoveAt(int Indice)
{
	int contR = 0, contM = 0;;
	Node* remover = header;
	Node* modificar = header;
	Node* aux;
	while (contR <= Indice)
	{
		if (contR != Indice)
		{
			remover = remover->next;
			contR++;
		}
		else
		{
			while (contM != contR - 1)
			{
				modificar = modificar->next;
				contM++;
			}
			aux = remover->next;
			delete remover;
			modificar->next = aux;
			contR++;
		}
	}
}
void List::SetItem(int Indice, int Item)
{
	int cont = 0;
	Node* reemplazar = header;
	while (cont <= Indice)
	{
		if (cont != Indice)
		{
			reemplazar = reemplazar->next;
			cont++;
		}
		else
		{
			reemplazar->data = Item;
			cont++;
		}
	}
}
