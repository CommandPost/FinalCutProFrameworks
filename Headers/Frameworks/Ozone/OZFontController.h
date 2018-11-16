//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class OZFontFamilyPopUpController, OZTypefacePopUpController, OZViewController;

@interface OZFontController : OZViewControllerGroup
{
    OZFontFamilyPopUpController *_familyCtlr;
    OZTypefacePopUpController *_typefaceCtlr;
    OZViewController *_paramPulldownCtlr;
}

- (float)suggestedMinParamWidth;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)fontFamilyControllerDidChange;
- (void)notify:(unsigned int)arg1;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)createTypefacePopUpController:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)createFontFamilyPopUpController:(struct OZChannelBase *)arg1 context:(id)arg2;
- (struct OZChannelEnum *)fontTypefaceChannelForChannel:(struct OZChannelBase *)arg1;
- (struct OZChannelEnum *)fontFamilyChannelForChannel:(struct OZChannelBase *)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2 indent:(BOOL)arg3;
- (void)inspectorWillDealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

