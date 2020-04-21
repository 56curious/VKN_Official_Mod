class ModuleSkiptime_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "On mission start, skip the time by the desired time in hours.";
  };
};

class ModuleTaskCreate_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Create a task with the desired settings. More information can be found at: https://community.bistudio.com/wiki/Arma_3_Task_Framework#Task_Modules";
  };
  class Attributes: AttributesBase {
    class Owner: Combo {
      tooltip = "Select which unit(s) will be assigned the task.";
    };
    class Marker: Edit {
      tooltip = "(Optional) A marker variable name to match the destination of the task if desired. Should use destination attribute instead and leave this blank.";
    };
    class ShowNotification: CheckboxNumber {
      tooltip = "Select to see the notifaction when the task is created. Will stack if mutliple are made at once.";
    };
  };

};

class ModuleTaskSetDescription_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Update the task description on a synced create task module.";
  };
};

class ModuleTaskSetDestination_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Update the task destination on a synced create task module.";
  };
};

class ModuleTaskSetState_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Update the task state on a synced create task module.";
  };
};

class ModuleCreateDiaryRecord_F: Module_F {
  class ModuleDescription: ModuleDescription {
    description = "Create a new diary entry for the assigned owner(s). Unit will view it in their map. Cannot be edited.";
  };
};






/*
Require desc - default modules
|-
|Hide Terrain Objects
|Edit Terrain Object
|Timeline
|Rich Curve
|Rich Curve Key
|Rich Curve Key Control Point
|Camera
|Combat Get In
|Military Symbols
|Sector
|Set Costs (Default)
|IR Grenade
|Time Acceleration
|Countdown
|Spawn AI
|Spawn AI: Spawnpoint
|Spawn AI: Sector Tactic
|Spawn AI: Options
|Sling Load
|EndGame Objectives Instance
|End Game Simple Objective
|End Game Start Game Objective
|End Game - End Game Objective
|Civilian Presence
|Civilian Presence Spawnpoint
|Civilian Presence Position
|Vanguard: Starting Area
|Vanguard: Score Persistence
|Vanguard: Objective Area
*/
