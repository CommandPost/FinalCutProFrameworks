//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZAutoHUDController.h"

@class OZViewController;

@interface TXTextHUDController : OZAutoHUDController
{
    OZViewController *_blendingCtrl;
    OZViewController *_opacityCtrl;
    OZViewController *_lineSpacingCtrl;
}

- (void)_resizeRowCtrl:(id)arg1 width:(double)arg2;
- (BOOL)loadView;
- (void)dealloc;
- (void)buildUIWithObjectList:(list_2c251165 *)arg1 viewController:(id)arg2 context:(id)arg3;
- (void)notify:(unsigned int)arg1;
- (_Bool)useGlyphTool;
@property(retain, nonatomic) OZViewController *lineSpacingCtrl; // @synthesize lineSpacingCtrl=_lineSpacingCtrl;
@property(retain, nonatomic) OZViewController *blendingCtrl; // @synthesize blendingCtrl=_blendingCtrl;
@property(retain, nonatomic) OZViewController *opacityCtrl; // @synthesize opacityCtrl=_opacityCtrl;

@end
