class cfgPatches {
class VKN_music	{
        name = VKN_Music;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};
		units[] = {};
	};
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class CfgMusicClasses
{

	class VKN_Music
	{
		displayName = "Viking PMC Music Collection";
	}
};

#include "musicConfig.hpp"
