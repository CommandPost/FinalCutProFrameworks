//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKTimelineView.h"

__attribute__((visibility("hidden")))
@interface FFProTimelineView : TLKTimelineView
{
    struct CGColor *_itemSelectionColor;
    struct CGColor *_dependantIndicatorColorRef;
    struct CGColor *_relatedIndicatorColorRef;
}

- (struct CGColor *)relatedItemSelectionColorRef;
- (struct CGColor *)dependantItemSelectionColorRef;
- (struct CGColor *)itemSelectionColorRef;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
