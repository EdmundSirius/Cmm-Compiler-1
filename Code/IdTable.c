#include"common.h"
#include"IdTable.h"

void WriteIdTable(Type inh , char* name)
{
	int i = 0;
	for(; i < 10 ; i++)
	{
		if(IdTable[i].valid == 0)
			break;	
	}

	/* to make sure that the array is not full TODO*/

	IdTable[i].valid = 1;
	
	int length = strlen(name);
	IdTable[i].Id_name = (char*)malloc(sizeof(char) * (length + 1));
	strcpy(IdTable[i].Id_name , name);

	IdTable[i].type = inh;

//	FillType(IdTable[i].type , inh);
}


