#include "PreCompile.h"
#include "Camp.h"
#include "Core.h"
#include "CommonDefine.h"

Camp::Camp()
{
	m_defaultRelation = 0;
}

Camp::~Camp()
{

}

int Camp::getDefaultRelation()
{
	return m_defaultRelation;
}

void Camp::setDefaultRelation(int relation)
{
	m_defaultRelation = relation;
}

char *Camp::getCampName()
{
	return m_campName;
}

int Camp::getCampID()
{
	return m_campID;
}

char *Camp::SetCampName(char *name)
{
	g_StrCpyLen_S(m_campName, name, sizeof(m_campName));
	g_globalFunction.StringToHash(m_campName, m_campID);
	return m_campName;
}


