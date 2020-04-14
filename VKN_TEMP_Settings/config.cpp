class CfgPatches {
    class VKN_TEMP_Settings {
        name = VKN_TEMP_Settings;
        author = "Curious";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {0,1,0};

        units[] = {};

        requiredAddons[] =
        {
            "cba_settings",
            "VKN_Functions"
        };
    };
};


class Extended_PreInit_EventHandlers {
    class VKN_Settings_preInit {
        init = "call compile preprocessFileLineNumbers '\VKN_Functions\XEH_Preinit.sqf'";
    };
};
