/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 11.00
* Profile  : STM32F750
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationApplication.h"
#include "_ApplicationPanel.h"
#include "_ApplicationSTEP1.h"
#include "_ApplicationSTEP2.h"
#include "_ApplicationSTEP3.h"
#include "_ApplicationVirtualKeyboard.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Resources.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x000001C2, /* ratio 74.67 % */
  0xB8001900, 0x800AE452, 0x1C8C0034, 0x0002D004, 0x0073859B, 0x314001D0, 0x5322C0C1,
  0xA8719400, 0x8918C011, 0xB84C0114, 0x42A11068, 0x34002084, 0x0006F001, 0x38750019,
  0xA5494C6E, 0x1589C463, 0xB901262F, 0x94800DB1, 0xB81E4223, 0x18400428, 0x84D6008F,
  0x08717044, 0x3F1D3400, 0xE068A52A, 0x00819422, 0x70548474, 0xA3C4E331, 0xD4466313,
  0xC903714A, 0xAA7F2785, 0xA612E964, 0x5B4EB54C, 0x373001BA, 0x20A357A5, 0x490D66C5,
  0x909622E0, 0x00C62E32, 0x00067810, 0x006A001A, 0x06E001B0, 0x72001C00, 0xE0018000,
  0x0038801B, 0x039474EE, 0x845B8F52, 0xE000E12D, 0xDE056007, 0x00CD2F88, 0x8014F338,
  0xED1CA49A, 0x20072001, 0x79000F28, 0x6A41E000, 0xBA188007, 0x00B27C00, 0x5AA182E0,
  0x96097D8A, 0x0BD17BE0, 0x007E8273, 0x40010C5F, 0x00538004, 0x6E580048, 0x000BC002,
  0x00A40028, 0x0FC003D0, 0x16B05100, 0x40052001, 0xAA002D4D, 0x04F9D800, 0x006E55C0,
  0x02080054, 0x84912320, 0x00011C00, 0x01280012, 0x300012C0, 0x00358001, 0x09C00310,
  0x4000F800, 0xE5FC0016, 0x14001594, 0x3B5AC4E5, 0x71C5F5EC, 0x10145121, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ -480, 0 }, { 0, 272 }};
static const XRect _Const0002 = {{ 480, 0 }, { 960, 272 }};
static const XPoint _Const0003 = { 0, 0 };
static const XColor _Const0004 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0005 = {{ 14, 86 }, { 164, 136 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XRect _Const0007 = {{ 256, 198 }, { 406, 248 }};
static const XStringRes _Const0008 = { _StringsDefault0, 0x000E };
static const XRect _Const0009 = {{ 5, 28 }, { 174, 58 }};
static const XStringRes _Const000A = { _StringsDefault0, 0x0017 };
static const XRect _Const000B = {{ 211, 30 }, { 451, 166 }};
static const XRect _Const000C = {{ 197, 27 }, { 465, 177 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x002A };
static const XColor _Const000E = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const000F = {{ 0, 0 }, { 90, 50 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0033 };
static const XRect _Const0011 = {{ 390, 0 }, { 480, 50 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x003A };
static const XRect _Const0013 = {{ 73, 57 }, { 157, 87 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x0042 };
static const XRect _Const0015 = {{ 139, 10 }, { 223, 40 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x0048 };
static const XRect _Const0017 = {{ 139, 50 }, { 401, 94 }};
static const XRect _Const0018 = {{ 145, 57 }, { 395, 87 }};
static const XRect _Const0019 = {{ 6, 103 }, { 476, 273 }};
static const XRect _Const001A = {{ 14, 198 }, { 164, 248 }};
static const XRect _Const001B = {{ 71, 92 }, { 316, 122 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0052 };
static const XRect _Const001D = {{ 316, 89 }, { 355, 125 }};
static const XRect _Const001E = {{ 0, 0 }, { 470, 170 }};
static const XColor _Const001F = { 0x00, 0x00, 0x00, 0x40 };
static const XPoint _Const0020 = { 10, 160 };
static const XPoint _Const0021 = { 460, 160 };
static const XPoint _Const0022 = { 460, 10 };
static const XPoint _Const0023 = { 10, 9 };
static const XRect _Const0024 = {{ 40, 10 }, { 70, 40 }};
static const XRect _Const0025 = {{ 70, 10 }, { 100, 40 }};
static const XRect _Const0026 = {{ 100, 10 }, { 130, 40 }};
static const XRect _Const0027 = {{ 130, 10 }, { 160, 40 }};
static const XRect _Const0028 = {{ 160, 10 }, { 190, 40 }};
static const XRect _Const0029 = {{ 190, 10 }, { 220, 40 }};
static const XRect _Const002A = {{ 220, 10 }, { 250, 40 }};
static const XRect _Const002B = {{ 250, 10 }, { 280, 40 }};
static const XRect _Const002C = {{ 280, 10 }, { 310, 40 }};
static const XRect _Const002D = {{ 310, 10 }, { 340, 40 }};
static const XRect _Const002E = {{ 340, 10 }, { 370, 40 }};
static const XRect _Const002F = {{ 50, 40 }, { 80, 70 }};
static const XRect _Const0030 = {{ 80, 40 }, { 110, 70 }};
static const XRect _Const0031 = {{ 110, 40 }, { 140, 70 }};
static const XRect _Const0032 = {{ 140, 40 }, { 170, 70 }};
static const XRect _Const0033 = {{ 170, 40 }, { 200, 70 }};
static const XRect _Const0034 = {{ 200, 40 }, { 230, 70 }};
static const XRect _Const0035 = {{ 230, 40 }, { 260, 70 }};
static const XRect _Const0036 = {{ 260, 40 }, { 290, 70 }};
static const XRect _Const0037 = {{ 290, 40 }, { 320, 70 }};
static const XRect _Const0038 = {{ 320, 40 }, { 350, 70 }};
static const XRect _Const0039 = {{ 350, 40 }, { 380, 70 }};
static const XRect _Const003A = {{ 380, 40 }, { 410, 70 }};
static const XRect _Const003B = {{ 60, 70 }, { 90, 100 }};
static const XRect _Const003C = {{ 90, 70 }, { 120, 100 }};
static const XRect _Const003D = {{ 120, 70 }, { 150, 100 }};
static const XRect _Const003E = {{ 150, 70 }, { 180, 100 }};
static const XRect _Const003F = {{ 180, 70 }, { 210, 100 }};
static const XRect _Const0040 = {{ 210, 70 }, { 240, 100 }};
static const XRect _Const0041 = {{ 240, 70 }, { 270, 100 }};
static const XRect _Const0042 = {{ 270, 70 }, { 300, 100 }};
static const XRect _Const0043 = {{ 300, 70 }, { 330, 100 }};
static const XRect _Const0044 = {{ 330, 70 }, { 360, 100 }};
static const XRect _Const0045 = {{ 360, 70 }, { 390, 100 }};
static const XRect _Const0046 = {{ 390, 70 }, { 420, 100 }};
static const XRect _Const0047 = {{ 50, 100 }, { 80, 130 }};
static const XRect _Const0048 = {{ 80, 100 }, { 110, 130 }};
static const XRect _Const0049 = {{ 110, 100 }, { 140, 130 }};
static const XRect _Const004A = {{ 140, 100 }, { 170, 130 }};
static const XRect _Const004B = {{ 170, 100 }, { 200, 130 }};
static const XRect _Const004C = {{ 200, 100 }, { 230, 130 }};
static const XRect _Const004D = {{ 230, 100 }, { 260, 130 }};
static const XRect _Const004E = {{ 260, 100 }, { 290, 130 }};
static const XRect _Const004F = {{ 290, 100 }, { 320, 130 }};
static const XRect _Const0050 = {{ 320, 100 }, { 350, 130 }};
static const XRect _Const0051 = {{ 350, 100 }, { 380, 130 }};
static const XRect _Const0052 = {{ 130, 130 }, { 330, 160 }};
static const XRect _Const0053 = {{ 10, 40 }, { 50, 70 }};
static const XRect _Const0054 = {{ 10, 70 }, { 60, 100 }};
static const XRect _Const0055 = {{ 10, 100 }, { 50, 130 }};
static const XRect _Const0056 = {{ 400, 10 }, { 460, 40 }};
static const XRect _Const0057 = {{ 420, 40 }, { 460, 100 }};
static const XRect _Const0058 = {{ 380, 100 }, { 460, 130 }};
static const XStringRes _Const0059 = { _StringsDefault0, 0x006D };
static const XColor _Const005A = { 0x44, 0x44, 0x44, 0xFF };
static const XStringRes _Const005B = { _StringsDefault0, 0x0071 };
static const XStringRes _Const005C = { _StringsDefault0, 0x00A3 };
static const XStringRes _Const005D = { _StringsDefault0, 0x00A7 };
static const XStringRes _Const005E = { _StringsDefault0, 0x00AB };
static const XStringRes _Const005F = { _StringsDefault0, 0x00AF };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  CoreOutline__Init( &_this->Outline, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->STEP_Status = 1;
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreOutline__ReInit( &_this->Outline );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  CoreOutline__Done( &_this->Outline );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationApplication_STEPControl( _this );
}

/* 'C' function for method : 'Application::Application.STEP1_Slot()' */
void ApplicationApplication_STEP1_Slot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationApplication_OnSetSTEP_Status( _this, 2 );
  ApplicationApplication_STEPControl( _this );
}

/* 'C' function for method : 'Application::Application.STEP2_1Slot()' */
void ApplicationApplication_STEP2_1Slot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationApplication_OnSetSTEP_Status( _this, 1 );
  ApplicationApplication_STEPControl( _this );
}

/* 'C' function for method : 'Application::Application.STEP2_2Slot()' */
void ApplicationApplication_STEP2_2Slot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationApplication_OnSetSTEP_Status( _this, 3 );
  ApplicationApplication_STEPControl( _this );
}

/* 'C' function for method : 'Application::Application.OnSetSTEP_Status()' */
void ApplicationApplication_OnSetSTEP_Status( ApplicationApplication _this, XInt32 
  value )
{
  if ( _this->STEP_Status == value )
    return;

  _this->STEP_Status = value;
}

/* This function returns the number of days in the month and year specified in the 
   method parameters aMonth and aYear. The function takes care of the February and 
   its dependency of the leap year. */
void ApplicationApplication_STEPControl( ApplicationApplication _this )
{
  if ( _this->LeftLabel != 0 )
  {
    CoreGroup__Remove( _this, ((CoreView)_this->LeftLabel ));
    _this->LeftLabel = 0;
  }

  if ( _this->MainLabel != 0 )
  {
    CoreGroup__Remove( _this, ((CoreView)_this->MainLabel ));
    _this->MainLabel = 0;
  }

  if ( _this->RightLabel != 0 )
  {
    CoreGroup__Remove( _this, ((CoreView)_this->RightLabel ));
    _this->RightLabel = 0;
  }

  if ( _this->STEP_Status == 1 )
  {
    _this->LeftLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP2, 0 ));
    _this->MainLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP1, 0 ));
    _this->RightLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP2, 0 ));
    _this->MainLabel->OnNext = EwNewSlot( _this, ApplicationApplication_STEP1_Slot );
  }
  else
    if ( _this->STEP_Status == 2 )
    {
      _this->LeftLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP1, 0 ));
      _this->MainLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP2, 0 ));
      _this->RightLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP3, 0 ));
      _this->MainLabel->OnPrev = EwNewSlot( _this, ApplicationApplication_STEP2_1Slot );
      _this->MainLabel->OnNext = EwNewSlot( _this, ApplicationApplication_STEP2_2Slot );
    }
    else
      if ( _this->STEP_Status == 3 )
      {
        _this->LeftLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP2, 0 ));
        _this->MainLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP3, 0 ));
        _this->RightLabel = ((ApplicationPanel)EwNewObject( ApplicationSTEP2, 0 ));
        _this->MainLabel->OnPrev = EwNewSlot( _this, ApplicationApplication_STEP1_Slot );
      }

  CoreRectView__OnSetBounds( _this->LeftLabel, _Const0001 );
  CoreRectView__OnSetBounds( _this->MainLabel, _Const0000 );
  CoreRectView__OnSetBounds( _this->RightLabel, _Const0002 );
  CoreOutline_OnSetScrollOffset( &_this->Outline, _Const0003 );
  CoreGroup_OnSetEmbedded((CoreGroup)_this->LeftLabel, 1 );
  CoreGroup_OnSetEmbedded((CoreGroup)_this->MainLabel, 1 );
  CoreGroup_OnSetEmbedded((CoreGroup)_this->RightLabel, 1 );
  CoreGroup__AddBehind( _this, ((CoreView)_this->LeftLabel ), 0 );
  CoreGroup__AddBehind( _this, ((CoreView)_this->MainLabel ), 0 );
  CoreGroup__AddBehind( _this, ((CoreView)_this->RightLabel ), 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, LeftLabel, Outline, Outline, 
                 Outline, STEP_Status, STEP_Status, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::STEP1' */
void ApplicationSTEP1__Init( ApplicationSTEP1 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationPanel__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSTEP1 );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->ListBtn, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->SelectBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSTEP1 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0004 );
  CoreRectView__OnSetBounds( &_this->ListBtn, _Const0005 );
  WidgetSetPushButton_OnSetLabel( &_this->ListBtn, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->SelectBtn, _Const0007 );
  WidgetSetPushButton_OnSetLabel( &_this->SelectBtn, EwLoadString( &_Const0008 ));
  CoreRectView__OnSetBounds( &_this->Text, _Const0009 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const000A ));
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const000B );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 10 );
  CoreRectView__OnSetBounds( &_this->Border, _Const000C );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SelectBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  WidgetSetPushButton_OnSetAppearance( &_this->ListBtn, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  _this->SelectBtn.OnEnter = EwNewSlot( _this, ApplicationSTEP1_OnEnter );
  WidgetSetPushButton_OnSetAppearance( &_this->SelectBtn, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationSTEP1_OnLoadItem );
}

/* Re-Initializer for the class 'Application::STEP1' */
void ApplicationSTEP1__ReInit( ApplicationSTEP1 _this )
{
  /* At first re-initialize the super class ... */
  ApplicationPanel__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  WidgetSetPushButton__ReInit( &_this->ListBtn );
  WidgetSetPushButton__ReInit( &_this->SelectBtn );
  ViewsText__ReInit( &_this->Text );
  CoreVerticalList__ReInit( &_this->VerticalList );
  ViewsBorder__ReInit( &_this->Border );
}

/* Finalizer method for the class 'Application::STEP1' */
void ApplicationSTEP1__Done( ApplicationSTEP1 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationPanel );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  WidgetSetPushButton__Done( &_this->ListBtn );
  WidgetSetPushButton__Done( &_this->SelectBtn );
  ViewsText__Done( &_this->Text );
  CoreVerticalList__Done( &_this->VerticalList );
  ViewsBorder__Done( &_this->Border );

  /* Don't forget to deinitialize the super class ... */
  ApplicationPanel__Done( &_this->_.Super );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationSTEP1_OnLoadItem( ApplicationSTEP1 _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, ViewsText );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( itemView, EwConcatString( EwLoadString( &_Const000D ), 
  EwNewStringInt( itemNo, 0, 10 )));
  ViewsText_OnSetFont( itemView, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetColor( itemView, _Const000E );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), 24 )));
}

/* 'C' function for method : 'Application::STEP1.OnEnter()' */
void ApplicationSTEP1_OnEnter( ApplicationSTEP1 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->Super1.OnNext, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::STEP1' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSTEP1 )
EW_END_OF_CLASS_VARIANTS( ApplicationSTEP1 )

/* Virtual Method Table (VMT) for the class : 'Application::STEP1' */
EW_DEFINE_CLASS( ApplicationSTEP1, ApplicationPanel, Background, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::STEP1" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSTEP1 )

/* Initializer for the class 'Application::STEP2' */
void ApplicationSTEP2__Init( ApplicationSTEP2 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationPanel__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSTEP2 );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->BackBtn, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->NextBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->PW_Font, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Status_Font, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->PW_Input, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler1, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler2, &_this->_.XObject, 0 );
  ApplicationVirtualKeyboard__Init( &_this->VKeyBoard, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSTEP2 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0004 );
  CoreRectView__OnSetBounds( &_this->BackBtn, _Const000F );
  WidgetSetPushButton_OnSetLabel( &_this->BackBtn, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->NextBtn, _Const0011 );
  WidgetSetPushButton_OnSetLabel( &_this->NextBtn, EwLoadString( &_Const0012 ));
  CoreRectView__OnSetBounds( &_this->PW_Font, _Const0013 );
  ViewsText_OnSetString( &_this->PW_Font, EwLoadString( &_Const0014 ));
  CoreRectView__OnSetBounds( &_this->Status_Font, _Const0015 );
  ViewsText_OnSetString( &_this->Status_Font, EwLoadString( &_Const0016 ));
  CoreRectView__OnSetBounds( &_this->Border, _Const0017 );
  CoreRectView__OnSetBounds( &_this->PW_Input, _Const0018 );
  ViewsText_OnSetString( &_this->PW_Input, 0 );
  _this->KeyHandler1.Filter = CoreKeyCodeCharacterKeys;
  _this->KeyHandler2.Filter = CoreKeyCodeClear;
  CoreRectView__OnSetBounds( &_this->VKeyBoard, _Const0019 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NextBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PW_Font ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Status_Font ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PW_Input ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VKeyBoard ), 0 );
  _this->BackBtn.OnEnter = EwNewSlot( _this, ApplicationSTEP2_OnBackEnter );
  WidgetSetPushButton_OnSetAppearance( &_this->BackBtn, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  _this->NextBtn.OnEnter = EwNewSlot( _this, ApplicationSTEP2_OnCheckEnter );
  WidgetSetPushButton_OnSetAppearance( &_this->NextBtn, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->PW_Font, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Status_Font, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->PW_Input, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->KeyHandler1.OnPress = EwNewSlot( _this, ApplicationSTEP2_OnPressKey1 );
  _this->KeyHandler1.OnHold = EwNewSlot( _this, ApplicationSTEP2_OnPressKey1 );
  _this->KeyHandler2.OnPress = EwNewSlot( _this, ApplicationSTEP2_OnPressKey2 );
  _this->KeyHandler2.OnHold = EwNewSlot( _this, ApplicationSTEP2_OnPressKey2 );
  _this->VKeyBoard.OnPressKey = EwNewSlot( _this, ApplicationSTEP2_OnKeyAction );
  _this->VKeyBoard.OutputKey = EwNewRef( _this, ApplicationSTEP2_OnGetTemp_String, 
  ApplicationSTEP2_OnSetTemp_String );

  /* Call the user defined constructor */
  ApplicationSTEP2_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::STEP2' */
void ApplicationSTEP2__ReInit( ApplicationSTEP2 _this )
{
  /* At first re-initialize the super class ... */
  ApplicationPanel__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  WidgetSetPushButton__ReInit( &_this->BackBtn );
  WidgetSetPushButton__ReInit( &_this->NextBtn );
  ViewsText__ReInit( &_this->PW_Font );
  ViewsText__ReInit( &_this->Status_Font );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->PW_Input );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler1 );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler2 );
  ApplicationVirtualKeyboard__ReInit( &_this->VKeyBoard );
}

/* Finalizer method for the class 'Application::STEP2' */
void ApplicationSTEP2__Done( ApplicationSTEP2 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationPanel );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  WidgetSetPushButton__Done( &_this->BackBtn );
  WidgetSetPushButton__Done( &_this->NextBtn );
  ViewsText__Done( &_this->PW_Font );
  ViewsText__Done( &_this->Status_Font );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->PW_Input );
  CoreKeyPressHandler__Done( &_this->KeyHandler1 );
  CoreKeyPressHandler__Done( &_this->KeyHandler2 );
  ApplicationVirtualKeyboard__Done( &_this->VKeyBoard );

  /* Don't forget to deinitialize the super class ... */
  ApplicationPanel__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSTEP2_Init( ApplicationSTEP2 _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::STEP2.OnPressKey1()' */
void ApplicationSTEP2_OnPressKey1( ApplicationSTEP2 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->PW_Input, EwConcatStringChar( _this->PW_Input.String, 
  _this->KeyHandler1.CharCode ));
}

/* 'C' function for method : 'Application::STEP2.OnPressKey2()' */
void ApplicationSTEP2_OnPressKey2( ApplicationSTEP2 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->PW_Input, EwStringLeft( _this->PW_Input.String, 
  EwGetStringLength( _this->PW_Input.String ) - 1 ));
}

/* 'C' function for method : 'Application::STEP2.OnCheckEnter()' */
void ApplicationSTEP2_OnCheckEnter( ApplicationSTEP2 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->Super1.OnNext, ((XObject)_this ));
}

/* 'C' function for method : 'Application::STEP2.OnBackEnter()' */
void ApplicationSTEP2_OnBackEnter( ApplicationSTEP2 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->Super1.OnPrev, ((XObject)_this ));
}

/* 'C' function for method : 'Application::STEP2.OnSetTemp_String()' */
void ApplicationSTEP2_OnSetTemp_String( ApplicationSTEP2 _this, XChar value )
{
  if ( _this->Temp_String == value )
    return;

  _this->Temp_String = value;
}

/* 'C' function for method : 'Application::STEP2.OnGetTemp_String()' */
XChar ApplicationSTEP2_OnGetTemp_String( ApplicationSTEP2 _this )
{
  return _this->Temp_String;
}

/* 'C' function for method : 'Application::STEP2.OnKeyAction()' */
void ApplicationSTEP2_OnKeyAction( ApplicationSTEP2 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Temp_String == 0x0000 )
    ViewsText_OnSetString( &_this->PW_Input, EwStringLeft( _this->PW_Input.String, 
    EwGetStringLength( _this->PW_Input.String ) - 1 ));
  else
    ViewsText_OnSetString( &_this->PW_Input, EwConcatStringChar( _this->PW_Input.String, 
    _this->Temp_String ));
}

/* Variants derived from the class : 'Application::STEP2' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSTEP2 )
EW_END_OF_CLASS_VARIANTS( ApplicationSTEP2 )

/* Virtual Method Table (VMT) for the class : 'Application::STEP2' */
EW_DEFINE_CLASS( ApplicationSTEP2, ApplicationPanel, Background, Background, Background, 
                 Background, Temp_String, Temp_String, "Application::STEP2" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSTEP2 )

/* Initializer for the class 'Application::STEP3' */
void ApplicationSTEP3__Init( ApplicationSTEP3 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationPanel__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSTEP3 );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSTEP3 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0004 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const001A );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->Text, _Const001B );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001C ));
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const001D );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  _this->PushButton.OnEnter = EwNewSlot( _this, ApplicationSTEP3_OnEnter );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::STEP3' */
void ApplicationSTEP3__ReInit( ApplicationSTEP3 _this )
{
  /* At first re-initialize the super class ... */
  ApplicationPanel__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  ViewsText__ReInit( &_this->Text );
  ViewsRectangle__ReInit( &_this->Rectangle );
}

/* Finalizer method for the class 'Application::STEP3' */
void ApplicationSTEP3__Done( ApplicationSTEP3 _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationPanel );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  WidgetSetPushButton__Done( &_this->PushButton );
  ViewsText__Done( &_this->Text );
  ViewsRectangle__Done( &_this->Rectangle );

  /* Don't forget to deinitialize the super class ... */
  ApplicationPanel__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::STEP3.OnEnter()' */
void ApplicationSTEP3_OnEnter( ApplicationSTEP3 _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->Super1.OnPrev, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::STEP3' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSTEP3 )
EW_END_OF_CLASS_VARIANTS( ApplicationSTEP3 )

/* Virtual Method Table (VMT) for the class : 'Application::STEP3' */
EW_DEFINE_CLASS( ApplicationSTEP3, ApplicationPanel, Background, Background, Background, 
                 Background, _.VMT, _.VMT, "Application::STEP3" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSTEP3 )

/* Initializer for the class 'Application::VirtualKeyboard' */
void ApplicationVirtualKeyboard__Init( ApplicationVirtualKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationVirtualKeyboard );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame01, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame02, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame03, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame04, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame05, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame06, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame07, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame08, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame09, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame10, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame11, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame12, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame13, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame14, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame15, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame16, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame17, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame18, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame19, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame20, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame21, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame22, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame23, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame24, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame25, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame26, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame27, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame28, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame29, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame30, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame31, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame32, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame33, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame34, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame35, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame36, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame37, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame38, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame39, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame40, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame41, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame42, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame43, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame44, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame45, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame46, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->Frame47, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameTab, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameCapsLock, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameShiftLeft, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameBackspace, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameReturn, &_this->_.XObject, 0 );
  ViewsFrame__Init( &_this->FrameShiftRight, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text01, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text02, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text03, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text04, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text05, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text06, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text07, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text08, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text09, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text10, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text11, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text12, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text13, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text14, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text15, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text16, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text17, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text18, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text19, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text20, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text21, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text22, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text23, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text24, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text25, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text26, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text27, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text28, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text29, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text30, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text31, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text32, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text33, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text34, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text35, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text36, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text37, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text38, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text39, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text40, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text41, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text42, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text43, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text44, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text45, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text46, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text47, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageTab, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageCapsLock, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageShiftLeft, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageBackspace, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageReturn, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageShiftRight, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationVirtualKeyboard );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const001E );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const001E );
  ViewsRectangle_OnSetColor( &_this->Background, _Const001F );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0020 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const0021 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const0022 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const0023 );
  _this->SimpleTouchHandler.EnableMultiTouch = 1;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 100 );
  CoreView_OnSetLayout((CoreView)&_this->Frame01, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame01, _Const0024 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame01, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame02, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame02, _Const0025 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame02, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame03, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame03, _Const0026 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame03, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame04, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame04, _Const0027 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame04, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame05, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame05, _Const0028 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame05, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame06, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame06, _Const0029 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame06, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame07, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame07, _Const002A );
  ViewsFrame_OnSetFrameNumber( &_this->Frame07, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame08, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame08, _Const002B );
  ViewsFrame_OnSetFrameNumber( &_this->Frame08, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame09, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame09, _Const002C );
  ViewsFrame_OnSetFrameNumber( &_this->Frame09, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame10, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame10, _Const002D );
  ViewsFrame_OnSetFrameNumber( &_this->Frame10, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame11, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame11, _Const002E );
  ViewsFrame_OnSetFrameNumber( &_this->Frame11, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame12, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame12, _Const002F );
  ViewsFrame_OnSetFrameNumber( &_this->Frame12, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame13, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame13, _Const0030 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame13, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame14, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame14, _Const0031 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame14, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame15, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame15, _Const0032 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame15, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame16, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame16, _Const0033 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame16, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame17, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame17, _Const0034 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame17, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame18, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame18, _Const0035 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame18, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame19, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame19, _Const0036 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame19, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame20, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame20, _Const0037 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame20, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame21, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame21, _Const0038 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame21, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame22, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame22, _Const0039 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame22, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame23, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame23, _Const003A );
  ViewsFrame_OnSetFrameNumber( &_this->Frame23, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame24, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame24, _Const003B );
  ViewsFrame_OnSetFrameNumber( &_this->Frame24, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame25, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame25, _Const003C );
  ViewsFrame_OnSetFrameNumber( &_this->Frame25, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame26, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame26, _Const003D );
  ViewsFrame_OnSetFrameNumber( &_this->Frame26, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame27, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame27, _Const003E );
  ViewsFrame_OnSetFrameNumber( &_this->Frame27, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame28, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame28, _Const003F );
  ViewsFrame_OnSetFrameNumber( &_this->Frame28, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame29, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame29, _Const0040 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame29, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame30, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame30, _Const0041 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame30, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame31, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame31, _Const0042 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame31, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame32, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame32, _Const0043 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame32, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame33, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame33, _Const0044 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame33, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame34, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame34, _Const0045 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame34, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame35, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame35, _Const0046 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame35, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame36, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame36, _Const0047 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame36, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame37, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame37, _Const0048 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame37, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame38, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame38, _Const0049 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame38, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame39, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame39, _Const004A );
  ViewsFrame_OnSetFrameNumber( &_this->Frame39, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame40, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame40, _Const004B );
  ViewsFrame_OnSetFrameNumber( &_this->Frame40, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame41, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame41, _Const004C );
  ViewsFrame_OnSetFrameNumber( &_this->Frame41, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame42, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame42, _Const004D );
  ViewsFrame_OnSetFrameNumber( &_this->Frame42, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame43, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame43, _Const004E );
  ViewsFrame_OnSetFrameNumber( &_this->Frame43, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame44, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame44, _Const004F );
  ViewsFrame_OnSetFrameNumber( &_this->Frame44, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame45, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame45, _Const0050 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame45, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame46, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame46, _Const0051 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame46, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Frame47, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Frame47, _Const0052 );
  ViewsFrame_OnSetFrameNumber( &_this->Frame47, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameTab, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameTab, _Const0053 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameTab, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameCapsLock, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameCapsLock, _Const0054 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameCapsLock, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameShiftLeft, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameShiftLeft, _Const0055 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameShiftLeft, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameBackspace, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameBackspace, _Const0056 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameBackspace, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameReturn, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameReturn, _Const0057 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameReturn, 2 );
  CoreView_OnSetLayout((CoreView)&_this->FrameShiftRight, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->FrameShiftRight, _Const0058 );
  ViewsFrame_OnSetFrameNumber( &_this->FrameShiftRight, 2 );
  CoreView_OnSetLayout((CoreView)&_this->Text01, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text01, _Const0024 );
  ViewsText_OnSetString( &_this->Text01, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text01, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text02, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text02, _Const0025 );
  ViewsText_OnSetString( &_this->Text02, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text02, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text03, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text03, _Const0026 );
  ViewsText_OnSetString( &_this->Text03, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text03, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text04, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text04, _Const0027 );
  ViewsText_OnSetString( &_this->Text04, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text04, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text05, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text05, _Const0028 );
  ViewsText_OnSetString( &_this->Text05, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text05, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text06, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text06, _Const0029 );
  ViewsText_OnSetString( &_this->Text06, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text06, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text07, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text07, _Const002A );
  ViewsText_OnSetString( &_this->Text07, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text07, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text08, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text08, _Const002B );
  ViewsText_OnSetString( &_this->Text08, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text08, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text09, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text09, _Const002C );
  ViewsText_OnSetString( &_this->Text09, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text09, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text10, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text10, _Const002D );
  ViewsText_OnSetString( &_this->Text10, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text10, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text11, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text11, _Const002E );
  ViewsText_OnSetString( &_this->Text11, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text11, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text12, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text12, _Const002F );
  ViewsText_OnSetString( &_this->Text12, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text12, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text13, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text13, _Const0030 );
  ViewsText_OnSetString( &_this->Text13, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text13, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text14, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text14, _Const0031 );
  ViewsText_OnSetString( &_this->Text14, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text14, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text15, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text15, _Const0032 );
  ViewsText_OnSetString( &_this->Text15, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text15, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text16, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text16, _Const0033 );
  ViewsText_OnSetString( &_this->Text16, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text16, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text17, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text17, _Const0034 );
  ViewsText_OnSetString( &_this->Text17, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text17, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text18, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text18, _Const0035 );
  ViewsText_OnSetString( &_this->Text18, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text18, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text19, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text19, _Const0036 );
  ViewsText_OnSetString( &_this->Text19, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text19, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text20, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text20, _Const0037 );
  ViewsText_OnSetString( &_this->Text20, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text20, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text21, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text21, _Const0038 );
  ViewsText_OnSetString( &_this->Text21, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text21, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text22, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text22, _Const0039 );
  ViewsText_OnSetString( &_this->Text22, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text22, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text23, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text23, _Const003A );
  ViewsText_OnSetString( &_this->Text23, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text23, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text24, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text24, _Const003B );
  ViewsText_OnSetString( &_this->Text24, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text24, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text25, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text25, _Const003C );
  ViewsText_OnSetString( &_this->Text25, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text25, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text26, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text26, _Const003D );
  ViewsText_OnSetString( &_this->Text26, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text26, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text27, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text27, _Const003E );
  ViewsText_OnSetString( &_this->Text27, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text27, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text28, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text28, _Const003F );
  ViewsText_OnSetString( &_this->Text28, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text28, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text29, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text29, _Const0040 );
  ViewsText_OnSetString( &_this->Text29, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text29, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text30, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text30, _Const0041 );
  ViewsText_OnSetString( &_this->Text30, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text30, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text31, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text31, _Const0042 );
  ViewsText_OnSetString( &_this->Text31, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text31, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text32, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text32, _Const0043 );
  ViewsText_OnSetString( &_this->Text32, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text32, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text33, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text33, _Const0044 );
  ViewsText_OnSetString( &_this->Text33, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text33, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text34, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text34, _Const0045 );
  ViewsText_OnSetString( &_this->Text34, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text34, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text35, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text35, _Const0046 );
  ViewsText_OnSetString( &_this->Text35, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text35, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text36, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text36, _Const0047 );
  ViewsText_OnSetString( &_this->Text36, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text36, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text37, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text37, _Const0048 );
  ViewsText_OnSetString( &_this->Text37, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text37, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text38, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text38, _Const0049 );
  ViewsText_OnSetString( &_this->Text38, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text38, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text39, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text39, _Const004A );
  ViewsText_OnSetString( &_this->Text39, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text39, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text40, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text40, _Const004B );
  ViewsText_OnSetString( &_this->Text40, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text40, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text41, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text41, _Const004C );
  ViewsText_OnSetString( &_this->Text41, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text41, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text42, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text42, _Const004D );
  ViewsText_OnSetString( &_this->Text42, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text42, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text43, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text43, _Const004E );
  ViewsText_OnSetString( &_this->Text43, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text43, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text44, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text44, _Const004F );
  ViewsText_OnSetString( &_this->Text44, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text44, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text45, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text45, _Const0050 );
  ViewsText_OnSetString( &_this->Text45, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text45, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text46, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text46, _Const0051 );
  ViewsText_OnSetString( &_this->Text46, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text46, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->Text47, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text47, _Const0052 );
  ViewsText_OnSetString( &_this->Text47, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Text47, _Const005A );
  CoreView_OnSetLayout((CoreView)&_this->ImageTab, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageTab, _Const0053 );
  ViewsImage_OnSetColor( &_this->ImageTab, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageTab, 5 );
  CoreView_OnSetLayout((CoreView)&_this->ImageCapsLock, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageCapsLock, _Const0054 );
  ViewsImage_OnSetColor( &_this->ImageCapsLock, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageCapsLock, 3 );
  CoreView_OnSetLayout((CoreView)&_this->ImageShiftLeft, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageShiftLeft, _Const0055 );
  ViewsImage_OnSetColor( &_this->ImageShiftLeft, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageShiftLeft, 2 );
  CoreView_OnSetLayout((CoreView)&_this->ImageBackspace, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageBackspace, _Const0056 );
  ViewsImage_OnSetColor( &_this->ImageBackspace, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageBackspace, 4 );
  CoreView_OnSetLayout((CoreView)&_this->ImageReturn, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageReturn, _Const0057 );
  ViewsImage_OnSetColor( &_this->ImageReturn, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageReturn, 6 );
  CoreView_OnSetLayout((CoreView)&_this->ImageShiftRight, CoreLayoutResizeHorz | 
  CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageShiftRight, _Const0058 );
  ViewsImage_OnSetColor( &_this->ImageShiftRight, _Const005A );
  ViewsImage_OnSetFrameNumber( &_this->ImageShiftRight, 2 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame01 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame02 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame03 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame04 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame05 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame06 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame07 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame08 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame09 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame12 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame13 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame14 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame15 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame16 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame17 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame18 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame19 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame20 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame21 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame22 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame23 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame24 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame26 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame27 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame28 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame29 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame31 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame32 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame33 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame34 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame35 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame36 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame37 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame38 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame39 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame40 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame41 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame42 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame43 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame44 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame45 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame46 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame47 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameTab ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameCapsLock ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameShiftLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameBackspace ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameReturn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FrameShiftRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text01 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text02 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text03 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text04 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text05 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text06 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text07 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text08 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text09 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text12 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text13 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text14 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text15 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text16 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text17 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text18 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text19 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text20 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text21 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text22 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text23 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text24 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text26 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text27 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text28 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text29 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text31 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text32 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text33 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text34 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text35 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text36 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text37 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text38 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text39 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text40 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text41 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text42 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text43 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text44 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text45 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text46 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text47 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageTab ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageCapsLock ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageShiftLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageBackspace ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageReturn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageShiftRight ), 0 );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationVirtualKeyboard_onDrag );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationVirtualKeyboard_onRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationVirtualKeyboard_onPress );
  ViewsFrame_OnSetBitmap( &_this->Frame01, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame02, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame03, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame04, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame05, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame06, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame07, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame08, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame09, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame10, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame11, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame12, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame13, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame14, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame15, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame16, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame17, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame18, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame19, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame20, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame21, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame22, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame23, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame24, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame25, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame26, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame27, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame28, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame29, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame30, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame31, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame32, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame33, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame34, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame35, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame36, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame37, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame38, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame39, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame40, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame41, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame42, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame43, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame44, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame45, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame46, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->Frame47, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameTab, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameCapsLock, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameShiftLeft, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameBackspace, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameReturn, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsFrame_OnSetBitmap( &_this->FrameShiftRight, EwLoadResource( &ApplicationFlatButtonFrame, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text01, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text02, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text03, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text04, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text05, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text06, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text07, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text08, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text09, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text10, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text11, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text12, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text13, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text14, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text15, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text16, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text17, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text18, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text19, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text20, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text21, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text22, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text23, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text24, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text25, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text26, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text27, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text28, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text29, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text30, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text31, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text32, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text33, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text34, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text35, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text36, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text37, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text38, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text39, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text40, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text41, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text42, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text43, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text44, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text45, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text46, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text47, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->ImageTab, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageCapsLock, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageShiftLeft, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageBackspace, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageReturn, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageShiftRight, EwLoadResource( &ResourcesKeyIconsMedium, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationVirtualKeyboard_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::VirtualKeyboard' */
void ApplicationVirtualKeyboard__ReInit( ApplicationVirtualKeyboard _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsFrame__ReInit( &_this->Frame01 );
  ViewsFrame__ReInit( &_this->Frame02 );
  ViewsFrame__ReInit( &_this->Frame03 );
  ViewsFrame__ReInit( &_this->Frame04 );
  ViewsFrame__ReInit( &_this->Frame05 );
  ViewsFrame__ReInit( &_this->Frame06 );
  ViewsFrame__ReInit( &_this->Frame07 );
  ViewsFrame__ReInit( &_this->Frame08 );
  ViewsFrame__ReInit( &_this->Frame09 );
  ViewsFrame__ReInit( &_this->Frame10 );
  ViewsFrame__ReInit( &_this->Frame11 );
  ViewsFrame__ReInit( &_this->Frame12 );
  ViewsFrame__ReInit( &_this->Frame13 );
  ViewsFrame__ReInit( &_this->Frame14 );
  ViewsFrame__ReInit( &_this->Frame15 );
  ViewsFrame__ReInit( &_this->Frame16 );
  ViewsFrame__ReInit( &_this->Frame17 );
  ViewsFrame__ReInit( &_this->Frame18 );
  ViewsFrame__ReInit( &_this->Frame19 );
  ViewsFrame__ReInit( &_this->Frame20 );
  ViewsFrame__ReInit( &_this->Frame21 );
  ViewsFrame__ReInit( &_this->Frame22 );
  ViewsFrame__ReInit( &_this->Frame23 );
  ViewsFrame__ReInit( &_this->Frame24 );
  ViewsFrame__ReInit( &_this->Frame25 );
  ViewsFrame__ReInit( &_this->Frame26 );
  ViewsFrame__ReInit( &_this->Frame27 );
  ViewsFrame__ReInit( &_this->Frame28 );
  ViewsFrame__ReInit( &_this->Frame29 );
  ViewsFrame__ReInit( &_this->Frame30 );
  ViewsFrame__ReInit( &_this->Frame31 );
  ViewsFrame__ReInit( &_this->Frame32 );
  ViewsFrame__ReInit( &_this->Frame33 );
  ViewsFrame__ReInit( &_this->Frame34 );
  ViewsFrame__ReInit( &_this->Frame35 );
  ViewsFrame__ReInit( &_this->Frame36 );
  ViewsFrame__ReInit( &_this->Frame37 );
  ViewsFrame__ReInit( &_this->Frame38 );
  ViewsFrame__ReInit( &_this->Frame39 );
  ViewsFrame__ReInit( &_this->Frame40 );
  ViewsFrame__ReInit( &_this->Frame41 );
  ViewsFrame__ReInit( &_this->Frame42 );
  ViewsFrame__ReInit( &_this->Frame43 );
  ViewsFrame__ReInit( &_this->Frame44 );
  ViewsFrame__ReInit( &_this->Frame45 );
  ViewsFrame__ReInit( &_this->Frame46 );
  ViewsFrame__ReInit( &_this->Frame47 );
  ViewsFrame__ReInit( &_this->FrameTab );
  ViewsFrame__ReInit( &_this->FrameCapsLock );
  ViewsFrame__ReInit( &_this->FrameShiftLeft );
  ViewsFrame__ReInit( &_this->FrameBackspace );
  ViewsFrame__ReInit( &_this->FrameReturn );
  ViewsFrame__ReInit( &_this->FrameShiftRight );
  ViewsText__ReInit( &_this->Text01 );
  ViewsText__ReInit( &_this->Text02 );
  ViewsText__ReInit( &_this->Text03 );
  ViewsText__ReInit( &_this->Text04 );
  ViewsText__ReInit( &_this->Text05 );
  ViewsText__ReInit( &_this->Text06 );
  ViewsText__ReInit( &_this->Text07 );
  ViewsText__ReInit( &_this->Text08 );
  ViewsText__ReInit( &_this->Text09 );
  ViewsText__ReInit( &_this->Text10 );
  ViewsText__ReInit( &_this->Text11 );
  ViewsText__ReInit( &_this->Text12 );
  ViewsText__ReInit( &_this->Text13 );
  ViewsText__ReInit( &_this->Text14 );
  ViewsText__ReInit( &_this->Text15 );
  ViewsText__ReInit( &_this->Text16 );
  ViewsText__ReInit( &_this->Text17 );
  ViewsText__ReInit( &_this->Text18 );
  ViewsText__ReInit( &_this->Text19 );
  ViewsText__ReInit( &_this->Text20 );
  ViewsText__ReInit( &_this->Text21 );
  ViewsText__ReInit( &_this->Text22 );
  ViewsText__ReInit( &_this->Text23 );
  ViewsText__ReInit( &_this->Text24 );
  ViewsText__ReInit( &_this->Text25 );
  ViewsText__ReInit( &_this->Text26 );
  ViewsText__ReInit( &_this->Text27 );
  ViewsText__ReInit( &_this->Text28 );
  ViewsText__ReInit( &_this->Text29 );
  ViewsText__ReInit( &_this->Text30 );
  ViewsText__ReInit( &_this->Text31 );
  ViewsText__ReInit( &_this->Text32 );
  ViewsText__ReInit( &_this->Text33 );
  ViewsText__ReInit( &_this->Text34 );
  ViewsText__ReInit( &_this->Text35 );
  ViewsText__ReInit( &_this->Text36 );
  ViewsText__ReInit( &_this->Text37 );
  ViewsText__ReInit( &_this->Text38 );
  ViewsText__ReInit( &_this->Text39 );
  ViewsText__ReInit( &_this->Text40 );
  ViewsText__ReInit( &_this->Text41 );
  ViewsText__ReInit( &_this->Text42 );
  ViewsText__ReInit( &_this->Text43 );
  ViewsText__ReInit( &_this->Text44 );
  ViewsText__ReInit( &_this->Text45 );
  ViewsText__ReInit( &_this->Text46 );
  ViewsText__ReInit( &_this->Text47 );
  ViewsImage__ReInit( &_this->ImageTab );
  ViewsImage__ReInit( &_this->ImageCapsLock );
  ViewsImage__ReInit( &_this->ImageShiftLeft );
  ViewsImage__ReInit( &_this->ImageBackspace );
  ViewsImage__ReInit( &_this->ImageReturn );
  ViewsImage__ReInit( &_this->ImageShiftRight );
}

/* Finalizer method for the class 'Application::VirtualKeyboard' */
void ApplicationVirtualKeyboard__Done( ApplicationVirtualKeyboard _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsFrame__Done( &_this->Frame01 );
  ViewsFrame__Done( &_this->Frame02 );
  ViewsFrame__Done( &_this->Frame03 );
  ViewsFrame__Done( &_this->Frame04 );
  ViewsFrame__Done( &_this->Frame05 );
  ViewsFrame__Done( &_this->Frame06 );
  ViewsFrame__Done( &_this->Frame07 );
  ViewsFrame__Done( &_this->Frame08 );
  ViewsFrame__Done( &_this->Frame09 );
  ViewsFrame__Done( &_this->Frame10 );
  ViewsFrame__Done( &_this->Frame11 );
  ViewsFrame__Done( &_this->Frame12 );
  ViewsFrame__Done( &_this->Frame13 );
  ViewsFrame__Done( &_this->Frame14 );
  ViewsFrame__Done( &_this->Frame15 );
  ViewsFrame__Done( &_this->Frame16 );
  ViewsFrame__Done( &_this->Frame17 );
  ViewsFrame__Done( &_this->Frame18 );
  ViewsFrame__Done( &_this->Frame19 );
  ViewsFrame__Done( &_this->Frame20 );
  ViewsFrame__Done( &_this->Frame21 );
  ViewsFrame__Done( &_this->Frame22 );
  ViewsFrame__Done( &_this->Frame23 );
  ViewsFrame__Done( &_this->Frame24 );
  ViewsFrame__Done( &_this->Frame25 );
  ViewsFrame__Done( &_this->Frame26 );
  ViewsFrame__Done( &_this->Frame27 );
  ViewsFrame__Done( &_this->Frame28 );
  ViewsFrame__Done( &_this->Frame29 );
  ViewsFrame__Done( &_this->Frame30 );
  ViewsFrame__Done( &_this->Frame31 );
  ViewsFrame__Done( &_this->Frame32 );
  ViewsFrame__Done( &_this->Frame33 );
  ViewsFrame__Done( &_this->Frame34 );
  ViewsFrame__Done( &_this->Frame35 );
  ViewsFrame__Done( &_this->Frame36 );
  ViewsFrame__Done( &_this->Frame37 );
  ViewsFrame__Done( &_this->Frame38 );
  ViewsFrame__Done( &_this->Frame39 );
  ViewsFrame__Done( &_this->Frame40 );
  ViewsFrame__Done( &_this->Frame41 );
  ViewsFrame__Done( &_this->Frame42 );
  ViewsFrame__Done( &_this->Frame43 );
  ViewsFrame__Done( &_this->Frame44 );
  ViewsFrame__Done( &_this->Frame45 );
  ViewsFrame__Done( &_this->Frame46 );
  ViewsFrame__Done( &_this->Frame47 );
  ViewsFrame__Done( &_this->FrameTab );
  ViewsFrame__Done( &_this->FrameCapsLock );
  ViewsFrame__Done( &_this->FrameShiftLeft );
  ViewsFrame__Done( &_this->FrameBackspace );
  ViewsFrame__Done( &_this->FrameReturn );
  ViewsFrame__Done( &_this->FrameShiftRight );
  ViewsText__Done( &_this->Text01 );
  ViewsText__Done( &_this->Text02 );
  ViewsText__Done( &_this->Text03 );
  ViewsText__Done( &_this->Text04 );
  ViewsText__Done( &_this->Text05 );
  ViewsText__Done( &_this->Text06 );
  ViewsText__Done( &_this->Text07 );
  ViewsText__Done( &_this->Text08 );
  ViewsText__Done( &_this->Text09 );
  ViewsText__Done( &_this->Text10 );
  ViewsText__Done( &_this->Text11 );
  ViewsText__Done( &_this->Text12 );
  ViewsText__Done( &_this->Text13 );
  ViewsText__Done( &_this->Text14 );
  ViewsText__Done( &_this->Text15 );
  ViewsText__Done( &_this->Text16 );
  ViewsText__Done( &_this->Text17 );
  ViewsText__Done( &_this->Text18 );
  ViewsText__Done( &_this->Text19 );
  ViewsText__Done( &_this->Text20 );
  ViewsText__Done( &_this->Text21 );
  ViewsText__Done( &_this->Text22 );
  ViewsText__Done( &_this->Text23 );
  ViewsText__Done( &_this->Text24 );
  ViewsText__Done( &_this->Text25 );
  ViewsText__Done( &_this->Text26 );
  ViewsText__Done( &_this->Text27 );
  ViewsText__Done( &_this->Text28 );
  ViewsText__Done( &_this->Text29 );
  ViewsText__Done( &_this->Text30 );
  ViewsText__Done( &_this->Text31 );
  ViewsText__Done( &_this->Text32 );
  ViewsText__Done( &_this->Text33 );
  ViewsText__Done( &_this->Text34 );
  ViewsText__Done( &_this->Text35 );
  ViewsText__Done( &_this->Text36 );
  ViewsText__Done( &_this->Text37 );
  ViewsText__Done( &_this->Text38 );
  ViewsText__Done( &_this->Text39 );
  ViewsText__Done( &_this->Text40 );
  ViewsText__Done( &_this->Text41 );
  ViewsText__Done( &_this->Text42 );
  ViewsText__Done( &_this->Text43 );
  ViewsText__Done( &_this->Text44 );
  ViewsText__Done( &_this->Text45 );
  ViewsText__Done( &_this->Text46 );
  ViewsText__Done( &_this->Text47 );
  ViewsImage__Done( &_this->ImageTab );
  ViewsImage__Done( &_this->ImageCapsLock );
  ViewsImage__Done( &_this->ImageShiftLeft );
  ViewsImage__Done( &_this->ImageBackspace );
  ViewsImage__Done( &_this->ImageReturn );
  ViewsImage__Done( &_this->ImageShiftRight );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationVirtualKeyboard_Init( ApplicationVirtualKeyboard _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationVirtualKeyboard_loadLayoutFromString( _this, EwLoadString( &_Const005B ));
}

/* This method loads new keyboard layout. The layout is determined by the passed 
   string parameter aLayoutString. The characters within the string correspond to 
   the keys accordingly their order. */
void ApplicationVirtualKeyboard_loadLayoutFromString( ApplicationVirtualKeyboard _this, 
  XString aLayoutString )
{
  CoreView view = CoreGroup__FindNextView( _this, 0, 0 );
  XInt32 keyNo = 0;

  while ( view != 0 )
  {
    ViewsText keyText = EwCastObject( view, ViewsText );

    if ( keyText != 0 )
    {
      XString s = EwNewStringChar( EwGetStringChar( aLayoutString, keyNo ), 1 );

      if (( !EwCompString( s, EwLoadString( &_Const005C )) || !EwCompString( s, 
          EwLoadString( &_Const005D ))) || !EwCompString( s, EwLoadString( &_Const005E )))
        s = EwConcatCharString( '%', s );

      ViewsText_OnSetString( keyText, s );
      keyNo = keyNo + 1;
    }

    view = CoreGroup__FindNextView( _this, view, 0 );
  }
}

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has touched the keyboard area. */
void ApplicationVirtualKeyboard_onPress( ApplicationVirtualKeyboard _this, XObject 
  sender )
{
  XPoint pos;
  CoreView view1;
  CoreView view2;
  ViewsText newKeyText;
  ViewsImage newKeyImage;
  ViewsFrame newKeyFrame;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->dragging )
    return;

  pos = _this->SimpleTouchHandler.CurrentPos;
  view1 = CoreGroup__FindViewAtPosition( _this, 0, pos, 0 );
  view2 = CoreGroup__FindViewAtPosition( _this, view1, pos, 0 );
  newKeyText = EwCastObject( view1, ViewsText );
  newKeyImage = EwCastObject( view1, ViewsImage );
  newKeyFrame = EwCastObject( view1, ViewsFrame );

  if ( newKeyFrame == 0 )
    newKeyFrame = EwCastObject( view2, ViewsFrame );

  if (( newKeyFrame == 0 ) && ( _this->currentKeyFrame != 0 ))
    return;

  _this->currentFinger = _this->SimpleTouchHandler.Finger;

  if (( newKeyFrame != 0 ) && ( _this->currentKeyFrame != 0 ))
    EwSignal( EwNewSlot( _this, ApplicationVirtualKeyboard_onRelease ), ((XObject)_this ));

  _this->currentKeyText = newKeyText;
  _this->currentKeyImage = newKeyImage;
  _this->currentKeyFrame = newKeyFrame;

  if ( _this->currentKeyFrame == 0 )
  {
    CoreGroup__OnSetBuffered( _this, 1 );
    _this->dragging = 1;
  }

  EwSignal( EwNewSlot( _this, ApplicationVirtualKeyboard_onDrag ), ((XObject)_this ));
}

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has dragged the finger after touching the keyboard area. */
void ApplicationVirtualKeyboard_onDrag( ApplicationVirtualKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->currentFinger != _this->SimpleTouchHandler.Finger )
    return;

  if ( _this->dragging )
  {
    CoreView__MoveView( _this, _this->SimpleTouchHandler.Offset, 0 );
    return;
  }

  if ( _this->currentKeyFrame == 0 )
    return;

  _this->wasInside = (XBool)EwIsPointInRect( _this->currentKeyFrame->Super1.Bounds, 
  _this->SimpleTouchHandler.CurrentPos );

  if ( _this->wasInside )
    ViewsFrame_OnSetFrameNumber( _this->currentKeyFrame, 0 );
  else
    ViewsFrame_OnSetFrameNumber( _this->currentKeyFrame, 2 );
}

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has finished the touch screen interaction. */
void ApplicationVirtualKeyboard_onRelease( ApplicationVirtualKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->currentFinger != _this->SimpleTouchHandler.Finger )
    return;

  if ( _this->dragging )
  {
    CoreGroup__OnSetBuffered( _this, 0 );
    _this->dragging = 0;
    return;
  }

  if ( _this->currentKeyFrame == 0 )
    return;

  ViewsFrame_OnSetFrameNumber( _this->currentKeyFrame, 2 );

  if ( _this->wasInside )
  {
    XChar charCode = 0x0000;
    XEnum keyCode = CoreKeyCodeNoKey;
    XBool shiftWasLocked = (XBool)( _this->capsLock || _this->shiftLock );

    if (( _this->currentKeyFrame == &_this->FrameShiftLeft ) || ( _this->currentKeyFrame 
        == &_this->FrameShiftRight ))
    {
      _this->shiftLock = (XBool)!_this->shiftLock;
      _this->capsLock = 0;
    }
    else
      if ( _this->currentKeyFrame == &_this->FrameCapsLock )
      {
        _this->capsLock = (XBool)!_this->capsLock;
        _this->shiftLock = 0;
      }
      else
        if ( _this->currentKeyFrame == &_this->FrameBackspace )
          keyCode = CoreKeyCodeClear;
        else
          if ( _this->currentKeyFrame == &_this->FrameTab )
            keyCode = CoreKeyCodeTab;
          else
            if ( _this->currentKeyFrame == &_this->FrameReturn )
              keyCode = CoreKeyCodeEnter;
            else
              if ( EwGetStringChar( _this->currentKeyText->String, 0 ) != '%' )
                charCode = EwGetStringChar( _this->currentKeyText->String, 0 );
              else
                charCode = EwGetStringChar( _this->currentKeyText->String, 1 );

    if (( keyCode != CoreKeyCodeNoKey ) || ( charCode != 0x0000 ))
    {
      CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, charCode, 
      1 );
      CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, charCode, 
      0 );
      _this->shiftLock = 0;
    }

    if ( _this->capsLock )
      ViewsFrame_OnSetFrameNumber( &_this->FrameCapsLock, 0 );
    else
      ViewsFrame_OnSetFrameNumber( &_this->FrameCapsLock, 2 );

    if ( _this->shiftLock )
      ViewsFrame_OnSetFrameNumber( &_this->FrameShiftLeft, 0 );
    else
      ViewsFrame_OnSetFrameNumber( &_this->FrameShiftLeft, 2 );

    ViewsFrame_OnSetFrameNumber( &_this->FrameShiftRight, _this->FrameShiftLeft.FrameNumber );

    if ( shiftWasLocked != ( _this->capsLock || _this->shiftLock ))
    {
      if ( shiftWasLocked )
        ApplicationVirtualKeyboard_loadLayoutFromString( _this, EwLoadString( &_Const005B ));
      else
        ApplicationVirtualKeyboard_loadLayoutFromString( _this, EwLoadString( &_Const005F ));
    }

    EwOnSetChar( _this->OutputKey, charCode );
  }

  _this->currentKeyFrame = 0;
  _this->currentKeyText = 0;
  _this->currentKeyImage = 0;
  EwPostSignal( _this->OnPressKey, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::VirtualKeyboard' */
EW_DEFINE_CLASS_VARIANTS( ApplicationVirtualKeyboard )
EW_END_OF_CLASS_VARIANTS( ApplicationVirtualKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::VirtualKeyboard' */
EW_DEFINE_CLASS( ApplicationVirtualKeyboard, CoreGroup, currentKeyFrame, OnPressKey, 
                 OutputKey, Background, currentFinger, currentFinger, "Application::VirtualKeyboard" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationVirtualKeyboard )

/* Include a file containing the bitmap resource : 'Application::FlatButtonFrame' */
#include "_ApplicationFlatButtonFrame.h"

/* Table with links to derived variants of the bitmap resource : 'Application::FlatButtonFrame' */
EW_RES_WITHOUT_VARIANTS( ApplicationFlatButtonFrame )

/* Initializer for the class 'Application::Panel' */
void ApplicationPanel__Init( ApplicationPanel _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationPanel );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationPanel );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
}

/* Re-Initializer for the class 'Application::Panel' */
void ApplicationPanel__ReInit( ApplicationPanel _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Panel' */
void ApplicationPanel__Done( ApplicationPanel _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::Panel' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPanel )
EW_END_OF_CLASS_VARIANTS( ApplicationPanel )

/* Virtual Method Table (VMT) for the class : 'Application::Panel' */
EW_DEFINE_CLASS( ApplicationPanel, CoreGroup, OnNext, OnNext, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Panel" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_AddBehind,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPanel )

/* Embedded Wizard */
