//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSProThemeFacet;

__attribute__((visibility("hidden")))
@interface FFProjectExtrasContainerView : NSView
{
    NSProThemeFacet *_dividerThemeFacet;
    NSImage *_dividerImage;
}

@property(retain, nonatomic) NSImage *dividerImage; // @synthesize dividerImage=_dividerImage;
@property(retain, nonatomic) NSProThemeFacet *dividerThemeFacet; // @synthesize dividerThemeFacet=_dividerThemeFacet;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
