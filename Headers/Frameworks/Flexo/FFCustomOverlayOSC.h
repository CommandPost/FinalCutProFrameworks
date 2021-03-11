//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOSC.h>

@class FFGPUNSImage, NSDictionary, NSImage, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFCustomOverlayOSC : FFOSC
{
    NSDictionary *_plistOfOSCs;
    int _LRUCount;
    NSMutableDictionary *_textImageCache;
    NSDictionary *_textAttribute;
    NSDictionary *_textAttributeGlow;
    FFGPUNSImage *_imageFrameFacet;
    NSString *_storedAbsoluteString;
    struct CGRect _storedRect;
    NSString *_currentCompoundImageKey;
    NSImage *_storedNSImage;
}

- (BOOL)oscIsFirstOSC;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)readPlist:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isAvailableDuringPlayback;
- (BOOL)supportsMetalRendering;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (void)drawOnScreenForContexts:(id)arg1 drawProperties:(id)arg2;
- (void)drawFromImage:(id)arg1 filmBoundsInViewSpace:(struct CGRect)arg2 renderer:(id)arg3 shouldFill:(BOOL)arg4 opacity:(double)arg5;
- (struct CGRect)destRectFromBoundsAndImageSize:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 shouldFill:(BOOL)arg3;
- (void)drawDictionary:(id)arg1 filmBoundsInViewSpace:(struct CGRect)arg2 renderer:(id)arg3;
- (void)openImageForOverlay:(id)arg1 rect:(struct CGRect)arg2 shouldFill:(BOOL)arg3;
- (id)newImageWithResize:(id)arg1 newSize:(struct CGSize)arg2;
- (id)newBitmapOfSizeForPDF:(struct CGSize)arg1 forURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (void)putUpNameForForObject:(id)arg1 overlayDictionary:(id)arg2 filmBoundsInViewSpace:(struct CGRect)arg3;
- (void)putUpShapesForForObject:(id)arg1 overlayDictionary:(id)arg2 filmBoundsInViewSpace:(struct CGRect)arg3;
- (void)addFrameRectangle:(struct CGRect)arg1 width:(double)arg2 color:(id)arg3 renderer: /* Error: Ran out of types for this method. */;
- (void)_addLineToArray:(id)arg1 point:color: /* Error: Ran out of types for this method. */;
- (void)addSolidRectangle:(struct CGRect)arg1 color:(id)arg2 renderer: /* Error: Ran out of types for this method. */;
- (void)getOutputColorsForDictionary:(id)arg1 red:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5;
- (void)getOutputPointsForDictionary:(id)arg1 point1:(struct CGPoint *)arg2 point2:(struct CGPoint *)arg3 adjustedByFilmSpace:(struct CGRect)arg4;
- (struct CGRect)getOutputRectangleForDictionary:(id)arg1 adjustedByFilmSpace:(struct CGRect)arg2;
- (void)simpleTextRectangle:(float)arg1 rect:(struct CGRect)arg2 renderer:(id)arg3 string:(id)arg4 attributes:(id)arg5 glowAttributes:(id)arg6 paddingX:(double)arg7 paddingY:(double)arg8 roundRectBackground:(BOOL)arg9;
- (void)_setupTextAttributes;
- (void)dealloc;

@end

