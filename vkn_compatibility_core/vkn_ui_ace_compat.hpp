class rscText;
class rscButton;
class rscPicture;
class rscActiveText;
class rscListBox;
class rscCombo;
class rscProgress;
class iGUIBack;
class rscStructuredText;
class rscCheckbox;
class rscFrame;
class rscEdit;
class RscActivePictureKeepAspect;
class rscActivePicture;
class rscButtonMenu;
class rscControlsGroupNoScrollbars;
class rscControlsGroupNoHScrollbars;
class RscButtonMenuMain;
class rscPictureKeepAspect;

class ctrlEdit;
class ctrlEditMulti;
class ctrlButton;
class ctrlButtonPicture;
class ctrlButtonClose;
class ctrlButtonCancel;
class ctrlButtonOK;
class ctrlButtonSearch;
class ctrlButtonCollapseAll;
class ctrlButtonExpandAll;
class ctrlButtonPictureKeepAspect;
class ctrlStructuredText;
class ctrlCombo;
class ctrlCheckbox;
class ctrlXSliderH;
class ctrlControlsGroup;
class ctrlControlsGroupNoScrollbars;
class ctrlMenuStrip;
class ctrlMenu;
class ctrlStaticBackground;
class ctrlStatic;
class ctrlStaticFooter;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticPictureKeepAspect;
class ctrlStaticPicture;
class ctrlStaticMulti;
class ctrlStaticTitle;
class ctrlStaticLine;
class ctrlTree;
class ctrlListbox;
class ctrlListNBox;
class ctrlToolbox;
class ctrlToolboxPictureKeepAspect;
class ctrlProgress;
class ctrlStaticFrame;
class scrollbar;
class ctrlShortcutButton;
class ctrlActivePicture;
class VKN_ctrlActivePicture : ctrlActivePicture
{
    colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
    colorBackgroundActive[] = {-1, -1, -1, -1};
};
class RscStandardDisplay;
class RscMainMenuSpotlight;
class controls;
class groupPicture;
class picture;
class Video;
class GroupHover;
class Overlay;
class LineLeft;
class LineRight;
class LineTop;
class LineBottom;
class TextBackground;
class Text;
class Button;
class QuickPlay;

class RscDisplayInventory
{
    class controls
    {
#include "\VKN_UI\rscDisplayInventory.hpp"
    };
};

class RscDisplayInventory_DLCTemplate
{
    class controls
    {
#include "\VKN_UI\rscDisplayInventory.hpp"
    };
}

class VKN_Inventory
{
    class controls
    {
#include "\VKN_UI\rscDisplayInventory.hpp"
    };
};
