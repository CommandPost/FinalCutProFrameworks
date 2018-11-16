//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewCtlrRoot.h"

#import "TXMaterialControllerDelegate.h"

@class LKSegmentedControl, NSBox, NSView, OZAutoInspectorController, OZAutoTextFormatController, OZAutoTextLayoutController, OZAutoTextStyleController, PIBuildContext;

@interface OZTextInspectorController : OZViewCtlrRoot <TXMaterialControllerDelegate>
{
    struct TXTextLayout *_text;
    list_2d8084dd _styles;
    NSView *_pMainView;
    NSBox *_pBox;
    LKSegmentedControl *_pSegmentedControl;
    OZAutoTextFormatController *_pFormatController;
    OZAutoTextStyleController *_pStyleController;
    OZAutoTextLayoutController *_pLayoutController;
    OZAutoInspectorController *_pCurrController;
    BOOL _capturingChannels;
    list_63a35edb *_textList;
    PIBuildContext *_pContext;
    BOOL _settingAssociatedStyles;
    BOOL _repeatStyleReassociation;
}

@property BOOL repeatStyleReassociation; // @synthesize repeatStyleReassociation=_repeatStyleReassociation;
@property BOOL settingAssociatedStyles; // @synthesize settingAssociatedStyles=_settingAssociatedStyles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reassociateAllStyles;
- (void)rebuildInspector;
- (void)didChangeMaterial:(BOOL)arg1;
- (void)willChangeMaterial;
- (void)scrollToOffset:(double)arg1;
- (double)scrollOffset;
- (_Bool)useGlyphTool;
- (id)newFormatControllerWithSceneNode:(struct OZSceneNode *)arg1;
- (void)setAssociatedStyles:(list_2d8084dd *)arg1 force:(BOOL)arg2;
- (void)setAssociatedStyle:(const shared_ptr_e0e110e1 *)arg1;
- (void)resetOrAddAssociatedStyle:(const shared_ptr_e0e110e1 *)arg1 reset:(BOOL)arg2;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (void)switchPane:(id)arg1;
- (void)disable;
- (void)enable;
- (BOOL)isEnabled;
- (void)textSelectionChanged:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)syncFontPanelIfNeeded:(BOOL)arg1;
- (BOOL)isFontPanelVisible;
- (id)newNSShadowForStyle:(const shared_ptr_e0e110e1 *)arg1 time:(CDStruct_198678f7)arg2;
- (id)getNSFontForStyle:(const shared_ptr_e0e110e1 *)arg1 time:(CDStruct_198678f7)arg2;
- (id)mainView;
- (void)dealloc;
- (id)initWithSceneNodes:(list_63a35edb *)arg1 viewCtlrDelegate:(id)arg2 context:(id)arg3;
- (id)initWithSceneNodes:(list_63a35edb *)arg1 viewCtlrDelegate:(id)arg2;
- (void)didCreateNewMaterialLayerControllers;
- (BOOL)isInhibitingUpdates;
- (void)setInhibitUpdates:(BOOL)arg1;

@end

