//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBitmapImageRep, NSGraphicsContext;

@interface PODrawableTexture : NSObject
{
    int _width;
    int _height;
    unsigned int _textureID;
    struct shared_ptr<PCBitmap> *_bitmap;
    NSBitmapImageRep *_pImageRep;
    NSGraphicsContext *_pContext;
    _Bool _hasDrawingBegun;
}

- (id)newMetalTexture:(id)arg1;
- (unsigned int)getTextureID;
- (void)drawGLTextureWithTransform:(struct PODrawableTextureTransform)arg1;
- (void)dumpBitmapDataToGLTexture;
- (char *)finalizedBitmapData;
- (void)prepareContext;
- (void)endDrawingInto;
- (void)beginDrawingInto;
- (struct PODrawableTextureTransform)transformFromPoint:(struct CGPoint)arg1 rotatedBy:(double)arg2 aroundPivot:(struct CGPoint)arg3 withScaleX:(double)arg4 withScaleY:(double)arg5 withOpacity:(double)arg6;
- (struct PODrawableTextureTransform)transformFromPoint:(struct CGPoint)arg1 rotatedBy:(double)arg2 aroundPivot:(struct CGPoint)arg3;
- (struct PODrawableTextureTransform)transformFromPoint:(struct CGPoint)arg1 withScaleX:(double)arg2 withScaleY:(double)arg3;
- (struct PODrawableTextureTransform)transformFromPoint:(struct CGPoint)arg1 withOpacity:(double)arg2;
- (struct PODrawableTextureTransform)transformFromPoint:(struct CGPoint)arg1;
- (int)getHeight;
- (int)getWidth;
- (struct PCBitmap *)getBitmap;
- (void)setWidth:(int)arg1 andHeight:(int)arg2;
- (void)dealloc;
- (id)initWithNSImage:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithNSImage:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;

@end

