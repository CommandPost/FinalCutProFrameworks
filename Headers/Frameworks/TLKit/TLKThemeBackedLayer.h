//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSProThemeFacet, NSString;

@interface TLKThemeBackedLayer : CALayer
{
    NSString *_themeKey;
    NSProThemeFacet *_themeFacet;
    struct {
        unsigned int ignoresHitTesting:1;
        unsigned int RESERVED:31;
    } _tlkThemeBackedLayerFlags;
}

+ (id)_newCacheKeyForFacet:(id)arg1;
- (id)init;
- (void)dealloc;
- (struct CGImage *)_imageForFacet:(id)arg1;
- (struct CGRect)_centerRectForFacet:(id)arg1;
- (struct CGRect)_centerRectForFacet;
- (struct CGImage *)themeImage;
- (id)_renditionKey;
@property long long themeElement;
@property long long themePart;
@property long long themeSize;
@property long long themeDirection;
@property long long themeVariant;
@property long long themeValue;
@property long long themeTint;
@property long long themeDimension1;
@property long long themeDimension2;
@property long long themeState;
@property long long themeLayer;
- (id)hitTest:(struct CGPoint)arg1;
@property(retain) NSProThemeFacet *themeFacet;
- (void)setIgnoresHitTesting:(BOOL)arg1;

@end
