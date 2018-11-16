//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFLogResultsAlertDelegate.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFScheduledReadAudioFile_TestUtilityLogResultsDelegate : NSObject <FFLogResultsAlertDelegate>
{
    NSDictionary *_failedResultsDict;
    NSDictionary *_skippedResultsDict;
    NSArray *_successList;
}

- (id)columnNameForLogResultsAlert:(id)arg1;
- (BOOL)shouldShowLogResultsView:(id)arg1;
- (id)messageForLogResultsAlert:(id)arg1;
- (unsigned long long)alertStyleForLogResultsAlert:(id)arg1;
- (id)logResultsAlert:(id)arg1 stringValueForItem:(id)arg2;
- (BOOL)logResultsAlert:(id)arg1 isItemExpandable:(id)arg2;
- (id)logResultsAlert:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)logResultsAlert:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)titleForLogResultsAlert:(id)arg1;
- (void)dealloc;
- (id)initWithFailedTestResults:(id)arg1 skippedResults:(id)arg2 successList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

