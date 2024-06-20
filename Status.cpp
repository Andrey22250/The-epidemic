#include "Status.h"

string StatusToString(Stat status)
{
	string strStatus;

	switch (status)
	{
	case healthy:
		strStatus = "��������";
		break;
	case infected:
		strStatus = "��������������";
		break;
	case sick:
		strStatus = "����������";
		break;
	case dead:
		strStatus = "��������";
		break;
	case resisted:
		strStatus = "�����������";
		break;
	default:
		break;
	}
	return strStatus;
}