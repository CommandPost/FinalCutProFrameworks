//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMutableDictionary, NSString;

@interface VerticalImageCache : NSObject
{
    NSString *m_name;
    NSImage *m_image;
    NSMutableDictionary *m_cachedParts;
    int m_topSize;
    int m_middleSize;
    int m_bottomSize;
    int m_rowHeight;
    int m_blockWidth;
    int m_origTop;
    int m_origCols;
    int m_origRows;
}

+ (void)registerImageCacheWithName:(id)arg1 topSize:(int)arg2 middleSize:(int)arg3 bottomSize:(int)arg4 rows:(int)arg5 columns:(int)arg6;
+ (id)imageCacheWithName:(id)arg1;
- (void)dealloc;
- (void)loadImage;
- (id)initWithName:(id)arg1 topSize:(int)arg2 middleSize:(int)arg3 bottomSize:(int)arg4 rows:(int)arg5 columns:(int)arg6;
- (struct CGSize)cellSize;
- (int)width;
- (int)height;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 state:(int)arg3 value:(int)arg4;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 state:(int)arg3 value:(int)arg4 stretchWidth:(BOOL)arg5 opacity:(float)arg6;
- (id)imagePart:(int)arg1 state:(int)arg2 value:(int)arg3;

@end

