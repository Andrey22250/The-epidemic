#include "Status.h"

string StatusToString(Stat status)
{
	string strStatus;

	switch (status)
	{
	case healthy:
		strStatus = "Здоровый";
		break;
	case infected:
		strStatus = "Инфицированный";
		break;
	case sick:
		strStatus = "Заболевший";
		break;
	case dead:
		strStatus = "Погибший";
		break;
	case resisted:
		strStatus = "Выздововший";
		break;
	default:
		break;
	}
	return strStatus;
}