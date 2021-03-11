//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKTileView.h>

@class NSImage;

@interface PETaskGroupTileView : LKTileView
{
    NSImage *_dividerImage;
}

- (void)scrollTileToVisible:(id)arg1;
- (void)drawDividerForTile:(id)arg1 inClipRect:(struct CGRect)arg2;
- (void)drawBackgroundForTile:(id)arg1 inClipRect:(struct CGRect)arg2;
@property(readonly, nonatomic) NSImage *dividerImage; // @synthesize dividerImage=_dividerImage;
- (void)dealloc;

@end

