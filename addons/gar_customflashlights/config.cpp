class CfgPatches {
    class gar_customflashlights {
        units[] = {};
        weapons[] = {
            "gar_flashlight_ledwide",
            "gar_flashlight_ledfocused",
            "gar_flashlight_led",
            "gar_flashlight_bulbwide",
            "gar_flashlight_bulbfocused",
            "gar_flashlight_bulb",
            "gar_flashlight_red"
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_laserpointer"};
        author[] = {"G4rrus"};
        authorUrl = "";
    };
};

class cfgWeapons {
    class acc_flashlight;
    class InventoryFlashLightItem_Base_F;
    class gar_flashlight_ledwide: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Flashlight LED (Wide)";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "gar_flashlight_led";
        MRT_SwitchItemPrevClass = "gar_flashlight_ledfocused";
        MRT_switchItemHintText = "Wide";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED (Wide)";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 12;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 40;
                intensity = 3500;
                outerAngle = 140;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 100;
                    hardLimitStart = 1;
                    linear = 1;
                    quadratic = 0.2;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_ledfocused: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Flashlight LED (Beam)";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "gar_flashlight_ledwide";
        MRT_SwitchItemPrevClass = "gar_flashlight_led";
        MRT_switchItemHintText = "Beam";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED (Beam)";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 32;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 10;
                intensity = 8500;
                outerAngle = 60;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 8;
                    hardLimitEnd = 250;
                    hardLimitStart = 100;
                    linear = 6;
                    quadratic = 0.01;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_led: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Flashlight LED";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "gar_flashlight_ledfocused";
        MRT_SwitchItemPrevClass = "gar_flashlight_ledwide";
        MRT_switchItemHintText = "Default";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 10;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 10;
                intensity = 7000;
                outerAngle = 80;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 155;
                    hardLimitStart = 25;
                    linear = 1;
                    quadratic = 0.05;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_bulbwide: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Strong Flashlight (Wide)";
        descriptionUse = "Heavy duty flashlight";
        descriptionShort = "Heavy duty flashlight";
        MRT_SwitchItemNextClass = "gar_flashlight_bulb";
        MRT_SwitchItemPrevClass = "gar_flashlight_bulbfocused";
        MRT_switchItemHintText = "Wide";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Strong Flashlight (Wide)";
            class FlashLight {
                ambient[] = {0.9,0.81,0.7};
                color[] = {180,160,130};
                coneFadeCoef = 12;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 40;
                intensity = 2500;
                outerAngle = 140;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 75;
                    hardLimitStart = 1;
                    linear = 1;
                    quadratic = 0.2;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_bulbfocused: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Strong Flashlight (Beam)";
        descriptionUse = "Heavy duty flashlight";
        descriptionShort = "Heavy duty flashlight";
        MRT_SwitchItemNextClass = "gar_flashlight_bulbwide";
        MRT_SwitchItemPrevClass = "gar_flashlight_bulb";
        MRT_switchItemHintText = "Beam";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Strong Flashlight (Beam)";
            class FlashLight {
                ambient[] = {0.9,0.81,0.7};
                color[] = {180,160,130};
                coneFadeCoef = 32;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 10;
                intensity = 6000;
                outerAngle = 60;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 8;
                    hardLimitEnd = 180;
                    hardLimitStart = 25;
                    linear = 6;
                    quadratic = 0.01;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_bulb: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Strong Flashlight";
        descriptionUse = "Heavy duty flashlight";
        descriptionShort = "Heavy duty flashlight";
        MRT_SwitchItemNextClass = "gar_flashlight_bulbfocused";
        MRT_SwitchItemPrevClass = "gar_flashlight_bulbwide";
        MRT_switchItemHintText = "Default";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Strong Flashlight";
            class FlashLight {
                ambient[] = {0.9,0.81,0.7};
                color[] = {180,160,130};
                coneFadeCoef = 10;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 10;
                intensity = 4000;
                outerAngle = 80;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 105;
                    hardLimitStart = 15;
                    linear = 1;
                    quadratic = 0.05;
                    start = 0;
                };
            };
        };
    };

    class gar_flashlight_red: acc_flashlight {
        author = "G4rrus";
        scope = 2;
        displayName = "Flashlight Red";
        descriptionUse = "Red flashlight";
        descriptionShort = "Red flashlight";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=4;
            RMBhint="Flashlight Red";
            class FlashLight {
                ambient[] = {1,0,0};
                color[] = {255,0,0};
                coneFadeCoef = 8;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 60;
                flareSize = 0.5;
                innerAngle = 5;
                intensity = 80;
                outerAngle = 80;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 0.5;
                    hardLimitEnd = 26;
                    hardLimitStart = 19;
                    linear = 0.5;
                    quadratic = 0.01;
                    start = 0;
                };
            };
        };
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        gar_flashlight_ledwide = 1;
        gar_flashlight_ledfocused = 1;
        gar_flashlight_led = 1;
        gar_flashlight_bulbwide = 1;
        gar_flashlight_bulbfocused = 1;
        gar_flashlight_bulb = 1;
        gar_flashlight_red = 1;
    };
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        gar_flashlight_ledwide = 1;
        gar_flashlight_ledfocused = 1;
        gar_flashlight_led = 1;
        gar_flashlight_bulbwide = 1;
        gar_flashlight_bulbfocused = 1;
        gar_flashlight_bulb = 1;
        gar_flashlight_red = 1;
    };
};
