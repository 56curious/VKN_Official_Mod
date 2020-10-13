class CfgPatches {
    class VKN_Sounds {
        name = VKN_Sounds;
        author = "Curious";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {0,1,0};

        units[] = {};

        requiredAddons[] = {};
    };
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class CfgSounds
{
    class Digging_Rubble {
      name = "Digging_Rubble";
      sound[] = {"\VKN_Sounds\Digging_Rubble.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class MovingMetal1 {
      name = "MovingMetal1";
      sound[] = {"\VKN_Sounds\MovingMetal1.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class MovingMetal2 {
      name = "MovingMetal2";
      sound[] = {"\VKN_Sounds\MovingMetal2.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class MovingMetal3 {
      name = "MovingMetal3";
      sound[] = {"\VKN_Sounds\MovingMetal3.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class Radio_Broadcast {
      name = "Radio_Broadcast";
      sound[] = {"\VKN_Sounds\Radio_Broadcast.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class Transmission_In {
      name = "Transmission_In";
      sound[] = {"\VKN_Sounds\Transmission_In.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class Transmission_Out {
      name = "Transmission_Out";
      sound[] = {"\VKN_Sounds\Transmission_Out.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class Water_Fountain {
      name = "Water_Fountain";
      sound[] = {"\VKN_Sounds\Water_Fountain.ogg", 1, 1.0};
      titles[] = {0, ""};
    };
    class murmur
    {
        name = "murmur";
        sound[] = {"\VKN_Sounds\emp\murmur.ogg", 0.8, 1.0};
        titles[] = {0, ""};
    };
    class geiger
    {
        name = "geiger";
        sound[] = {"\VKN_Sounds\emp\geiger.ogg", .7, 1.0};
        titles[] = {0, ""};
    };
    class spark1
    {
        name = "spark1";
        sound[] = {"\VKN_Sounds\emp\spark1.ogg", db+5, 1};
        titles[] = {};
    };
    class spark11
    {
        name = "spark11";
        sound[] = {"\VKN_Sounds\emp\spark11.ogg", db+5, 1};
        titles[] = {};
    };
    class spark2
    {
        name = "spark2";
        sound[] = {"\VKN_Sounds\emp\spark2.ogg", db+5, 1};
        titles[] = {};
    };
    class spark22
    {
        name = "spark22";
        sound[] = {"\VKN_Sounds\emp\spark22.ogg", db+5, 1};
        titles[] = {};
    };
    class spark3
    {
        name = "spark3";
        sound[] = {"\VKN_Sounds\emp\spark3.ogg", db+5, 1};
        titles[] = {};
    };
    class spark4
    {
        name = "spark4";
        sound[] = {"\VKN_Sounds\emp\spark4.ogg", db+5, 1};
        titles[] = {};
    };
    class spark5
    {
        name = "spark5";
        sound[] = {"\VKN_Sounds\emp\spark5.ogg", db+5, 1};
        titles[] = {};
    };
    class earthquake_02
    {
        name = "earthquake_02";
        sound[] = {"\VKN_Sounds\emp\earthquake_02.ogg",0.7, 1};
        titles[] = {1, ""};
    };
    class tiuit
    {
        name = "tiuit";
        sound[] = {"\VKN_Sounds\emp\tiuit.ogg", 0.2, 1.0};
        titles[] = {0, ""};
    };
        class bcg_wind
    {
        name = "bcg_wind";
        sound[] = {"\VKN_Sounds\monsoon\bcg_wind.ogg", db+5, 1};
        titles[] = {1, ""};
    };
    class rafala_1
    {
        name = "rafala_1";
        sound[] = {"\VKN_Sounds\monsoon\rafala_1.ogg", db+10, 1};
        titles[] = {1, ""};
    };
    class rafala_2
    {
        name = "rafala_2";
        sound[] = {"\VKN_Sounds\monsoon\rafala_2.ogg", db+5, 1};
        titles[] = {1, ""};
    };
    class rafala_4_dr
    {
        name = "rafala_4_dr";
        sound[] = {"\VKN_Sounds\monsoon\rafala_4_dr.ogg", db+10, 1};
        titles[] = {1, ""};
    };
    class rafala_5_st
    {
        name = "rafala_5_st";
        sound[] = {"\VKN_Sounds\monsoon\rafala_5_st.ogg", db+10, 1};
        titles[] = {1, ""};
    };
    class rafala_6
    {
        name = "rafala_6";
        sound[] = {"\VKN_Sounds\monsoon\rafala_6.ogg", db+15, 1};
        titles[] = {1, ""};
    };
    class rafala_7
    {
        name = "rafala_7";
        sound[] = {"\VKN_Sounds\monsoon\rafala_7.ogg", db+10, 1};
        titles[] = {1, ""};
    };
    class rafala_8
    {
        name = "rafala_8";
        sound[] = {"\VKN_Sounds\monsoon\rafala_8.ogg", db+15, 1};
        titles[] = {1, ""};
    };
    class rafala_9
    {
        name = "rafala_9";
        sound[] = {"\VKN_Sounds\monsoon\rafala_9.ogg", db+10, 1};
        titles[] = {1, ""};
    };
    class 01_far
    {
        name = "01_far";
        sound[] = {"\VKN_Sounds\monsoon\01_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 02_far
    {
        name = "02_far";
        sound[] = {"\VKN_Sounds\monsoon\02_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 03_far
    {
        name = "03_far";
        sound[] = {"\VKN_Sounds\monsoon\03_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 04_far
    {
        name = "04_far";
        sound[] = {"\VKN_Sounds\monsoon\04_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 05_far
    {
        name = "05_far";
        sound[] = {"\VKN_Sounds\monsoon\05_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 06_far
    {
        name = "06_far";
        sound[] = {"\VKN_Sounds\monsoon\06_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 07_far
    {
        name = "07_far";
        sound[] = {"\VKN_Sounds\monsoon\07_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 08_far
    {
        name = "08_far";
        sound[] = {"\VKN_Sounds\monsoon\08_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 09_far
    {
        name = "09_far";
        sound[] = {"\VKN_Sounds\monsoon\09_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 10_far
    {
        name = "10_far";
        sound[] = {"\VKN_Sounds\monsoon\10_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 11_far
    {
        name = "11_far";
        sound[] = {"\VKN_Sounds\monsoon\11_far.ogg",1, 1.0};
        titles[] = {0, ""};
    };
    class 12_far
    {
        name = "12_far";
        sound[] = {"\VKN_Sounds\monsoon\12_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 13_far
    {
        name = "13_far";
        sound[] = {"\VKN_Sounds\monsoon\13_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 14_far
    {
        name = "14_far";
        sound[] = {"\VKN_Sounds\monsoon\14_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 16_far
    {
        name = "16_far";
        sound[] = {"\VKN_Sounds\monsoon\16_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 17_far
    {
        name = "17_far";
        sound[] = {"\VKN_Sounds\monsoon\17_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 18_far
    {
        name = "18_far";
        sound[] = {"\VKN_Sounds\monsoon\18_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 19_far
    {
        name = "19_far";
        sound[] = {"\VKN_Sounds\monsoon\19_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 20_far
    {
        name = "20_far";
        sound[] = {"\VKN_Sounds\monsoon\20_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 21_far
    {
        name = "21_far";
        sound[] = {"\VKN_Sounds\monsoon\21_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 22_far
    {
        name = "22_far";
        sound[] = {"\VKN_Sounds\monsoon\22_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 23_far
    {
        name = "23_far";
        sound[] = {"\VKN_Sounds\monsoon\23_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 24_far
    {
        name = "24_far";
        sound[] = {"\VKN_Sounds\monsoon\24_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 25_far
    {
        name = "25_far";
        sound[] = {"\VKN_Sounds\monsoon\25_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 26_far
    {
        name = "26_far";
        sound[] = {"\VKN_Sounds\monsoon\26_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
    class 27_far
    {
        name = "27_far";
        sound[] = {"\VKN_Sounds\monsoon\27_far.ogg", 1, 1.0};
        titles[] = {0, ""};
    };
};
