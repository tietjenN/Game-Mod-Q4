#include "idlib/precompiled.h"
#pragma hdrstop

#include "game/Game_local.h"

class Pizza : public idAI {
public:

	CLASS_PROTOTYPE(Pizza);

	Pizza(void);
	bool	tomato_sauce;
	bool	bbq_sauce;
	bool	cheese;
	bool	pepperoni;
	bool	peppers;
	bool	olives;
	bool	sausage;
	bool	sardines;
	bool	pineapple;
	bool	mushroom;

	CLASS_STATES_PROTOTYPE(Pizza);
};

CLASS_DECLARATION(idAI, Pizza)
END_CLASS

