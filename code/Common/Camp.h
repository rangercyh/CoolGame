//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2014.2.11
// Code:	Caiyiheng
// Desc:	A game camp.
//---------------------------------------------------------------------------
#ifndef ENGINE_COMMON_CAMP_H_
#define ENGINE_COMMON_CAMP_H_

class Camp
{
public:
	Camp();
	~Camp();

	// get default relationship to other camp
	int getDefaultRelation();
	
	// set default relationship to other camp
	void setDefaultRelation(int relation);
	
	// get camp name
	char *getCampName();
	
	// get camp id
	int getCampID();
	
private:
	// set camp name
	char *SetCampName(char *name);
	
	int m_defaultRelation;
	char m_campName[64];
	int m_campID;
};

#endif	// ENGINE_COMMON_CAMP_H_