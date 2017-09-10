class CfgPatches {
    class anrop_ace_server {
        name = "anrop_ace_server";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_common"};
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class ACE_ServerSettings {
    class ace_advanced_fatigue_enabled {
        value = 0;
        typeName = "BOOL";
        force = 1;
    };

    class ace_common_checkPBOsAction {
        value = 0;
        typeName = "SCALAR";
        force = 1;
    };
    class ace_common_checkPBOsCheckAll {
        value = 1;
        typeName = "BOOL";
        force = 1;
    };
    class ace_common_checkPBOsWhitelist {
        value = "[]";
        typeName = "STRING";
        force = 1;
    };

    class ace_cookoff_enable {
        value = 0;
        typeName = "BOOL";
        force = 1;
    };
    class ace_cookoff_enableAmmobox {
        value = 0;
        typeName = "BOOL";
        force = 1;
    };
    class ace_cookoff_enableAmmoCookoff {
        value = 0;
        typeName = "BOOL";
        force = 1;
    };

    class ace_finger_enabled {
        value = 1;
        typeName = "BOOL";
        force = 1;
    };

    class ace_gforces_enabledFor {
        value = 0;
        typeName = "SCALAR";
        force = 1;
    };

    class ace_hearing_enableCombatDeafness {
        value = 0;
        typeName = "BOOL";
        force = 1;
    };

    class ace_overheating_unJamOnreload {
        value = 1;
        typeName = "BOOL";
        force = 1;
    };

    class ace_repair_autoShutOffEngineWhenStartingRepair {
        value = 1;
        typeName = "BOOL";
        force = 1;
    };
};
