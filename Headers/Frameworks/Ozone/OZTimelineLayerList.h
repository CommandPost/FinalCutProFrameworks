//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZLayerListOutlineView.h>

@interface OZTimelineLayerList : OZLayerListOutlineView
{
    id _externalDropItem;
    int _externalDropRow;
    BOOL _drawEntireFrame;
}

@property(nonatomic) BOOL drawEntireFrame; // @synthesize drawEntireFrame=_drawEntireFrame;
- (void)scrollWheel:(id)arg1;
- (id)getRowColor:(int)arg1;
- (void)draggingExited:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setExternalDropItem:(id)arg1 row:(int)arg2;
- (id)init;

@end

