//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZFontFamilyPopUpController.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface TXFontFamilyPopUpController : OZFontFamilyPopUpController <NSMenuDelegate>
{
    struct TXTextLayout *_text;
}

- (double)backingScaleFactor;
- (void)removeNotifications;
- (void)setupNotifications;
- (void)fontFamilyControllerDidChange;
- (id)nibName;
- (id)getFontImageCache;
- (struct OZFontCollection *)getCurrentCollection;
- (void)setChannel:(struct OZChannel *)arg1 value:(int)arg2 time:(CDStruct_198678f7)arg3;
- (void)saveDefaultFont:(int)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

