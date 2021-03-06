#include"Seman.h"

#ifndef __ID__
#define __ID__
struct CharactInfoEntry_Id
{
	int valid;
	char* Id_name;
	Type type;
	int var_no;
	int param_or_not;// 1 means is param
};

struct CharactInfoEntry_Id IdTable[100];

bool CheckIdTable_name(char* name);

void WriteIdTable(Type inh , char *name);

Type FindId(char* name);

int lookup_idtable(char* name);

int lookup_idtable_rank(char* name);

#endif
