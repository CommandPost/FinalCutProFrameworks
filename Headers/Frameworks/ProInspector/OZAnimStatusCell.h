//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKButtonCell.h>

@class NSTrackingArea, OZViewController;

@interface OZAnimStatusCell : LKButtonCell
{
    CDStruct_1b6d18a9 _time;
    struct OZChannelBase *_pChan;
    list_9af5505e *_pChanList;
    OZViewController *_pViewCtlr;
    unsigned int _mouseOverLocation;
    BOOL _isMouseOverRow;
    int _animState;
    BOOL _hasPreviousKeyframe;
    BOOL _hasNextKeyframe;
    BOOL _areAnyOverRangeChannels;
    BOOL _shouldDisableKeyframeItems;
    unsigned int _mouseDownLocation;
    id _pResetDelegate;
    struct CGRect _trackingCellFrame;
    NSTrackingArea *_pTrackingArea1;
    NSTrackingArea *_pTrackingArea2;
    NSTrackingArea *_pTrackingArea3;
}

@property(nonatomic) BOOL shouldDisableKeyframeItems; // @synthesize shouldDisableKeyframeItems=_shouldDisableKeyframeItems;
@property(nonatomic) BOOL isMouseOverRow; // @synthesize isMouseOverRow=_isMouseOverRow;
@property(nonatomic) unsigned int mouseOverLocation; // @synthesize mouseOverLocation=_mouseOverLocation;
@property(nonatomic) unsigned int mouseDownLocation; // @synthesize mouseDownLocation=_mouseDownLocation;
- (BOOL)defaultUseResetButtonBehavior;
- (void)gridTime;
- (id)imageForAnimState:(int)arg1 withIsMouseOver:(BOOL)arg2;
- (void)updateTrackingAreasForView:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (list_9af5505e *)getChannelList;
- (BOOL)shouldShowKeyframeMenu;
- (BOOL)allowsShowInCurveEditor;
- (void)addCustomMenuItems:(id)arg1;
- (void)postNotification:(unsigned int)arg1;
- (BOOL)isLocked;
- (BOOL)isAnimated:(struct OZChannelBase *)arg1;
- (void)updateState:(id)arg1;
- (void)updateChannel:(struct OZChannelBase *)arg1 time:(const CDStruct_1b6d18a9 *)arg2;
- (void)updateChannelList;
- (void)updateState;
- (BOOL)hasAnyNextKeyframes;
- (BOOL)hasAnyPreviousKeyframes;
- (BOOL)hasKeypointAtTime:(CDStruct_1b6d18a9)arg1 channel:(struct OZChannelBase *)arg2 ignoreCurveType:(BOOL)arg3;
- (int)allChansHaveKeypointAtFrame:(CDStruct_1b6d18a9)arg1 ignoreCurveType:(BOOL)arg2;
- (int)allChansHaveKeypoints;
- (int)allChansAllHaveKeypoints;
- (int)allChansKeyframable;
- (int)allChansKeyframed;
- (int)allChansEnabled;
- (void)didChangeChannels;
- (void)willChangeChannelsWithDesc:(const char *)arg1 onlyKeyframable:(BOOL)arg2;
- (void)recursivelyAddChannelToUndo:(const struct OZChannelBase *)arg1 onlyKeyframable:(BOOL)arg2 description:(const struct PCString *)arg3;
- (id)behaviorMenuImage;
- (id)enableAnimMenuImage;
- (id)newMenu;
- (id)newMenuUseImages:(BOOL)arg1;
- (id)customKeyframeTitle;
- (BOOL)validateMenuItem:(id)arg1;
- (void)doNothing:(id)arg1;
- (void)showInCurveEditor:(id)arg1;
- (void)nextKeyframeForCell:(id)arg1;
- (void)previousKeyframeForCell:(id)arg1;
- (void)setCurrentTimeAndNotify:(const CDStruct_1b6d18a9 *)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)deleteKeyframeForCell:(id)arg1;
- (void)addKeyframeForCell:(id)arg1;
- (void)resetChannelForCell:(id)arg1;
- (void)disableAnimationForCell:(id)arg1;
- (void)enableAnimationForCell:(id)arg1;
- (void)setAnimState:(int)arg1;
- (int)animState;
- (void)rightMouseDown:(id)arg1 inView:(id)arg2;
- (void)mouseExitedRow:(id)arg1;
- (void)mouseEnteredRow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (unsigned int)mouseDownLocationForPoint:(struct CGPoint)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)keyframeDirectionAsset:(int)arg1;
- (BOOL)isOpaque;
- (id)resetDelegate;
- (void)setResetDelegate:(id)arg1;
- (id)missingAssetImage;
- (id)getStatusImageWithDirection:(int)arg1 andState:(int)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initCell;

@end

