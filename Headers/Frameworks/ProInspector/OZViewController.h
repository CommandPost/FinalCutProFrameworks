//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSView, OZViewControllerGroup;

@interface OZViewController : NSObject
{
    OZViewControllerGroup *_pParentController;
    NSView *_pView;
    struct OZChannelBase *_pChan;
    list_ee649c21 *_pChanList;
    BOOL _isHUD;
    BOOL _isEnabled;
    BOOL _ignoreChanEnableState;
    BOOL _ignoreChanVisibilityState;
    NSView *_pDropMarkerView;
    double _viewOriginY;
    double _viewHeight;
    NSMutableArray *_pDependents;
}

- (id)initWithView:(id)arg1 context:(id)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)initWithView:(id)arg1 isHUD:(BOOL)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 isHUD:(BOOL)arg2;
- (void)dealloc;
- (id)view;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)connectKeyViewsRec:(id)arg1;
- (void)encloseViewInBox;
- (void)setMinWidth:(float)arg1;
- (void)setParentController:(id)arg1;
- (id)rootController;
- (BOOL)isDescendantOfController:(id)arg1;
- (id)parentController;
- (void)setIgnoreChanEnableState:(BOOL)arg1;
- (void)setIgnoreChanEnableState:(BOOL)arg1 recurse:(BOOL)arg2;
- (BOOL)isChanEnabled:(struct OZChannelBase *)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setIsEnabled:(BOOL)arg1 recurse:(BOOL)arg2;
- (void)notify:(unsigned int)arg1;
- (void)update;
- (void)enable;
- (void)disable;
- (void)updateEnableState;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)offsetY:(float)arg1;
- (void)select:(BOOL)arg1;
- (void)select:(BOOL)arg1 excludeChannel:(struct OZChannelBase *)arg2;
- (BOOL)isSelected;
- (void)updateBackgroundColor;
- (void)highlightChannel:(struct OZChannelBase *)arg1;
- (int)indentLevel;
- (BOOL)isHUD;
- (void)HUDifyTextField:(id)arg1;
- (void)HUDifyScrubber:(id)arg1;
- (void)HUDifySlider:(id)arg1;
- (void)updateScrubberColor:(id)arg1;
- (void)resignTextFocusCB:(id)arg1;
- (void)resignTextFocus:(id)arg1;
- (void)didBuildUI;
- (void)didTwiddle:(BOOL)arg1;
- (float)suggestedMinLabelWidth;
- (float)suggestedMinParamWidth;
- (float)suggestedMaxParamWidth;
- (void)hide;
- (void)show;
- (void)hide:(BOOL)arg1;
- (void)deleteThisHelper;
- (void)deleteThis;
- (void)cut;
- (void)copy;
- (void)paste;
- (void)selectAll;
- (void)reset;
- (void)getTargetChannels:(set_928275cf *)arg1;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)doDrag:(list_ee649c21 *)arg1 viewList:(id)arg2;
- (id)topChannelController;
- (void)setAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)resetAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)addAssociatedChannel:(struct OZChannelBase *)arg1;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (struct OZChannelBase *)associatedChannel;
- (list_ee649c21 *)associatedChannelList;
- (BOOL)areMultipleAssociatedChannels;
- (void)aboutToChangeController;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1;
- (void)aboutToChangeChannel;
- (void)didChangeChannelDelta;
- (void)didChangeChannel;
- (void)_willSetChannel:(BOOL)arg1;
- (void)_didSetChannel:(BOOL)arg1;
- (void)willSetChannelValue;
- (void)didSetChannelValue;
- (void)willSetChannelFlags;
- (void)didSetChannelFlags;
- (void)postNotification:(unsigned int)arg1;
- (void)processNotifications;
- (void)abort;
- (void)abortAndWait;
- (void)abortAndDirty;
- (BOOL)areAllChannelsEqual;
- (BOOL)willChangingValueKeyframe;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_1b6d18a9)arg2 qualifiers:(int)arg3;
- (void)addDependent:(id)arg1 type:(int)arg2;
- (void)setAccessibilityTag:(const char *)arg1 forObject:(id)arg2;
- (id)controllerForLocation:(struct CGPoint)arg1 useFinalFrame:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)animView:(id)arg1 setHidden:(BOOL)arg2;
- (void)animView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)animView:(id)arg1 setFrameOrigin:(struct CGPoint)arg2;
- (void)animView:(id)arg1 setFrameSize:(struct CGSize)arg2;
- (void)updateViewFinalFrame;
- (struct CGRect)viewFinalFrame;
- (double)viewFinalHeight;
- (double)viewFinalOriginY;
@property(nonatomic) BOOL ignoreChanVisibilityState; // @synthesize ignoreChanVisibilityState=_ignoreChanVisibilityState;

@end

