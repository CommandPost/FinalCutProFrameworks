//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFRenderFilesPurgeManager : NSObject
{
}

- (void)purgeEventShareFiles:(id)arg1 purgeType:(int)arg2;
- (void)purgeProjectRenderFiles:(id)arg1 purgeType:(int)arg2;
- (void)purgeEventRenderFiles:(id)arg1 purgeType:(int)arg2;
- (id)renderFileDirectoriesForEventRecord:(id)arg1 quality:(int)arg2;
- (void)purgeSequenceRenderFiles:(id)arg1 fileURLS:(id)arg2 purgeType:(int)arg3;
- (id)usedRenderFilesForSequences:(id)arg1 renderFilesPaths:(id)arg2;
- (void)invalidateRenderStateForSequences:(id)arg1;
- (void)refreshRenderFileStateForTracker:(id)arg1;

@end
