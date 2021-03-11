//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSView, OZViewControllerGroup;

@interface OZViewController : NSObject
{
    OZViewControllerGroup *_pParentController;
    NSView *_pView;
    struct OZChannelBase *_pChan;
    list_9af5505e *_pChanList;
    BOOL _isHUD;
    BOOL _isEnabled;
    BOOL _ignoreChanEnableState;
    BOOL _ignoreChanVisibilityState;
    BOOL _hasTopSelectableChannel;
    NSView *_pDropMarkerView;
    double _viewOriginY;
    double _viewHeight;
    int _disclosureTriangleIndentLevel;
    BOOL _isLevelOneBrick;
    BOOL _inSliderAction;
    BOOL _griddingTime;
    NSMutableArray *_pDependents;
    BOOL _deferSelection;
}

@property(nonatomic) BOOL deferSelection; // @synthesize deferSelection=_deferSelection;
@property(retain) NSView *view; // @synthesize view=_pView;
@property(nonatomic) BOOL ignoreChanVisibilityState; // @synthesize ignoreChanVisibilityState=_ignoreChanVisibilityState;
- (BOOL)isLevelOneBrick;
- (void)setIsLevelOneBrick:(BOOL)arg1;
- (int)disclosureTriangleIndentLevel;
- (void)setDisclosureTriangleIndentLevel:(id)arg1;
- (void)addCustomItemsToParameterPulldown:(id)arg1;
- (double)viewFinalOriginY;
- (double)viewFinalHeight;
- (struct CGRect)viewFinalFrame;
- (void)updateViewFinalFrame;
- (void)animView:(id)arg1 setFrameSize:(struct CGSize)arg2;
- (void)animView:(id)arg1 setFrameOrigin:(struct CGPoint)arg2;
- (void)animView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)animView:(id)arg1 setHidden:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)controllerForLocation:(struct CGPoint)arg1 useFinalFrame:(BOOL)arg2;
- (void)setAccessibilityTag:(const char *)arg1 forObject:(id)arg2;
- (void)addDependent:(id)arg1 type:(int)arg2;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (BOOL)willChangingValueKeyframe;
- (BOOL)areAllChannelsEqual;
- (void)abortAndDirty;
- (void)abortAndWait;
- (void)abort;
- (void)processNotifications;
- (void)postNotification:(unsigned int)arg1;
- (void)didSetChannelFlags;
- (void)willSetChannelFlags;
- (void)didSetChannelValue;
- (void)willSetChannelValue;
- (void)_didSetChannel:(BOOL)arg1;
- (void)_willSetChannel:(BOOL)arg1;
- (void)didChangeChannel;
- (void)didChangeChannelDelta;
- (void)aboutToChangeChannel;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (void)didChangeChannelGridEnd:(struct OZChannelBase *)arg1;
- (void)aboutToChangeChannelGridStart:(struct OZChannelBase *)arg1;
- (void)didEndSliderAction;
- (BOOL)inSliderAction;
- (void)didEndSliderAction:(struct OZChannelBase *)arg1;
- (void)aboutToStartSliderAction;
- (void)aboutToStartSliderAction:(struct OZChannelBase *)arg1;
- (void)aboutToChangeController;
- (BOOL)ignoreDifferingRootIDs;
- (BOOL)areMultipleAssociatedChannels;
- (list_9af5505e *)associatedChannelList;
- (struct OZChannelBase *)associatedChannel;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)resetAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)setAssociatedChannel:(struct OZChannelBase *)arg1;
- (void)willResetChannels;
- (id)topSelectableController;
- (id)topChannelController;
- (void)doDrag:(list_9af5505e *)arg1 viewList:(id)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (void)getTargetChannels:(set_8ca329ee *)arg1;
- (void)reset;
- (void)selectAll;
- (void)paste;
- (void)copyAction;
- (void)cut;
- (void)deleteThis;
- (void)deleteThisHelper;
- (void)hide:(BOOL)arg1;
- (void)show;
- (void)hide;
- (float)suggestedMaxParamWidth;
- (float)suggestedMinParamWidth;
- (float)suggestedMaxLabelWidth;
- (float)suggestedMinLabelWidth;
- (void)didTwiddle:(BOOL)arg1;
- (void)willTeardownUI;
- (void)didBuildUI;
- (void)resignTextFocus:(id)arg1;
- (void)resignTextFocusCB:(id)arg1;
- (void)updateScrubberColor:(id)arg1;
- (void)HUDifySlider:(id)arg1;
- (void)HUDifyScrubber:(id)arg1;
- (void)HUDifyTextField:(id)arg1;
- (BOOL)isHUD;
- (int)indentLevel;
- (void)highlightChannel:(struct OZChannelBase *)arg1;
- (void)updateBackgroundColor;
- (BOOL)isSelected;
- (void)select:(BOOL)arg1 excludeChannel:(struct OZChannelBase *)arg2;
- (void)select:(BOOL)arg1;
- (void)offsetY:(float)arg1;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)updateEnableState;
- (void)disable;
- (void)enable;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (void)setIsEnabled:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)isChanEnabled:(struct OZChannelBase *)arg1;
- (void)setIgnoreChanEnableState:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)setIgnoreChanEnableState:(BOOL)arg1;
- (id)parentController;
- (BOOL)isDescendantOfController:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setMinWidth:(float)arg1;
- (void)encloseViewInBox;
- (id)connectKeyViewsRec:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 isHUD:(BOOL)arg2;
- (id)initWithView:(id)arg1 isHUD:(BOOL)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)initWithView:(id)arg1 context:(id)arg2;

@end

