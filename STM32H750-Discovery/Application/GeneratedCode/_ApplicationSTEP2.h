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

#ifndef _ApplicationSTEP2_H
#define _ApplicationSTEP2_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000B0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationPanel.h"
#include "_ApplicationVirtualKeyboard.h"
#include "_CoreKeyPressHandler.h"
#include "_ViewsBorder.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"

/* Forward declaration of the class Application::STEP2 */
#ifndef _ApplicationSTEP2_
  EW_DECLARE_CLASS( ApplicationSTEP2 )
#define _ApplicationSTEP2_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Application::STEP2' */
EW_DEFINE_FIELDS( ApplicationSTEP2, ApplicationPanel )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( BackBtn,         WidgetSetPushButton )
  EW_OBJECT  ( NextBtn,         WidgetSetPushButton )
  EW_OBJECT  ( PW_Font,         ViewsText )
  EW_OBJECT  ( Status_Font,     ViewsText )
  EW_OBJECT  ( Border,          ViewsBorder )
  EW_OBJECT  ( PW_Input,        ViewsText )
  EW_OBJECT  ( KeyHandler1,     CoreKeyPressHandler )
  EW_OBJECT  ( KeyHandler2,     CoreKeyPressHandler )
  EW_OBJECT  ( VKeyBoard,       ApplicationVirtualKeyboard )
  EW_PROPERTY( Temp_String,     XChar )
EW_END_OF_FIELDS( ApplicationSTEP2 )

/* Virtual Method Table (VMT) for the class : 'Application::STEP2' */
EW_DEFINE_METHODS( ApplicationSTEP2, ApplicationPanel )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindViewAtPosition, CoreView )( CoreGroup _this, CoreView aView, XPoint 
    aPosition, XSet aFilter )
  EW_METHOD( FindNextView,      CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( AddBehind,         void )( CoreGroup _this, CoreView aView, CoreView 
    aSibling )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationSTEP2 )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSTEP2_Init( ApplicationSTEP2 _this, XHandle aArg );

/* 'C' function for method : 'Application::STEP2.OnPressKey1()' */
void ApplicationSTEP2_OnPressKey1( ApplicationSTEP2 _this, XObject sender );

/* 'C' function for method : 'Application::STEP2.OnPressKey2()' */
void ApplicationSTEP2_OnPressKey2( ApplicationSTEP2 _this, XObject sender );

/* 'C' function for method : 'Application::STEP2.OnCheckEnter()' */
void ApplicationSTEP2_OnCheckEnter( ApplicationSTEP2 _this, XObject sender );

/* 'C' function for method : 'Application::STEP2.OnBackEnter()' */
void ApplicationSTEP2_OnBackEnter( ApplicationSTEP2 _this, XObject sender );

/* 'C' function for method : 'Application::STEP2.OnSetTemp_String()' */
void ApplicationSTEP2_OnSetTemp_String( ApplicationSTEP2 _this, XChar value );

/* 'C' function for method : 'Application::STEP2.OnGetTemp_String()' */
XChar ApplicationSTEP2_OnGetTemp_String( ApplicationSTEP2 _this );

/* 'C' function for method : 'Application::STEP2.OnKeyAction()' */
void ApplicationSTEP2_OnKeyAction( ApplicationSTEP2 _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSTEP2_H */

/* Embedded Wizard */
