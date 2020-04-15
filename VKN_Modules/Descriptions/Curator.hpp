class ModuleCurator_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Provide access to Zeus. Further settings can be modified by syncing other modules to this module, for example adding/removing addons from Zeus. More information can be found at: https://community.bistudio.com/wiki/Arma_3_Curator#Setup";
  };
};

class ModuleCuratorAddAddons_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Add/remove addons from Zeus. For example, remove access to an entire mod from Zeus only. Must be synced to a Game Master module.";
  };
};

class ModuleCuratorAddEditingArea_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Restrict editing area to a confined space. Useful for a Zeus vs Player wave scenario.";
  };
};

class ModuleCuratorAddEditingAreaPlayers_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Add a restriction around players. Allows a buffer zone between players and the editable world. Cannot place objects inside this zone around players - optimal is 5m.";
  };
};

class ModuleCuratorSetEditingAreaType_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Define if the area synced is allow editing inside the location or outside the location.";
  };
};

class ModuleCuratorAddCameraArea_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Confine the Zeus camera to the synced area. Stops Zeus camera from leaving the editable area.";
  };
};

class ModuleCuratorSetCamera_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Set a camera scene for Zeus vision. Used for entering Zeus and having a start in a desired location.";
  };
};

class ModuleCuratorAddIcon_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Create a 3D icon to show within the Zeus interface, like city locations or defend/attack markers. Similar to 3D tasks but only for Zeus.";
  };
};
