//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFModalTool, FFNotification, NSEvent;

@protocol FFModalToolDelegate <NSObject>

@optional
- (NSEvent *)modalTool:(FFModalTool *)arg1 handleFilteredEvent:(NSEvent *)arg2;
- (void)modalTool:(FFModalTool *)arg1 willUndoRedoWithNotification:(FFNotification *)arg2;
- (void)willResignModalTool:(FFModalTool *)arg1;
- (void)didActivateModalTool:(FFModalTool *)arg1;
@end
