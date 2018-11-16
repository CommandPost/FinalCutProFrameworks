//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerControl.h>

@class CATextLayer, NSString;

__attribute__((visibility("hidden")))
@interface FFResponderLayerStaticText : FFResponderLayerControl
{
    CATextLayer *_textLayer;
}

@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
@property(copy) NSString *alignmentMode;
@property(copy) NSString *truncationMode;
@property(getter=isWrapped) BOOL wrapped;
@property struct CGColor *foregroundColor;
@property double fontSize;
@property void *font;
@property(copy) id string;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)stringSize;
- (void)sizeToFit;
- (id)_nsFont;
- (id)_nsString;
- (void)setContentsScale:(double)arg1;
- (id)init;

@end

