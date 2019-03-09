class VKN {

    class VikingDepartments_Base {
        side = "West";
        type = "HQ";
        text = "VKN PMC Departments";
        textShort = "Departments";
        assets[] = {};
        color[] = {0,0,0,1};
        description = "Viking PMC Departments.";
    };
    class Viking_Base {
        side = "West";
        color[] = {0,0,0,1};
    };
    class VikingLoki_Base: Viking_Base {
        size = "FireTeam";
        Type = "Recon";
        description = "Viking Element: LOKI";
        text = "Task Force Loki";
        TextShort = "LOKI";
    };
    class VikingOdin_Base: Viking_Base {
        Type = "Assault";
        description = "Viking Element: ODIN";
        text = "Odin Platoon";
        TextShort = "ODIN";
    };
    class VikingVIS_Base: Viking_Base {
        size = "Regiment";
        Type = "AttackRecon";
        description = "Viking Element: VIS";
        text = "Viking Intelligence Service VIS";
        TextShort = "VIS";
    };
    class VikingThor_Base: Viking_Base {
        size = "Division";
        Type = "AviationSupport";
        description = "Viking Element: THOR";
        text = "Airborne Division Thor";
        TextShort = "THOR";
    };
    class VikingFenrir_Base: Viking_Base {
        size = "Section";
        Type = "Artillery";
        description = "Viking Element: FENRIR";
        text = "Artillery Section Fenrir";
        TextShort = "Fenrir";
    };
    class VikingAegir_Base: Viking_Base {
        size = "Battalion";
        Type = "Maritime";
        description = "Viking Element: AEGIR";
        text = "Battlegroup Aegir";
        TextShort = "Aegir";
    };
    class VikingSIF_Base: Viking_Base {
        size = "Squad";
        Type = "Assault";
        description = "Viking Element: SIF";
        text = "Amphibious Assault Squad SIF";
        TextShort = "SIF";
    };
    class VikingTYR_Base: Viking_Base {
        size = "Troop";
        Type = "Service";
        description = "Viking Element: TYR";
        text = "Military Police TYR";
        TextShort = "TYR";
    };
    class VikingValkyrie_Base: Viking_Base {
        size = "Squadron";
        Type = "Airborne";
        description = "Viking Element: VALKYRIE";
        text = "Valkyrie Squadron";
        TextShort = "Valkyrie";
    };
    class VikingBalder_Base: Viking_Base {
        size = "Troop";
        Type = "AttackRecon";
        description = "Viking Element: BALDER";
        text = "Balder Commandos";
        TextShort = "Balder";
    };
    class VikingHeimdall_Base: Viking_Base {
        size = "Squad";
        Type = "Maintenance";
        description = "Viking Element: HEIMDALL";
        text = "Logistical Support Squad Heimdall";
        TextShort = "Heimdall";
    };


    class VKN_Home {
        side = "West";
        type = "HQ";
        text = "Viking Private Military Company";
        textShort = "VIKING PMC";
        assets[] = {};
        color[] = {0,0,0,1};
        insignia = "\VKN_Misc\VikingLogo2048_ca.paa";
        texture = "\VKN_Misc\ORBATLogo.paa";
        description = "Viking PMC Orbat Groups";
        subordinates[] = {VikingShareHolders, VikingExecutiveMembers, VikingDepartments};
    };

    class VikingShareHolders {
        side = "West";
        type = "HQ";
        text = "VKN PMC Share Holders";
        textShort = "Shareholders";
        assets[] = {};
        color[] = {0,0,0,1};
        texture = "\VKN_Misc\Viking Elements\Shareholder.paa";
        description = "Viking PMC Shareholders.";
    };

    class VikingExecutiveMembers {
        side = "West";
        type = "HQ";
        text = "VKN PMC Executive Members";
        textShort = "Executive Members";
        assets[] = {};
        color[] = {0,0,0,1};
        texture = "\VKN_Misc\Viking Elements\Shareholder.paa";
        description = "Viking PMC Executive Members.";
    };

    class VikingDepartments {
        side = "West";
        type = "HQ";
        text = "VKN PMC Departments";
        textShort = "Departments";
        color[] = {0,0,0,1};
        description = "Viking PMC Departments.";
        subordinates[] = {VikingDepartmentsOperations, VikingDepartmentsPersonnel, VikingDepartmentsTech, VikingDepartmentsMedia};
    };
        class VikingDepartmentsOperations: VikingDepartments_Base {
            text = "Operations Department";
            textShort = "Operations Dept.";
            subordinates[] = {VikingCommand, VikingDepartmentsOperationsContracts};
        };
            class VikingDepartmentsOperationsContracts: VikingDepartments_Base {
                text = "Contract Acquisition";
                textShort = "Contract Acquisition";
                type = "Unknown";
            };

        class VikingDepartmentsPersonnel: VikingDepartments_Base {
            text = "Personnel Department";
            textShort = "Personnel Dept.";
            subordinates[] = {VikingDepartmentsPersonnelTraining, VikingDepartmentsPersonnelEmployeeCare, VikingDepartmentsPersonnelPayroll};
        };
            class VikingDepartmentsPersonnelTraining: VikingDepartments_Base {
                text = "Training";
                textShort = "Training";
                type = "Unknown";
            };
            class VikingDepartmentsPersonnelEmployeeCare: VikingDepartments_Base {
                text = "Employee Care";
                textShort = "Employee Care";
                type = "Unknown";
            };
            class VikingDepartmentsPersonnelPayroll: VikingDepartments_Base {
                text = "Payroll";
                textShort = "Payroll";
                type = "Unknown";
            };

        class VikingDepartmentsTech: VikingDepartments_Base {
            text = "Tech Department";
            textShort = "Tech Dept.";
            subordinates[] = {VikingDepartmentsMediaCompanyRelations, VikingDepartmentsMediaNationalOutreach};
        };
            class VikingDepartmentsTechWeaponMaintenance: VikingDepartments_Base {
                text = "Weapon Maintenance";
                textShort = "Weapon Maintenance";
                type = "Unknown";
            };
            class VikingDepartmentsTechResearchDevelopment: VikingDepartments_Base {
                text = "Research and Development";
                textShort = "Research and Development";
                type = "Unknown";
            };

        class VikingDepartmentsMedia: VikingDepartments_Base {
            text = "Media Department";
            textShort = "Media Dept.";
            subordinates[] = {VikingDepartmentsMediaCompanyRelations, VikingDepartmentsMediaNationalOutreach};
        };
            class VikingDepartmentsMediaCompanyRelations: VikingDepartments_Base {
                text = "Company Relations";
                textShort = "Company Relations";
                type = "Unknown";
            };
            class VikingDepartmentsMediaNationalOutreach: VikingDepartments_Base {
                text = "National Outreach";
                textShort = "National Outreach";
                type = "Unknown";
            };



    // Operations
    class VikingCommand: Viking_Base {
        side = "West";
        color[] = {0,0,0,1};
        size = "Company";
        type = "HQ";
        text = "Viking Command Group (Zeus)";
        textShort = "VKN Command";
        description = "Viking Command Group";
        texture = "\a3\ui_f_curator\data\logos\arma3_curator_eye_512_ca.paa";
        subordinates[] = {VikingLoki_Command, VikingOdin_Command, VikingVIS_Command, VikingThor_Command, VikingFenrir_Command, VikingAegir_Command, VikingSIF_Command, VikingTYR_Command, VikingValkyrie_Command, VIkingBalder_Command, VIkingHeimdall_Command};
    };


    class VikingLoki_Command: VikingLoki_Base {
        texture = "\VKN_Misc\Viking Elements\loki.paa";
        size = "Brigade";
        subordinates[] = {VikingLoki_Team1, VikingLoki_Team2, VikingLoki_Team3};
    };
        class VikingLoki_Team1: VikingLoki_Base {
            text = "Team 1";
            TextShort = "Team 1";
        };
        class VikingLoki_Team2: VikingLoki_Base {
            text = "Team 2";
            TextShort = "Team 2";
        };
        class VikingLoki_Team3: VikingLoki_Base {
            text = "Team 3";
            TextShort = "Team 3";
        };


    class VikingOdin_Command: VikingOdin_Base {
        texture = "\VKN_Misc\Viking Elements\Odin.paa";
        size = "Platoon";
        assets[] = {};
        subordinates[] = {VikingOdinArmour, VikingOdinMechanized, VikingOdinInfantry};
    };

        class VikingOdinArmour: VikingOdin_Base {
            text = "Armour";
            textShort = "Armour";
            size = "Regiment";
            Type = "Armored";
            subordinates[] = {VikingOdinSection1, VikingOdinSection2};
        };
            class VikingOdinSection1: VikingOdin_Base {
                text = "Section 1";
                TextShort = "Section 1";
                Type = "Armored";
                Size = "Section";
            };
            class VikingOdinSection2: VikingOdin_Base {
                text = "Section 2";
                TextShort = "Section 2";
                Type = "Armored";
                Size = "Section";
            };

        class VikingOdinMechanized: VikingOdin_Base {
            text = "Mechanized";
            textShort = "Mechanized";
            size = "Regiment";
            Type = "MechanizedInfantry";
            subordinates[] = {VikingOdinMechanizedAPC1, VikingOdinMechanizedIFV1};
        };
            class VikingOdinMechanizedAPC1: VikingOdin_Base {
                text = "Section 1";
                TextShort = "Section 1";
                Type = "MechanizedInfantry";
                Size = "Section";
            };
            class VikingOdinMechanizedIFV1: VikingOdin_Base {
                text = "Section 2";
                TextShort = "Section 2";
                Type = "MechanizedInfantry";
                Size = "Section";
            };

        class VikingOdinMotorized: VikingOdin_Base {
            text = "Motorized";
            textShort = "Motorized";
            size = "Regiment";
            Type = "MotorizedInfantry";
        };

        class VikingOdinInfantry: VikingOdin_Base {
            text = "Infantry";
            textShort = "Infantry";
            size = "Platoon";
            Type = "Infantry";
            subordinates[] = {VikingOdinInfantrySquad1,VikingOdinInfantrySquad2};
        };
            class VikingOdinInfantrySquad1: VikingOdin_Base {
                text = "Alpha";
                textShort = "Alpha";
                size = "Squad";
                Type = "Infantry";
                subordinates[] = {VikingOdinInfantrySquad1_1, VikingOdinInfantrySquad1_2, VikingOdinInfantrySquad1_3};
            };
                class VikingOdinInfantrySquad1_1: VikingOdin_Base {
                    text = "Alpha 1-1";
                    textShort = "Alpha 1-1";
                    size = "Squad";
                    Type = "Infantry";
                };
                class VikingOdinInfantrySquad1_2: VikingOdin_Base {
                    text = "Alpha 1-2";
                    textShort = "Alpha 1-2";
                    size = "Squad";
                    Type = "Infantry";
                };
                class VikingOdinInfantrySquad1_3: VikingOdin_Base {
                    text = "Alpha 1-3";
                    textShort = "Alpha 1-3";
                    size = "Squad";
                    Type = "Infantry";
                };
            class VikingOdinInfantrySquad2: VikingOdin_Base {
                text = "Bravo";
                textShort = "Bravo";
                size = "Squad";
                Type = "Infantry";
                subordinates[] = {VikingOdinInfantrySquad2_1, VikingOdinInfantrySquad2_2, VikingOdinInfantrySquad2_3};
            };
                class VikingOdinInfantrySquad2_1: VikingOdin_Base {
                    text = "Bravo 1-1";
                    textShort = "Bravo 1-1";
                    size = "Squad";
                    Type = "Infantry";
                };
                class VikingOdinInfantrySquad2_2: VikingOdin_Base {
                    text = "Bravo 1-2";
                    textShort = "Bravo 1-2";
                    size = "Squad";
                    Type = "Infantry";
                };
                class VikingOdinInfantrySquad2_3: VikingOdin_Base {
                    text = "Bravo 1-3";
                    textShort = "Bravo 1-3";
                    size = "Squad";
                    Type = "Infantry";
                };

    class VikingVIS_Command: VikingVIS_Base {
        texture = "\VKN_Misc\Viking Elements\VIS.paa";
        size = "AttackRecon";
        assets[] = {};
        subordinates[] = {VikingVISFieldOperatives, VikingVISIntelligenceAnalysts, VikingVISStrikeTeamEcho};
    };
        class VikingVISFieldOperatives: VikingVIS_Base {
            text = "Field Operatives";
            textShort = "Field Operatives";
            type = "Unknown";
            size = "Squad";
        };
        class VikingVISIntelligenceAnalysts: VikingVIS_Base {
            text = "Intelligence Analysts";
            textShort = "Intelligence Analysts";
            type = "Unknown";
            size = "Squad";
        };
        class VikingVISStrikeTeamEcho: VikingVIS_Base {
            text = "Strike Team Echo";
            textShort = "Strike Team Echo";
            size = "Squad";
        };


    class VikingThor_Command: VikingThor_Base {
        texture = "\VKN_Misc\Viking Elements\Thor.paa";
        size = "Airborne";
        assets[] = {};
        subordinates[] = {VikingThorCharlieSquad, VikingThorDeltaSquad};
    };
        class VikingThorCharlieSquad: VikingThor_Base {
            text = "Charlie";
            textShort = "Charlie";
            size = "Squad";
            subordinates[] = {VikingThorCharlieSquad1_1, VikingThorCharlieSquad1_2, VikingThorCharlieSquad1_3, VikingThorCharlieExplosives};
        };
            class VikingThorCharlieSquad1_1: VikingThor_Base {
                text = "Charlie 1-1";
                textShort = "Charlie 1-1";
                size = "Squad";
            };
            class VikingThorCharlieSquad1_2: VikingThor_Base {
                text = "Charlie 1-2";
                textShort = "Charlie 1-2";
                size = "Squad";
            };
            class VikingThorCharlieSquad1_3: VikingThor_Base {
                text = "Charlie 1-3";
                textShort = "Charlie 1-3";
                size = "Squad";
            };
        class VikingThorCharlieExplosives: VikingThor_Base {
            text = "Charlie Explosives Team";
            TextShort = "Explosives Team";
        };
        class VikingThorDeltaSquad: VikingThor_Base {
            text = "Delta";
            textShort = "Delta";
            size = "Squad";
            subordinates[] = {VikingThorDeltaSquad1_1, VikingThorDeltaSquad1_2, VikingThorDeltaSquad1_3, VikingThorDeltaExplosives};
        };
            class VikingThorDeltaSquad1_1: VikingThor_Base {
                text = "Delta 1-1";
                textShort = "Delta 1-1";
                size = "Squad";
            };
            class VikingThorDeltaSquad1_2: VikingThor_Base {
                text = "Delta 1-2";
                textShort = "Delta 1-2";
                size = "Squad";
            };
            class VikingThorDeltaSquad1_3: VikingThor_Base {
                text = "Delta 1-3";
                textShort = "Delta 1-3";
                size = "Squad";
            };
        class VikingThorDeltaExplosives: VikingThor_Base {
            text = "Delta Explosives Team";
            TextShort = "Explosives Team";
        };

    class VikingFenrir_Command: VikingFenrir_Base {
        texture = "\VKN_Misc\Viking Elements\VIS.paa";
        size = "AttackRecon";
        assets[] = {};
        subordinates[] = {VikingFenrirMortarSupport, VikingFenrirHeavyCannonSupport, VikingFenrirAABatteries};
    };
        class VikingFenrirMortarSupport: VikingFenrir_Base {
            text = "Mortar Support";
            textShort = "Mortar Support";
        };
        class VikingFenrirHeavyCannonSupport: VikingFenrir_Base {
            text = "Heavy Cannon Support";
            textShort = "Heavy Cannon Support";
        };
        class VikingFenrirAABatteries: VikingFenrir_Base {
            text = "AA Batteries";
            textShort = "AA Batteries";
        };

    class VikingAegir_Command: VikingAegir_Base {
        texture = "\VKN_Misc\Viking Elements\VIS.paa";
        size = "AttackRecon";
        assets[] = {};
        subordinates[] = {VikingAegirCarrierGroup, VikingAegirHeavyPatrolBoats, VikingAegirMinesweepers, VikingAegirHotelSquad};
    };
        class VikingAegirCarrierGroup: VikingAegir_Base {
            text = "Carrier Group";
            textShort = "Carrier Group";
            subordinates[] = {VikingAegirCarrierGroupResolution, VikingAegirCarrierGroupAltis};
        };
            class VikingAegirCarrierGroupResolution: VikingAegir_Base {
                text = "VKN: Resolution";
                textShort = "Carrier: Resolution";
                subordinates[] = {VikingAegirCarrierGroupCathitrano, VikingAegirCarrierGroupVengeance, VikingAegirCarrierGroupJustice, VikingAegirCarrierGroupEnvision};
            };
                class VikingAegirCarrierGroupCathitrano: VikingAegir_Base {
                    text = "VKN: Cathitrano";
                    textShort = "DD Cathitrano";
                };
                class VikingAegirCarrierGroupVengeance: VikingAegir_Base {
                    text = "VKN: Vengeance";
                    textShort = "DD Vengeance";
                };
                class VikingAegirCarrierGroupJustice: VikingAegir_Base {
                    text = "VKN: Justice";
                    textShort = "FF Justice";
                };
                class VikingAegirCarrierGroupEnvision: VikingAegir_Base {
                    text = "VKN: Envision";
                    textShort = "FF Envision";
                };

            class VikingAegirCarrierGroupAltis: VikingAegir_Base {
                text = "VKN: Altis";
                textShort = "Carrier: Altis";
                subordinates[] = {VikingAegirCarrierGroupTribulation, VikingAegirCarrierGroupMisfortune, VikingAegirCarrierGroupHammerhead, VikingAegirCarrierGroupNobility};
            };
                class VikingAegirCarrierGroupTribulation: VikingAegir_Base {
                    text = "VKN: Tribulation";
                    textShort = "DD Tribulation";
                };
                class VikingAegirCarrierGroupMisfortune: VikingAegir_Base {
                    text = "VKN: Misfortune";
                    textShort = "DD Misfortune";
                };
                class VikingAegirCarrierGroupHammerhead: VikingAegir_Base {
                    text = "VKN: Hammerhead";
                    textShort = "FF Hammerhead";
                };
                class VikingAegirCarrierGroupNobility: VikingAegir_Base {
                    text = "VKN: Nobility";
                    textShort = "FF Nobility";
                };

        class VikingAegirHeavyPatrolBoats: VikingAegir_Base {
            text = "Patrol Boats";
            textShort = "Patrol Boats";
        };
        class VikingAegirMinesweepers: VikingAegir_Base {
            text = "Minesweepers";
            textShort = "Minesweepers";
        };
            class VikingAegirMinesweepersMako: VikingAegir_Base {
                text = "VKN: Mako";
                textShort = "Mako";
            };
            class VikingAegirMinesweepersHonour: VikingAegir_Base {
                text = "VKN: Honour";
                textShort = "Honour";
            };
        class VikingAegirHotelSquad: VikingAegir_Base {
            text = "'Hotel' Squad";
            textShort = "'Hotel' Squad";
        };
            class VikingAegirHotelSquad1_1: VikingAegir_Base {
                text = "'Hotel' Squad 1-1";
                textShort = "'Hotel' Squad 1-1";
            };
            class VikingAegirHotelSquad1_2: VikingAegir_Base {
                text = "'Hotel' Squad 1-2";
                textShort = "'Hotel' Squad 1-2";
            };
            class VikingAegirHotelSquad1_3: VikingAegir_Base {
                text = "'Hotel' Squad 1-3";
                textShort = "'Hotel' Squad 1-3";
            };

    class VikingSIF_Command: VikingSIF_Base {
        text = "Amphibious Assault Squad ‘Sif’";
        textShort = "SIF";
        subordinates[] = {VikingSIFFoxtrotSquad, VikingSIFGolfSquad, VikingSIFBeachheadSecurity};
    };
        class VikingSIFFoxtrotSquad: VikingSIF_Base {
            text = "Foxtrot";
            textShort = "Foxtrot";
            subordinates[] = {VikingSIFFoxtrotSquad1_1, VikingSIFFoxtrotSquad1_2, VikingSIFFoxtrotSquad1_3};
        };
            class VikingSIFFoxtrotSquad1_1: VikingSIF_Base {
                text = "Foxtrot 1-1";
                textShort = "Foxtrot 1-1";
            };
            class VikingSIFFoxtrotSquad1_2: VikingSIF_Base {
                text = "Foxtrot 1-2";
                textShort = "Foxtrot 1-2";
            };
            class VikingSIFFoxtrotSquad1_3: VikingSIF_Base {
                text = "Foxtrot 1-3";
                textShort = "Foxtrot 1-3";
            };

        class VikingSIFGolfSquad: VikingSIF_Base {
            text = "Golf";
            textShort = "Golf";
            subordinates[] = {VikingSIFGolfSquad1_1, VikingSIFGolfSquad1_2, VikingSIFGolfSquad1_3};
        };
            class VikingSIFGolfSquad1_1: VikingSIF_Base {
                text = "Golf 1-1";
                textShort = "Golf 1-1";
            };
            class VikingSIFGolfSquad1_2: VikingSIF_Base {
                text = "Golf 1-2";
                textShort = "Golf 1-2";
            };
            class VikingSIFGolfSquad1_3: VikingSIF_Base {
                text = "Golf 1-3";
                textShort = "Golf 1-3";
            };
        class VikingSIFBeachheadSecurity: VikingSIF_Base {
            text = "Beachhead Security";
            textShort = "Beachhead Security";
        };

    class VikingTYR_Command: VikingTYR_Base {
        text = "Military Police ‘TYR’";
        textShort = "TYR";
        subordinates[] = {VikingTYRMikeSquad, VikingTYRNovemberSquad, VikingTYROscarSquad};
    };
        class VikingTYRMikeSquad: VikingTYR_Base {
            text = "'Mike' Squad";
            textShort = "Mike";
        };
        class VikingTYRNovemberSquad: VikingTYR_Base {
            text = "'November' Squad";
            textShort = "November";
        };
        class VikingTYROscarSquad: VikingTYR_Base {
            text = "'Oscar' Squad";
            textShort = "Oscar";
        };

     class VikingValkyrie_Command: VikingValkyrie_Base {
        text = "Valkyrie Squadron";
        textShort = "Valkyrie";
        texture = "\VKN_Misc\Viking Elements\Valkyrie.paa";
        subordinates[] = {VikingValkyrieFighterWing, VikingValkyrieBomberWing, VikingValkyrieRotarCAS, VikingValkyrieRotarTransport, VikingValkyrieCargo};
    };
        class VikingValkyrieFighterWing: VikingValkyrie_Base {
            text = "Fighter Wing 'India'";
            textShort = "India";
            assets[] = {};
            subordinates[] = {VikingValkyrieFighterWingF22, VikingValkyrieFighterWingF16};
        };
            class VikingValkyrieFighterWingF22: VikingValkyrie_Base {
                text = "F22 India 1-1";
                textShort = "India 1-1";
            };
            class VikingValkyrieFighterWingF16: VikingValkyrie_Base {
                text = "F16 India 1-2";
                textShort = "India 1-2";
            };
        class VikingValkyrieBomberWing: VikingValkyrie_Base {
            text = "Bomber Wing 'Juliet'";
            textShort = "Juliet";
            assets[] = {};
            subordinates[] = {VikingValkyrieBomberWing};
        };
            class VikingValkyrieBomberWingA10: VikingValkyrie_Base {
                text = "A-10 Juliet 1-1";
                textShort = "Juliet 1-1";
            };
        class VikingValkyrieRotarCAS: VikingValkyrie_Base {
            text = "Rotar CAS 'Kilo'";
            textShort = "Kilo";
            assets[] = {};
            subordinates[] = {VikingValkyrieRotarCAS, VikingValkyrieRotarTransport};
        };
            class VikingValkyrieRotarCASApache: VikingValkyrie_Base {
                text = "Apache Kilo 1-1";
                textShort = "Kilo 1-1";
            };
        class VikingValkyrieRotarTransport: VikingValkyrie_Base {
            text = "Rotar Transport 'Lima'";
            textShort = "Lima";
            assets[] = {};
        };
            class VikingValkyrieRotarTransportChinook: VikingValkyrie_Base {
                text = "Chinook Lima 1-1";
                textShort = "Lima 1-1";
            };
            class VikingValkyrieRotarTransportBlackhawk: VikingValkyrie_Base {
                text = "Blackhawk Lima 1-2";
                textShort = "Lima 1-2";
            };
            class VikingValkyrieRotarTransportLittlebird: VikingValkyrie_Base {
                text = "Little Bird Lima 1-3";
                textShort = "Lima 1-3";
            };
        class VikingValkyrieCargo: VikingValkyrie_Base {
            text = "C-130 'Cargo Aircraft'";
            textShort = "C-130 Cargo";
        };
    class VIkingBalder_Command: VikingBalder_Base {
        text = "Balder Commandos";
        textShort = "Balder";
        texture = "\VKN_Misc\Viking Elements\Balder.paa";
        subordinates[] = {VIkingBalderJungleWarfare, VIkingBalderSubterfugeTeam, VIkingBalderAdvanceTeam};
    };
        class VIkingBalderJungleWarfare: VikingBalder_Base {
            text = "Jungle Warfare Specialists ‘Quebec’";
            textShort = "Quebec";
        };
        class VIkingBalderSubterfugeTeam: VikingBalder_Base {
            text = "Subterfuge Team ‘Romeo’";
            textShort = "Romeo";
        };
        class VIkingBalderAdvanceTeam: VikingBalder_Base {
            text = "Advance Team ‘Sierra’";
            textShort = "Sierra";
        };

    class VIkingHeimdall_Command: VikingHeimdall_Base {
        text = "Heimdall Commandos";
        textShort = "Heimdall";
        subordinates[] = {VIkingHeimdallGroundLogistics, VIkingHeimdallSectorSecuiritySquad, VIkingHeimdallArielLogistics};
    };
        class VIkingHeimdallGroundLogistics: VikingHeimdall_Base {
            text = "Ground Logistics";
            textShort = "Grnd Logistics";
        };
        class VIkingHeimdallSectorSecuiritySquad: VikingHeimdall_Base {
            text = "Sector Security Squad ‘Papa’";
            textShort = "Papa";
        };
        class VIkingHeimdallArielLogistics: VikingHeimdall_Base {
            text = "Ariel Logistics";
            textShort = "Ariel Logistics";
        };
};