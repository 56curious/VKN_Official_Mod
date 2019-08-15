class B_VKN_EC135_Unarmed_Black_1: EC135Noirlu {
  crew = "B_Helipilot_F";
  side = 1;
  displayName = "Eurocopter 135 - Unarmed";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  scope = 2;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  hiddenSelectionsTextures[] = {
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
    ""
  };
};
class B_VKN_EC135_Unarmed_Black_2: EC135Unarmedlu {
  crew = "B_Helipilot_F";
  side = 1;
  displayName = "Eurocopter 135 - Unarmed (Camera)";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  scope = 2;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  hiddenSelectionsTextures[] = {
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
    ""
  };
};
class B_VKN_EC135_Armed_Black_1: EC135Armedlu {
  crew = "B_Helipilot_F";
  side = 1;
  displayName = "Eurocopter 135 - Armed";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  scope = 2;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  hiddenSelectionsTextures[] = {
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
    ""
  };
};
class B_VKN_EC135_Medical_Basic_1: EC135Rlu {
  crew = "B_Helipilot_F";
  side = 1;
  displayName = "Eurocopter 135 - Medical";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  scope = 2;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  hiddenSelectionsTextures[] = {
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black_Medical.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black_Medical.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
    ""
  };

  class textureSources {
    class Viking_Black_Medical {
      displayName = "Viking Black Medical";
      author = "Eric McHogan";
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
      factions[] = {
        "BLU_F", "BLU_G_F",
        "OPF_F", "OPF_G_F",
        "IND_F", "IND_G_F",
        "CIV_F"
      };
    };
    class Viking_Loki_Medical: Viking_Black_Medical {
      displayName = "Viking Loki Medical";
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Loki_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Loki_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Loki.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Loki.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
class Viking_OD_Medical: Viking_Black_Medical {
      displayName = "Viking OD Medical";
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_OD_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_OD_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_OD.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_OD.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
class Viking_Sand_Medical: Viking_Black_Medical {
      displayName = "Viking Sand Medical";
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Sand_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Sand_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Sand.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Sand.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
  };
};


class B_VKN_EC135_Medical_Alternative_1: EC135SAlu {
  crew = "B_Helipilot_F";
  side = 1;
  displayName = "Eurocopter 135 - Medical Alternative";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  scope = 2;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  hiddenSelectionsTextures[] = {
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black_Medical.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black_Medical.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
    "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
    ""
  };

  class textureSources {
    class Viking_Black_Medical {
      displayName = "Viking Black";
      author = "Eric McHogan";
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Black_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Black_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Black.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Black.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
      factions[] = {
        "BLU_F", "BLU_G_F",
        "OPF_F", "OPF_G_F",
        "IND_F", "IND_G_F",
        "CIV_F"
      };
    };
class Viking_Loki_Medical: Viking_Black_Medical {
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Loki_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Loki_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Loki.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Loki.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
class Viking_OD_Medical: Viking_Black_Medical {
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_OD_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_OD_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_OD.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_OD.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
class Viking_Sand_Medical: Viking_Black_Medical {
      textures[] = {
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_1_Sand_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_2_Sand_Medical.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_3_Sand.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Body_4_Sand.paa",
        "\VKN_Objects\Vehicles\EC135\VKN_EC135_Int_1.paa",
        ""
      };
    };
  };
};
