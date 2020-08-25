//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerStaticText.h>

#import "FFVideoScopesIntrinsics.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFVideoScopesTextLayer : FFResponderLayerStaticText <FFVideoScopesIntrinsics>
{
    struct CGSize _intrinsicContentSize;
    double _intrinsicStringWidth;
}

- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)fittingSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFont:(void *)arg1;
- (void)setString:(id)arg1;
- (void)setupDefaultProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

