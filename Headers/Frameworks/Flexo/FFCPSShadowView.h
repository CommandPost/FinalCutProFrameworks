//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFCPSClapperboardView, NSProThemeFacet;

__attribute__((visibility("hidden")))
@interface FFCPSShadowView : NSView
{
    NSProThemeFacet *_shadowFacet;
    FFCPSClapperboardView *_clapperView;
}

@property(retain, nonatomic) FFCPSClapperboardView *clapperView; // @synthesize clapperView=_clapperView;
@property(retain, nonatomic) NSProThemeFacet *shadowFacet; // @synthesize shadowFacet=_shadowFacet;
- (struct CGRect)scaleCenterClapperViewInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

