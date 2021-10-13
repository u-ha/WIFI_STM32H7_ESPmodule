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

#ifndef _ApplicationVirtualKeyboard_H
#define _ApplicationVirtualKeyboard_H

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

#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::VirtualKeyboard */
#ifndef _ApplicationVirtualKeyboard_
  EW_DECLARE_CLASS( ApplicationVirtualKeyboard )
#define _ApplicationVirtualKeyboard_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
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


/* This is a sample for a virtual keyboard. */
EW_DEFINE_FIELDS( ApplicationVirtualKeyboard, CoreGroup )
  EW_VARIABLE( currentKeyFrame, ViewsFrame )
  EW_VARIABLE( currentKeyText,  ViewsText )
  EW_VARIABLE( currentKeyImage, ViewsImage )
  EW_PROPERTY( OnPressKey,      XSlot )
  EW_PROPERTY( OutputKey,       XRef )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( Frame01,         ViewsFrame )
  EW_OBJECT  ( Frame02,         ViewsFrame )
  EW_OBJECT  ( Frame03,         ViewsFrame )
  EW_OBJECT  ( Frame04,         ViewsFrame )
  EW_OBJECT  ( Frame05,         ViewsFrame )
  EW_OBJECT  ( Frame06,         ViewsFrame )
  EW_OBJECT  ( Frame07,         ViewsFrame )
  EW_OBJECT  ( Frame08,         ViewsFrame )
  EW_OBJECT  ( Frame09,         ViewsFrame )
  EW_OBJECT  ( Frame10,         ViewsFrame )
  EW_OBJECT  ( Frame11,         ViewsFrame )
  EW_OBJECT  ( Frame12,         ViewsFrame )
  EW_OBJECT  ( Frame13,         ViewsFrame )
  EW_OBJECT  ( Frame14,         ViewsFrame )
  EW_OBJECT  ( Frame15,         ViewsFrame )
  EW_OBJECT  ( Frame16,         ViewsFrame )
  EW_OBJECT  ( Frame17,         ViewsFrame )
  EW_OBJECT  ( Frame18,         ViewsFrame )
  EW_OBJECT  ( Frame19,         ViewsFrame )
  EW_OBJECT  ( Frame20,         ViewsFrame )
  EW_OBJECT  ( Frame21,         ViewsFrame )
  EW_OBJECT  ( Frame22,         ViewsFrame )
  EW_OBJECT  ( Frame23,         ViewsFrame )
  EW_OBJECT  ( Frame24,         ViewsFrame )
  EW_OBJECT  ( Frame25,         ViewsFrame )
  EW_OBJECT  ( Frame26,         ViewsFrame )
  EW_OBJECT  ( Frame27,         ViewsFrame )
  EW_OBJECT  ( Frame28,         ViewsFrame )
  EW_OBJECT  ( Frame29,         ViewsFrame )
  EW_OBJECT  ( Frame30,         ViewsFrame )
  EW_OBJECT  ( Frame31,         ViewsFrame )
  EW_OBJECT  ( Frame32,         ViewsFrame )
  EW_OBJECT  ( Frame33,         ViewsFrame )
  EW_OBJECT  ( Frame34,         ViewsFrame )
  EW_OBJECT  ( Frame35,         ViewsFrame )
  EW_OBJECT  ( Frame36,         ViewsFrame )
  EW_OBJECT  ( Frame37,         ViewsFrame )
  EW_OBJECT  ( Frame38,         ViewsFrame )
  EW_OBJECT  ( Frame39,         ViewsFrame )
  EW_OBJECT  ( Frame40,         ViewsFrame )
  EW_OBJECT  ( Frame41,         ViewsFrame )
  EW_OBJECT  ( Frame42,         ViewsFrame )
  EW_OBJECT  ( Frame43,         ViewsFrame )
  EW_OBJECT  ( Frame44,         ViewsFrame )
  EW_OBJECT  ( Frame45,         ViewsFrame )
  EW_OBJECT  ( Frame46,         ViewsFrame )
  EW_OBJECT  ( Frame47,         ViewsFrame )
  EW_OBJECT  ( FrameTab,        ViewsFrame )
  EW_OBJECT  ( FrameCapsLock,   ViewsFrame )
  EW_OBJECT  ( FrameShiftLeft,  ViewsFrame )
  EW_OBJECT  ( FrameBackspace,  ViewsFrame )
  EW_OBJECT  ( FrameReturn,     ViewsFrame )
  EW_OBJECT  ( FrameShiftRight, ViewsFrame )
  EW_OBJECT  ( Text01,          ViewsText )
  EW_OBJECT  ( Text02,          ViewsText )
  EW_OBJECT  ( Text03,          ViewsText )
  EW_OBJECT  ( Text04,          ViewsText )
  EW_OBJECT  ( Text05,          ViewsText )
  EW_OBJECT  ( Text06,          ViewsText )
  EW_OBJECT  ( Text07,          ViewsText )
  EW_OBJECT  ( Text08,          ViewsText )
  EW_OBJECT  ( Text09,          ViewsText )
  EW_OBJECT  ( Text10,          ViewsText )
  EW_OBJECT  ( Text11,          ViewsText )
  EW_OBJECT  ( Text12,          ViewsText )
  EW_OBJECT  ( Text13,          ViewsText )
  EW_OBJECT  ( Text14,          ViewsText )
  EW_OBJECT  ( Text15,          ViewsText )
  EW_OBJECT  ( Text16,          ViewsText )
  EW_OBJECT  ( Text17,          ViewsText )
  EW_OBJECT  ( Text18,          ViewsText )
  EW_OBJECT  ( Text19,          ViewsText )
  EW_OBJECT  ( Text20,          ViewsText )
  EW_OBJECT  ( Text21,          ViewsText )
  EW_OBJECT  ( Text22,          ViewsText )
  EW_OBJECT  ( Text23,          ViewsText )
  EW_OBJECT  ( Text24,          ViewsText )
  EW_OBJECT  ( Text25,          ViewsText )
  EW_OBJECT  ( Text26,          ViewsText )
  EW_OBJECT  ( Text27,          ViewsText )
  EW_OBJECT  ( Text28,          ViewsText )
  EW_OBJECT  ( Text29,          ViewsText )
  EW_OBJECT  ( Text30,          ViewsText )
  EW_OBJECT  ( Text31,          ViewsText )
  EW_OBJECT  ( Text32,          ViewsText )
  EW_OBJECT  ( Text33,          ViewsText )
  EW_OBJECT  ( Text34,          ViewsText )
  EW_OBJECT  ( Text35,          ViewsText )
  EW_OBJECT  ( Text36,          ViewsText )
  EW_OBJECT  ( Text37,          ViewsText )
  EW_OBJECT  ( Text38,          ViewsText )
  EW_OBJECT  ( Text39,          ViewsText )
  EW_OBJECT  ( Text40,          ViewsText )
  EW_OBJECT  ( Text41,          ViewsText )
  EW_OBJECT  ( Text42,          ViewsText )
  EW_OBJECT  ( Text43,          ViewsText )
  EW_OBJECT  ( Text44,          ViewsText )
  EW_OBJECT  ( Text45,          ViewsText )
  EW_OBJECT  ( Text46,          ViewsText )
  EW_OBJECT  ( Text47,          ViewsText )
  EW_OBJECT  ( ImageTab,        ViewsImage )
  EW_OBJECT  ( ImageCapsLock,   ViewsImage )
  EW_OBJECT  ( ImageShiftLeft,  ViewsImage )
  EW_OBJECT  ( ImageBackspace,  ViewsImage )
  EW_OBJECT  ( ImageReturn,     ViewsImage )
  EW_OBJECT  ( ImageShiftRight, ViewsImage )
  EW_VARIABLE( currentFinger,   XInt32 )
  EW_VARIABLE( dragging,        XBool )
  EW_VARIABLE( wasInside,       XBool )
  EW_VARIABLE( capsLock,        XBool )
  EW_VARIABLE( shiftLock,       XBool )
EW_END_OF_FIELDS( ApplicationVirtualKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::VirtualKeyboard' */
EW_DEFINE_METHODS( ApplicationVirtualKeyboard, CoreGroup )
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
EW_END_OF_METHODS( ApplicationVirtualKeyboard )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationVirtualKeyboard_Init( ApplicationVirtualKeyboard _this, XHandle 
  aArg );

/* This method loads new keyboard layout. The layout is determined by the passed 
   string parameter aLayoutString. The characters within the string correspond to 
   the keys accordingly their order. */
void ApplicationVirtualKeyboard_loadLayoutFromString( ApplicationVirtualKeyboard _this, 
  XString aLayoutString );

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has touched the keyboard area. */
void ApplicationVirtualKeyboard_onPress( ApplicationVirtualKeyboard _this, XObject 
  sender );

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has dragged the finger after touching the keyboard area. */
void ApplicationVirtualKeyboard_onDrag( ApplicationVirtualKeyboard _this, XObject 
  sender );

/* This slot method is connected to the SimpleTouchHandler. It will be invoked, 
   when the user has finished the touch screen interaction. */
void ApplicationVirtualKeyboard_onRelease( ApplicationVirtualKeyboard _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationVirtualKeyboard_H */

/* Embedded Wizard */
