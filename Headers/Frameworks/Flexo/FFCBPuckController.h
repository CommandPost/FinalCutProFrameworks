//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFColorBoardPuckButton, NSString;

__attribute__((visibility("hidden")))
@interface FFCBPuckController : NSObject
{
    long long _puckDragEventCount;
    int _puckType;
    int _boardType;
    NSString *_puckID;
    FFColorBoardPuckButton *_puckView;
    id <CBPuckControllerDelegate> _delegate;
    id <CBPuckControllerDataSource> _dataSource;
}

+ (id)puckControllerForPuckType:(int)arg1 boardType:(int)arg2;
@property(nonatomic) id <CBPuckControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <CBPuckControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FFColorBoardPuckButton *puckView; // @synthesize puckView=_puckView;
@property(retain, nonatomic) NSString *puckID; // @synthesize puckID=_puckID;
@property(nonatomic) int boardType; // @synthesize boardType=_boardType;
@property(nonatomic) int puckType; // @synthesize puckType=_puckType;
@property(nonatomic) long long puckDragEventCount; // @synthesize puckDragEventCount=_puckDragEventCount;
- (struct CGPoint)puckNormalizedPosition;
- (void)setPuckNormalizedPosition:(struct CGPoint)arg1;
- (struct CGPoint)defaultNormalizedPosition;
- (void)syncToDataSourceWithAnimation:(BOOL)arg1;
- (BOOL)isXAxisConstrained;
- (BOOL)isYAxisConstrained;
- (struct CGPoint)puckCurrentUICenterPosition;
- (struct CGPoint)puckCurrentNormalizedPosition;
- (void)movePuckUIToCenterPosition:(struct CGPoint)arg1;
- (void)resetData;
- (void)updatePuckUI;
- (void)notificationHandler:(id)arg1;
- (void)addNotificationObservers;
- (void)setPuckFocus:(BOOL)arg1;
- (BOOL)puckHasFocus;
- (id)legendImage;
- (id)pressedPuckImage;
- (id)puckImage;
- (double)puckHitAreaInset;
- (struct CGSize)puckSize;
- (void)setPuckUI:(id)arg1;
- (id)puckUI;
- (void)dealloc;
- (id)initWithPuckType:(int)arg1 boardType:(int)arg2;

@end

