//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZLibraryPresetViewCtlr.h>

@class OZAnimIndicator, OZGradientView, OZLibraryPresetsButton;

@interface OZMoChanGradientStripController : OZLibraryPresetViewCtlr
{
    OZGradientView *_pGradientView;
    OZAnimIndicator *_pAnim;
    OZLibraryPresetsButton *_pPresets;
}

- (void)update;
- (void)didTwiddle:(BOOL)arg1;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

