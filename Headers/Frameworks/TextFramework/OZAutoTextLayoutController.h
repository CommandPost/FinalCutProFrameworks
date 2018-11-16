//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/OZAutoTextInspectorController.h>

@class OZFolderGroupController, OZVerticesController, OZViewController, TXTabStopsViewController;

@interface OZAutoTextLayoutController : OZAutoTextInspectorController
{
    struct TXTextLayout *_text;
    OZFolderGroupController *_pathCtrl;
    OZViewController *_leftMarginCtrl;
    OZViewController *_rightMarginCtrl;
    OZViewController *_bottomMarginCtrl;
    OZViewController *_topMarginCtrl;
    OZViewController *_renderSpaceCtrl;
    OZViewController *_faceCameraCtrl;
    OZViewController *_alignToPathCtrl;
    OZViewController *_insidePathCtrl;
    OZVerticesController *_pVerticesController;
    OZViewController *_layoutMethodCtrl;
    OZViewController *_flattenCtrl;
    OZViewController *_scaleToMargins;
    OZViewController *_cropToMargins;
    OZViewController *_scaleToXMargin;
    OZViewController *_scaleToYMargin;
    OZFolderGroupController *_tabFolderCtrl;
    TXTabStopsViewController *_tabStopsViewCtrl;
    unsigned int _currentPara;
    unsigned int _numTabs;
}

- (struct TXTextStyle *)getCurrentStyle;
- (void)showHidePathChannels:(int)arg1;
- (void)notify:(unsigned int)arg1;
- (void)enableDisableLayoutUI:(int)arg1;
- (void)layoutMethodChanged:(id)arg1;
- (void)delayedReleaseCB:(id)arg1;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)delayedRelease;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;
- (void)_updateOnFaceCameraChange;
- (void)_updateOnFlattenChange;
- (void)interlockMarginChannels:(struct OZChannelBase *)arg1;
- (struct OZChannelFolder *)getRootChan:(struct OZSceneNode *)arg1;
- (void)dealloc;

@end

