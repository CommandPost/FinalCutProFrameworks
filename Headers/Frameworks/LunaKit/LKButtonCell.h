//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProButtonCell.h"

@class NSMutableDictionary, NSProThemeFacet;

@interface LKButtonCell : NSProButtonCell
{
    long long elementID;
    long long partID;
    NSProThemeFacet *customFacet;
    NSMutableDictionary *_cachedFacets;
}

@property long long partID; // @synthesize partID;
@property long long elementID; // @synthesize elementID;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)autosizeControlHeight;
- (float)_heightNeeded;
- (void)setProButtonType:(int)arg1;
- (id)_disclosureTriangleFacet;
- (id)_disclosureKnobGlyphFacet;
- (id)_gradientFacet;
- (void)_setupForProButtonType:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_baseFacet;
@property(retain) NSProThemeFacet *customFacet;
- (void)dealloc;

@end

