//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZTypefacePopUpController.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface TXTypefacePopUpController : OZTypefacePopUpController <NSMenuDelegate>
{
}

- (void)removeNotifications;
- (void)setupNotifications;
- (id)nibName;
- (void)setChannel:(struct OZChannel *)arg1 value:(int)arg2 time:(CDStruct_198678f7)arg3;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)_saveDefaultFont:(int)arg1;
- (struct OZFontFamily *)getCurrentFamily;
- (struct OZFontCollection *)getCurrentCollection;
- (struct OZFontFace *)getFontFaceForChannel:(struct OZChannel *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

