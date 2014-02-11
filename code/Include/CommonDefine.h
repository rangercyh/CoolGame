//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2014.2.11
// Code:	Caiyiheng
// Desc:	game common define.
//---------------------------------------------------------------------------

#define g_StrCpyLen_S(str_dest, str_src, size)		\
do													\
{													\
	char* dest = str_dest;							\
	const char* src = str_src;						\
	int count = size;								\
	if (dest && src)								\
	{												\
		while (count && (*dest++ = *src++))			\
			--count;								\
		if (!count) dest[size - 1] = '\0';			\
	}												\
	else if (dest)									\
	{												\
		dest[0] = '\0';								\
	}												\
}while (false)										\