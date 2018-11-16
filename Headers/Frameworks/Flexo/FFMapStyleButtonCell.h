//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKButtonCell.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface FFMapStyleButtonCell : LKButtonCell
{
    NSImage *_mapFacetImage;
}

@property(retain) NSImage *mapFacetImage; // @synthesize mapFacetImage=_mapFacetImage;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)_labelRectForFrame:(struct CGRect)arg1 mapImageRect:(struct CGRect)arg2 measureString:(BOOL)arg3;
- (struct CGRect)_mapImageRectForFrame:(struct CGRect)arg1;
- (struct CGRect)_buttonRectForFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

