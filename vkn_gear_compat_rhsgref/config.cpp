class CfgPatches {
    class VKN_Gear_Compat_RHSGREF {
        name = VKN_Gear_Compat_RHSGREF;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"VKN_Compatibility"	
		};
	};
};

#define private 0		// Hidden to all
#define protected 1 // Can use but still hidden
#define public 2		// Visible to all