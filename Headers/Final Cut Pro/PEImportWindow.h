//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKWindow.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString;

@interface PEImportWindow : LKWindow <NSWindowDelegate>
{
}

- (void)cancelOperation:(id)arg1;
- (void)close;
- (void)orderFront:(id)arg1;
- (id)isImportWindowAsValue;
- (id)sourceButton;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

