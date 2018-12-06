//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBPuckLayer, NSString;

__attribute__((visibility("hidden")))
@interface CBPuckController : NSObject
{
    long long _puckDragEventCount;
    int _puckType;
    int _boardType;
    NSString *_puckID;
    CBPuckLayer *_puckLayer;
    id <CBPuckControllerDelegate> _delegate;
    id <CBPuckControllerDataSource> _dataSource;
}

+ (id)puckControllerForPuckType:(int)arg1 boardType:(int)arg2;
- (id)initWithPuckType:(int)arg1 boardType:(int)arg2;
- (void)dealloc;
- (struct CGSize)puckSize;
- (double)puckHitAreaInset;
- (id)puckImage;
- (id)pressedPuckImage;
- (id)legendImage;
- (void)addNotificationObservers;
- (void)notificationHandler:(id)arg1;
- (void)resetData;
- (void)movePuckLayerToPosition:(struct CGPoint)arg1;
- (struct CGPoint)puckCurrentNormalizedPosition;
- (struct CGPoint)puckCurrentLayerPosition;
- (BOOL)isYAxisConstrained;
- (BOOL)isXAxisConstrained;
@property(nonatomic) id <CBPuckControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)syncToDataSourceWithAnimation:(BOOL)arg1;
- (struct CGPoint)defaultNormalizedPosition;
- (struct CGPoint)puckNormalizedPosition;
@property(nonatomic) id <CBPuckControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) CBPuckLayer *puckLayer; // @synthesize puckLayer=_puckLayer;
@property(retain) NSString *puckID; // @synthesize puckID=_puckID;
@property(nonatomic) int boardType; // @synthesize boardType=_boardType;
@property(nonatomic) int puckType; // @synthesize puckType=_puckType;
@property(nonatomic) long long puckDragEventCount; // @synthesize puckDragEventCount=_puckDragEventCount;

@end

