//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <TLKit/TLKOperationPipingDestination-Protocol.h>

@class PCChangeLog, TLKPrecisionEditor;

@interface TLKPrecisionEditorDataSyncOperation : NSOperation <TLKOperationPipingDestination>
{
    PCChangeLog *_inputChangeLog;
    TLKPrecisionEditor *_editor;
}

@property(retain, nonatomic) TLKPrecisionEditor *editor; // @synthesize editor=_editor;
@property(copy) PCChangeLog *inputChangeLog; // @synthesize inputChangeLog=_inputChangeLog;
- (void)main;
- (void)dealloc;

@end

