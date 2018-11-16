//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

__attribute__((visibility("hidden")))
@interface FFColorBoardPuckInfoLegendView : NSView
{
    int _boardType;
    int _puckType;
}

@property int puckType; // @synthesize puckType=_puckType;
@property int boardType; // @synthesize boardType=_boardType;
- (void)drawNegativeMarkerAtCenterPt:(struct CGPoint)arg1 forNormalizedPt:(struct CGPoint)arg2;
- (void)drawColorAsLegendImageForNormalizedPt:(struct CGPoint)arg1;
- (void)drawPlaceholderAsLegendImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)syncToBoardAndPuckType;
- (void)notificationHandler:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)setBoardType:(int)arg1 andPuckType:(int)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

