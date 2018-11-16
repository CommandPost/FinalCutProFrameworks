//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewCtlrRoot.h"

@class OZViewController, TXAlignmentColorController;

@interface TXTextHUDViewControllerGroup : OZViewCtlrRoot
{
    OZViewController *_presetCtrl;
    OZViewController *_fontCtrl;
    OZViewController *_sizeCtrl;
    OZViewController *_trackingCtrl;
    OZViewController *_extrusionDepthCtrl;
    OZViewController *_lineSpacingCtrl;
    TXAlignmentColorController *_alignmentCtrl;
    BOOL _capturingChannels;
    list_bb601910 _styles;
}

@property(retain, nonatomic) OZViewController *extrusionDepthCtrl; // @synthesize extrusionDepthCtrl=_extrusionDepthCtrl;
@property(retain, nonatomic) OZViewController *lineSpacingCtrl; // @synthesize lineSpacingCtrl=_lineSpacingCtrl;
@property(retain, nonatomic) OZViewController *trackingCtrl; // @synthesize trackingCtrl=_trackingCtrl;
@property(retain, nonatomic) OZViewController *sizeCtrl; // @synthesize sizeCtrl=_sizeCtrl;
@property(retain, nonatomic) TXAlignmentColorController *alignmentCtrl; // @synthesize alignmentCtrl=_alignmentCtrl;
@property(retain, nonatomic) OZViewController *fontCtrl; // @synthesize fontCtrl=_fontCtrl;
@property(retain, nonatomic) OZViewController *presetCtrl; // @synthesize presetCtrl=_presetCtrl;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)useGlyphTool;
- (void)textSelectionChanged:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)updateFor3D:(BOOL)arg1;
- (void)setAssociatedLineSpacingChannels:(vector_358c9849 *)arg1;
- (void)updateLineSpacingController:(list_5b338eba *)arg1;
- (void)setAssociatedStyles:(list_bb601910 *)arg1;
- (void)addOrResetAssociatedStyle:(const shared_ptr_e0e110e1 *)arg1 isAdd:(BOOL)arg2;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

