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

- (id)init;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (id)_nsString;
- (id)_nsFont;
- (void)sizeToFit;
- (struct CGSize)stringSize;
- (void)setBounds:(struct CGRect)arg1;
@property(copy) id string;
@property void *font;
@property double fontSize;
@property struct CGColor *foregroundColor;
@property(getter=isWrapped) BOOL wrapped;
@property(copy) NSString *truncationMode;
@property(copy) NSString *alignmentMode;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

